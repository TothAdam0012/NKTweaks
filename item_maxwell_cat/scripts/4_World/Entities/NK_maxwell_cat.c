class NK_maxwell_cat extends ItemBase
{
	protected static string		LOOP_SOUND = "CatLoopMaxwell_SoundSet";
	protected EffectSound 		m_MaxwellLoop;

	override void OnWorkStart()
	{
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			PlaySoundSetLoop(m_MaxwellLoop, LOOP_SOUND, 0, 0);
		}
	}
	override void OnWorkStop()
	{
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			StopSoundSet(m_MaxwellLoop);
		}
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
	}
}