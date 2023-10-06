modded class MaskMdfr: ModifierBase
{
	// Default values:

	/*
	const float IN_AREA_CONSUME_FILTER_QUANTITY_PER_SEC = 0.3;
	const float OUT_AREA_CONSUME_FILTER_QUANTITY_PER_SEC = 0.03;

	const float LOW_FILTER_SOUND_THRESHOLD = 0.2;//[0..1] , what's the filter quantity between 0 and 1 at which low filter sounds begin playing ?
	*/

	const float IN_AREA_CONSUME_FILTER_QUANTITY_PER_SEC = 0.1; // filters last 3x longer
	const float OUT_AREA_CONSUME_FILTER_QUANTITY_PER_SEC = 0.02; // filters outside of gas zone last 50% longer
	const float MODDED_CONSUME_FILTER_QUANTITY_PER_SEC = 0.02; // filters in Nekladek nbc gas zone still last 1.5x longer than vanilla, last 50% less than in other zones on the map

	const float LOW_FILTER_SOUND_THRESHOLD = 0.07;//[0..1] suffering soundeffects start playing at lower ratio bc filters last longer
	
	// low-filter sounds start playing at 105 seconds (1 min 45s) remaining from the filter (vanilla is 100)
	// full filters in generic gas zones last 25 mins (in vanilla it's 8 min 20s)
	// full filters in the nbc gas zone (powerplant) last 12 min 30s (half of generic nekladek zones, 1.5x more than vanilla)
	// full filters outside of gas zones last for 125 mins instead of 83 min 20s in vanilla)

	override void OnTick(PlayerBase player, float deltaT)
	{	
		MaskBase mask = MaskBase.Cast(player.GetInventory().FindAttachment(InventorySlots.MASK));
		
		float consume_quantity = OUT_AREA_CONSUME_FILTER_QUANTITY_PER_SEC;
		
		bool inside_area = m_Manager.IsModifierActive(eModifiers.MDF_AREAEXPOSURE);
		
		if(inside_area)
		{
			consume_quantity = IN_AREA_CONSUME_FILTER_QUANTITY_PER_SEC;
		}

		if ( mask && !mask.IsDamageDestroyed())
		{
			bool consuming_filter = mask.ConsumeQuantity(consume_quantity * deltaT, player);
			StaminaSoundHandlerServer.Cast(player.GetPlayerSoundManagerServer().GetHandler(eSoundHandlers.STAMINA)).SetStaminaZoneOffset(1);

			if (mask.HasValidFilter())
			{
				player.GetStaminaHandler().ActivateRecoveryModifier(EStaminaMultiplierTypes.MASK);
				player.GetStaminaHandler().ActivateDepletionModifier(EStaminaMultiplierTypes.MASK);
				
			}
			else
			{
				player.GetStaminaHandler().DeactivateRecoveryModifier(EStaminaMultiplierTypes.MASK);
				player.GetStaminaHandler().DeactivateDepletionModifier(EStaminaMultiplierTypes.MASK);
			}
			HandleSounds(player, deltaT, mask);
		}
	}
};