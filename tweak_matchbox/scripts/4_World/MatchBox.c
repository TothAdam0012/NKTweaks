modded class Matchbox
{
	/*
		valid wetness states are

		STATE_DRENCHED
		STATE_SOAKING_WET
		STATE_WET
		STATE_DAMP
		STATE_DRY
	*/
	override bool CanIgniteItem( EntityAI ignite_target = NULL )
	{
		if ( GetQuantity() > 0 && GetWet() < GameConstants.STATE_WET ) // from GameConstants.STATE_DAMP
			return true;
		else
			return false;
	}
}