modded class ActionConsume
{
	override void OnEndServer( ActionData action_data )
	{	
		ItemBase item = action_data.m_MainItem;
		
		if ( item && item.GetQuantity() <= 0.01 )
		{
			// Tweaks --------------------------------------------------------------------------------------------------------------
			if(item.GetType() == "BoxCerealCrunchin") {
				// copied from ActionDisarmExplosiveWithRemoteDetonator
				ReplaceItemWithNewLambdaBase lambda = new ReplaceItemWithNewLambdaBase(item, "OrienteeringCompass");
				MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);
				action_data.m_Player.GetItemAccessor().OnItemInHandsChanged();
			} else {
				item.SetQuantity(0);
			}
		}
		
		else if (item && GetProgress(action_data) > 0)
		{
			// we don't want to inject an agent into an empty container
			PlayerBase player = action_data.m_Player;
			PluginTransmissionAgents plugin = PluginTransmissionAgents.Cast( GetPlugin(PluginTransmissionAgents) );
			plugin.TransmitAgents(player, item, AGT_UACTION_TO_ITEM);
		}
	}
};

modded class ActionForceConsume
{
	override void OnEndServer( ActionData action_data )
	{	
		if ( action_data.m_MainItem && ( action_data.m_MainItem.GetQuantity() <= 0.01 ) )
		{
			// Tweaks --------------------------------------------------------------------------------------------------------------
			if(action_data.m_MainItem.GetType() == "BoxCerealCrunchin") {
				// copied from ActionDisarmExplosiveWithRemoteDetonator
				ReplaceItemWithNewLambdaBase lambda = new ReplaceItemWithNewLambdaBase(action_data.m_MainItem, "OrienteeringCompass");
				MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);
				action_data.m_Player.GetItemAccessor().OnItemInHandsChanged();
			} else {
				action_data.m_MainItem.SetQuantity( 0 );
			}
		}
	}
};