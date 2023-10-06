class NK_NVGogglesB extends NVGoggles
{
	
	override void OnWorkStart()
	{
		PlayerBase player;
		EntityAI headgear;
		EntityAI glasses;
		if ( m_Strap && PlayerBase.CastTo(player, m_Strap.GetHierarchyParent()) )
		{
			headgear = player.FindAttachmentBySlotName("Headgear");
			glasses = player.FindAttachmentBySlotName("Eyewear");
			
			//adjust on load - ComponentEnergyManager stores the 'working' state independently
			if ( !m_IsLowered )
			{
				RotateGoggles(false);
			}
			
			if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() ) // Client side
			{
				if ( (headgear == m_Strap || glasses == m_Strap) && player.IsControlledPlayer() )
				{
					player.AddActiveNV(NVTypes.NV_GOGGLES);
				}
			}
		}
	}
	
	override void OnWorkStop()
	{
		PlayerBase player;
		EntityAI headgear;
		EntityAI glasses;
		if ( m_Strap && PlayerBase.CastTo(player, m_Strap.GetHierarchyParent()) )
		{
			headgear = player.FindAttachmentBySlotName("Headgear");
			glasses = player.FindAttachmentBySlotName("Eyewear");
			
			if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() ) // Client side
			{
				if ( (headgear == m_Strap || glasses == m_Strap) && player.IsControlledPlayer() )
				{
					player.RemoveActiveNV(NVTypes.NV_GOGGLES);
				}
			}
		}
	}
	
	override void OnWork( float consumed_energy )
	{
		//adjust on load - ComponentEnergyManager stores the 'working' state independently
		if ( !m_IsLowered )
		{
			RotateGoggles(false);
		}
		
		PlayerBase player;
		EntityAI headgear;
		EntityAI glasses;
		if ( m_Strap && PlayerBase.CastTo(player, m_Strap.GetHierarchyParent()) )
		{
			headgear = player.FindAttachmentBySlotName("Headgear");
			glasses = player.FindAttachmentBySlotName("Eyewear");
			
			if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() ) // Client side
			{
				if ( (headgear == m_Strap || glasses == m_Strap) && player.IsControlledPlayer() )
				{
					player.AddActiveNV(NVTypes.NV_GOGGLES);
				}
			}
		}
	}
	
	override int GetCurrentNVType()
	{
		if (IsWorking())
		{
			//m_CurrentOpticMode
			switch (m_CurrentOpticMode)
			{
				/*case GameConstants.OPTICS_STATE_DAY:
					return NVTypes.NV_GOGGLES_WHATEVER;
				
				case GameConstants.OPTICS_STATE_NIGHTVISION:
					return NVTypes.NV_GOGGLES;*/
				default:
					return NVTypes.NV_GOGGLES;
			}
			Error("Undefined optic mode of " + this);
			return NVTypes.NONE;
		}
		else
		{
			return NVTypes.NV_GOGGLES_OFF;
		}
	}
}
