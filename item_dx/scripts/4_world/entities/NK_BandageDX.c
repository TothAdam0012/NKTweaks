class NK_BandageDX extends BandageDressing
{
	override float GetInfectionChance(int system = 0, Param param = null)
	{
		/*if(m_Cleanness == 1)
		{
			return 0;
		}
		else
		{
			return 0.05;
		}*/
		return 0;
	}

	override float GetBandagingEffectivity()
	{
		return 2.5; // This is the bandaging action effectivity modifier
					// The healing time is defined in ActionDXSelf and ActionDXTarget
	}
	
	override void SetActions()
	{
		//super.SetActions();
		
		AddAction(ActionTakeItem);
		AddAction(ActionTakeItemToHands);
		AddAction(ActionWorldCraft);
		AddAction(ActionWorldCraftSwitch);
		AddAction(ActionDropItem);
		
		AddAction(ActionDXSelf);
		AddAction(ActionDXTarget);
	}
};