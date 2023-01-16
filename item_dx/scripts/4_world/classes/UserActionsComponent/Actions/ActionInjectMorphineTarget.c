modded class ActionInjectMorphineTarget: ActionInjectTarget
{
	void ActionInjectMorphineTarget()
	{
	}
		
	override void ApplyModifiers( ActionData action_data )
	{
		PlayerBase player = PlayerBase.Cast( action_data.m_Target.GetObject() );
		player.AddHealth("", "Health", 60);
		player.AddHealth("", "Shock", 20);
		player.AddHealth("", "Blood", 1000);
		player.GetModifiersManager().ActivateModifier( eModifiers.MDF_DISINFECTION );
		
		if(player.GetBleedingManagerServer().GetBleedingSourcesCount() > 4)
		{
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
		}
		else
		{
			player.GetBleedingManagerServer().RemoveAllSources();
		}
	}
};