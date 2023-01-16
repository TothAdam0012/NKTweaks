modded class ActionInjectMorphineSelf: ActionInjectSelf
{
	override void ApplyModifiers( ActionData action_data )
	{
		//action_data.m_MainItem.OnApply(action_data.m_Player);
		
		action_data.m_Player.AddHealth("", "Health", 60);
		action_data.m_Player.AddHealth("", "Shock", 20);
		action_data.m_Player.AddHealth("", "Blood", 1000);
		action_data.m_Player.GetModifiersManager().ActivateModifier( eModifiers.MDF_DISINFECTION );
		
		if(action_data.m_Player.GetBleedingManagerServer().GetBleedingSourcesCount() > 4)
		{
			action_data.m_Player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
			action_data.m_Player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
			action_data.m_Player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
			action_data.m_Player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
		}
		else
		{
			action_data.m_Player.GetBleedingManagerServer().RemoveAllSources();
		}
	}
};