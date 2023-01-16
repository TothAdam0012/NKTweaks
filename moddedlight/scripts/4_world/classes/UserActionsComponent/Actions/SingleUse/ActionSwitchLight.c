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
			SendMessage(action_data.m_Player, "Vanilla lighting");
		} else {
			action_data.m_Player.SetModdedLight(true);
			SendMessage(action_data.m_Player, "Modded lighting");
		}
	}
	
	void SendMessage(PlayerBase player, string message) {
		if (player != null && player.IsAlive()) {
			Param1<string> msg = new Param1<string>(message);
			PlayerIdentity playerIdentity = player.GetIdentity();
			GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, msg, true, playerIdentity);
		}
	}
};