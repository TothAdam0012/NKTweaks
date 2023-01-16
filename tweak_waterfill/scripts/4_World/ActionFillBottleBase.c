modded class ActionFillBottleBase: ActionContinuousBase
{
	bool WaterCheck(PlayerBase player, ActionTarget target) {
		//
		// koordináta check, ha kell
		//
		CCTWaterSurface waterCheck = new CCTWaterSurface(UAMaxDistances.DEFAULT, UAWaterType.ALL);
		return waterCheck.Can(player, target);
	}

	override int GetLiquidType( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( target.GetObject() && target.GetObject().IsFuelStation() && Liquid.CanFillContainer(item, LIQUID_GASOLINE ) )
		{
			return LIQUID_GASOLINE;
		}
		return LIQUID_WATER;
	}
	
	int GetLiquidType2( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( Liquid.CanFillContainer(item, LIQUID_WATER ) && ( WaterCheck(player, target) || (target.GetObject() && target.GetObject().IsWell()) ) )
		{
			return LIQUID_WATER;
		}
		else if ( Liquid.CanFillContainer(item, LIQUID_GASOLINE ) && target.GetObject() && target.GetObject().IsFuelStation() )
		{
			return LIQUID_GASOLINE;
		}
		
		return -1;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (item.IsFullQuantity())
			return false;		
		if (GetGame().IsServer() && GetGame().IsMultiplayer())
			return true;
		if (GetLiquidType2(player,target,item) != -1 && !player.IsPlacingLocal())
			return true;
		return false;
	}
};