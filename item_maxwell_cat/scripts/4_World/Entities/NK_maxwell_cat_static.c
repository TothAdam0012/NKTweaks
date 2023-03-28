class NK_maxwell_cat_static extends House
{
	XmasTreeLight 		m_TreeLight;
	EffectSound 		m_AmbientSoundLoop;
	const string		LOOP_SOUND = "CatLoopMaxwell_SoundSet";
	
	void NK_maxwell_cat_static()
	{

	}
	
	override void EEInit()
	{
		if ( !GetGame().IsDedicatedServer() )
		{
			PlaySoundSetLoop( m_AmbientSoundLoop, LOOP_SOUND, 0, 0 );
		}
	}
	
	override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsDedicatedServer() )
		{
			if ( m_AmbientSoundLoop )
				SEffectManager.DestroyEffect(m_AmbientSoundLoop);
		}
	}
};