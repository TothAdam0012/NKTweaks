class NK_maxwell_cat_gen extends ItemBase
{
	protected static string		LOOP_SOUND = "powerGeneratorLoop_SoundSet";
	protected EffectSound 		m_MaxwellLoop;
	ref protected Effect 		m_Smoke;

	override void OnWorkStart()
	{
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			PlaySoundSetLoop(m_MaxwellLoop, LOOP_SOUND, 0, 0);
			vector local_pos = "0 0 0";
			vector local_ori = "90 0 0";
			m_Smoke = new EffGeneratorSmoke();
			SEffectManager.PlayOnObject(m_Smoke, this, local_pos, local_ori);
		}
	}
	override void OnWorkStop()
	{
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			StopSoundSet(m_MaxwellLoop);
			SEffectManager.DestroyEffect(m_Smoke);
		}
	}
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
	}
}