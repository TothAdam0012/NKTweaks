modded class ActionLockAttachment
{
	private static const int MAX_USES = 100; // how many times you can lock wheels, car doors etc. before the tool breaks (from full hp)
	private static const float HEALTH_MULTIPLIER = 1/MAX_USES;
	
	override void OnFinishProgressServer( ActionData action_data )
	{	
		ItemBase target_IB = ItemBase.Cast(action_data.m_Target.GetObject());

		// What a horrible way of handling tool damage
		//MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, 5);

		action_data.m_MainItem.DecreaseHealth(action_data.m_MainItem.GetMaxHealth() * HEALTH_MULTIPLIER);

		if (target_IB.IsLockedInSlot())
		{
			target_IB.UnlockFromParent();
			return;
		}
		
		target_IB.LockToParent();
	}

	// fixes 'NULL pointer to instance' spam in crashlog when the item breaks after the action
	override void OnEnd( ActionData action_data )
	{
		if ( action_data.m_MainItem && (!GetGame().IsMultiplayer() || GetGame().IsServer()) )
		{
			ItemBase target_IB = ItemBase.Cast( action_data.m_Target.GetObject() );
			Param2<bool, string> play = new Param2<bool, string>( false, action_data.m_MainItem.GetLockSoundSet() );
			GetGame().RPCSingleParam( target_IB, ERPCs.RPC_SOUND_LOCK_ATTACH, play, true );
		}
	}
	
	override void OnEndAnimationLoop( ActionData action_data )
	{
		super.OnEndAnimationLoop( action_data );

		if ( action_data.m_MainItem && (!GetGame().IsMultiplayer() || GetGame().IsServer()) )
		{
			ItemBase target_IB = ItemBase.Cast( action_data.m_Target.GetObject() );
			Param2<bool, string> play = new Param2<bool, string>( false, action_data.m_MainItem.GetLockSoundSet() );
			GetGame().RPCSingleParam( target_IB, ERPCs.RPC_SOUND_LOCK_ATTACH, play, true );
		}
	}
}