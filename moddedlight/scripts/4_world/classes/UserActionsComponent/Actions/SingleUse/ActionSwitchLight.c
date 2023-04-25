class ActionSwitchLight : ActionTurnOnWhileInHands
{

	void ActionSwitchLight()
	{
		m_Text = "DEBUG Turn moddedlight off";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return true;
	}

	override void OnExecuteClient( ActionData action_data )
	{
		if(action_data.m_Player.HasModdedLight()) {
			action_data.m_Player.SetModdedLight(false);
			m_Text = "DEBUG Turn moddedlight on";
		} else {
			action_data.m_Player.SetModdedLight(true);
			m_Text = "DEBUG Turn moddedlight off";
		}
	}

	override void OnExecuteServer( ActionData action_data )
	{
		if(action_data.m_Player.HasModdedLight()) {
			action_data.m_Player.SetModdedLight(false);
			NKUtil.SendMessage(action_data.m_Player, "Vanilla lighting");
		} else {
			action_data.m_Player.SetModdedLight(true);
			NKUtil.SendMessage(action_data.m_Player, "Modded lighting");
		}
	}
};