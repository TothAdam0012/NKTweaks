modded class PlayerConstants 
{
	static const float METABOLIC_SPEED_ENERGY_JOG		= 0.20;
	static const float METABOLIC_SPEED_WATER_JOG		= 0.20;
	// WALK:	0.1
	// JOG:		0.3 -> 0.2
	// SPRINT:	0.6

	static const float CHANCE_TO_BLEED_SLIDING_LADDER_PER_SEC = 0.2; // 0.3 // probability of bleeding source occuring while sliding down ladder without gloves given as percentage per second(0.5 means 50% chance bleeding source will happen every second while sliding down) 
	static const float GLOVES_DAMAGE_SLIDING_LADDER_PER_SEC = -0.5; // -3// how much damage the gloves receive while sliding down the ladder (per sec)
}