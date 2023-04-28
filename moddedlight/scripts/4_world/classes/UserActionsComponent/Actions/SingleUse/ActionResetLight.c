class ActionResetLight : ActionTurnOnWhileInHands
{

	void ActionResetLight()
	{
		m_Text = "[DEBUG] reset lightconfig";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return true;
	}

	override void OnExecuteClient( ActionData action_data )
	{
		action_data.m_Player.resetLighting();

	}

	override void OnExecuteServer( ActionData action_data )
	{
		action_data.m_Player.resetLighting();
		NKUtil.SendMessage(action_data.m_Player, "Modded lighting -1");
	}
};