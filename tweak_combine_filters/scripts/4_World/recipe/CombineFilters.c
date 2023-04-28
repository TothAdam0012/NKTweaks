class CombineFilters extends RecipeBase
{
	// if you want to change the % going to waste then simply modify this variable
	float loss = 10.0; // how much should go to waste when combining filters (in %)

	// don't change the 2 below
	float removeMultiplier = loss/100.0 + 1;	// amount that is additionally removed from the donor filter after conversion
	float donorMultiplier = 1/removeMultiplier;	// maximum amount the donor filter can give
	// if the loss is 10% then the removeMultiplier is 1.1 (if the donor gives 30% then 30*1.1 = 33% is removed)
	// if the loss is 10% then the donorMultiplier is ~0.9090, meaning that if the donor filter has 100% quantity
	// then it can only 'donate' ~90.90% because I also remove an additional 10% (90.90% * 1.1 = ~100)

	override void Init()
	{
		m_Name = "#STR_FillFilter";
		m_IsInstaRecipe = false;
		m_AnimationLength = 0.5;
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision

		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//3 = not ruined
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;

		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//3 = not ruined
		m_MinQuantityIngredient[1] = 1;
		m_MaxQuantityIngredient[1] = -1;
		//----------------------------------------------------------------------------------------------------------------------
		//ingredient 1
		InsertIngredient(0,"GasMask_Filter");
		InsertIngredient(0,"GasMask_Filter_Improvised");

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"GasMask_Filter");
		InsertIngredient(1,"GasMask_Filter_Improvised");
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
	}

	//----------------------------------------------------------------------------------------------------------------------

	override bool CanDo( ItemBase ingredients[], PlayerBase player )
	{
		ItemBase filter = ingredients[0];

		if(filter.GetQuantity() >= filter.GetQuantityMax()) //Do not fill already full filters
		{
			return false;
		}		
		
		// Check if not attached to a gas mask
		InventoryLocation il = new InventoryLocation;
		filter.GetInventory().GetCurrentInventoryLocation(il);
		EntityAI inv = il.GetParent();
		
		if(inv != null && (inv.GetType() == "GP5GasMask" || inv.GetType() == "AirborneMask"))
		{
			return false;
		}		
		
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		ItemBase donor = ingredients[1];
		ItemBase filter = ingredients[0];
		float donorQuantity = donor.GetQuantity();
		float filterQuantity = filter.GetQuantity();
		float filterMaxQuantity = filter.GetQuantityMax();

		float filledQuantity = filterQuantity + donorQuantity * donorMultiplier;

		if(filledQuantity > filterMaxQuantity) // if adding the donor would go over the max then we set the filter to max and set the donor amount to the excess
		{
			filter.SetQuantity(filterMaxQuantity);
			float removedAmount = (filterMaxQuantity - filterQuantity) * removeMultiplier;

			if(donorQuantity - removedAmount < donor.GetQuantityMax() * 0.01) // if less then 1% would remain I remove the donor filter
				donor.Delete();
			else
				donor.AddQuantity(-removedAmount);
		}
		else
		{
			filter.SetQuantity(filledQuantity);
			donor.Delete();
		}
	}
};
