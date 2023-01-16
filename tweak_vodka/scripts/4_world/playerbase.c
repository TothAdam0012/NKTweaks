modded class PlayerBase {
	
	override bool Consume(ItemBase source, float amount, EConsumeType consume_type )
	{
		PluginTransmissionAgents plugin = PluginTransmissionAgents.Cast( GetPlugin(PluginTransmissionAgents) );
		int agents;
		if( consume_type == EConsumeType.ENVIRO_POND || consume_type == EConsumeType.ENVIRO_WELL )
		{
			if ( consume_type == EConsumeType.ENVIRO_POND )
			{
				agents = agents | eAgents.CHOLERA;
			}
			m_PlayerStomach.AddToStomach(Liquid.GetLiquidClassname(LIQUID_WATER), amount, 0 , agents );
			
			
			return true;
		}
		
		Edible_Base edible_item = Edible_Base.Cast(source);
		if(!edible_item)
		{
			return false;
		}
		agents = edible_item.GetAgents();
		if( consume_type == EConsumeType.ITEM_SINGLE_TIME || consume_type == EConsumeType.ITEM_CONTINUOUS )
		{
			if(consume_type == EConsumeType.ITEM_SINGLE_TIME)
			{
				plugin.TransmitAgents(edible_item, this, AGT_UACTION_CONSUME, amount);
			}
			if(edible_item.IsLiquidContainer())
			{
				int liquid_type = edible_item.GetLiquidType();
				string liquidClassName = Liquid.GetLiquidClassname(liquid_type);
				if (liquidClassName.Length() == 0)
					Error("Error! Trying to add unknown liquid to stomach with item=" + Object.GetDebugName(edible_item) + " consume_type=" + consume_type + " liquid_type=" + liquid_type);
				m_PlayerStomach.AddToStomach(liquidClassName, amount, 0, agents);
				
				// NK
				
				if(liquid_type == LIQUID_VODKA)
				{
					//AddHealth("", "Health", -5);
					AddHealth("", "Shock", -35);
					//SendSoundEvent(EPlayerSoundEventID.TAKING_DMG_LIGHT); --ki lett véve; szarul hangzik
				}
				
				// NK end
			}
			else 
			{
				int food_stage_type;
				if( edible_item.GetFoodStage() )
				{
					food_stage_type = edible_item.GetFoodStage().GetFoodStageType();
				}
				m_PlayerStomach.AddToStomach(source.GetType(), amount, food_stage_type, agents);
			}
			edible_item.Consume(amount, this);
			return true;

		}
		return false;
	}
}