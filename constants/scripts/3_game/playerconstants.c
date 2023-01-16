modded class PlayerConstants 
{
	static const float BLOOD_REGEN_RATE_PER_SEC				= 1.0; 	// (DM 1.0) //0.3 base amount of blood regenerated per second

	static const float HEALTH_REGEN_MIN						= 0.1;	// (DM 0.1) 0.005 health regen rate at BLOOD_THRESHOLD_FATAL blood level
	static const float HEALTH_REGEN_MAX						= 0.2;		// (DM 0.2) 0.03 health regen rate at MAXIMUM blood level
	
	static const float LEG_HEALTH_REGEN						= 20;		// (DM 20) //Leg health regen when leg is NOT BROKEN
	static const float LEG_HEALTH_REGEN_BROKEN				= 20;		// (DM 20) 0.18 Leg health regen when BROKEN OR SPLINTED
	//
	/*
	static const float BAREFOOT_MOVEMENT_BLEED_MODIFIER = 0.03;  //0.1
	static const float SHOES_MOVEMENT_DAMAGE_PER_STEP = 0.025;  //0.035
	rag cipő + valamelyik patch óta tovább bírják alapból a cipők
	*/

	static const float METABOLIC_SPEED_ENERGY_BASAL		= 0.01;		// idle
	static const float METABOLIC_SPEED_WATER_BASAL		= 0.01;		// unchanged
	
	static const float METABOLIC_SPEED_ENERGY_WALK		= 0.05;		// walk
	static const float METABOLIC_SPEED_WATER_WALK		= 0.05;		// halved

	static const float METABOLIC_SPEED_ENERGY_JOG		= 0.15;		// jog
	static const float METABOLIC_SPEED_WATER_JOG		= 0.15;		// halved

	static const float METABOLIC_SPEED_ENERGY_SPRINT	= 0.6;		// sprint
	static const float METABOLIC_SPEED_WATER_SPRINT		= 0.6;		// unchanged
}