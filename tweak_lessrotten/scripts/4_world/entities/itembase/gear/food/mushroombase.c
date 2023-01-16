modded class MushroomBase : Edible_Base
{	
	override void EEOnCECreate()
	{
		int rand = Math.RandomInt(0,10);
		
		if ( rand > 8 )
		{
			ChangeFoodStage( FoodStageType.ROTTEN );
			SetHealth( "", "", GetMaxHealth()*0.1 );
		}
		else if ( rand > 4 )
		{
			ChangeFoodStage( FoodStageType.DRIED );
			SetHealth( "", "", GetMaxHealth()*0.4 );
		}
	}
};