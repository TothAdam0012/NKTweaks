class CfgPatches
{
	class NK_tweak_no_worn_jam
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Magazines"};
	};
};

class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base: DefaultMagazine
	{
		class Reliability
		{
			//ChanceToJam[] = {0,0.001,0.01,0.05,1};
			ChanceToJam[] = {0, 0, 0.01, 0.05, 1};
		};
	};
};

class cfgWeapons
{
	class RifleCore;
	class PistolCore;
	class Rifle_Base: RifleCore
	{
		class Reliability
		{
			//ChanceToJam[] = {0,0.001,0.01,0.1,1};
			// on badly damaged it should be 0.1 but changed to 0.05 to match pistol jam chance (lower jam chance)
			ChanceToJam[] = {0, 0, 0.01, 0.05, 1};
		};
	};
	
	class Pistol_Base: PistolCore
	{
		class Reliability
		{
			//ChanceToJam[] = {0,0.001,0.01,0.05,1};
			ChanceToJam[] = {0, 0, 0.01, 0.05, 1};
		};
	};
	
	// class BoltActionRifle_Base already has 0% to jam at any damage level
};