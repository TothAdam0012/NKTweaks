class ActionSwitchLight : ActionTurnOnWhileInHands
{

	void ActionSwitchLight()
	{
		m_Text = "[DEBUG] cycle modded lightconfig";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return true;
	}

	override void OnExecuteClient( ActionData action_data )
	{
		action_data.m_Player.nextModdedLighting();

	}

	override void OnExecuteServer( ActionData action_data )
	{
		int currentId = action_data.m_Player.nextModdedLighting();
		NKUtil.SendMessage(action_data.m_Player, "Modded lighting " + currentId);
	}
};