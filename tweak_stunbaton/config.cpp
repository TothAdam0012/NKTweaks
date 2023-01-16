class CfgPatches
{
	class NK_tweak_stunbaton
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Melee_Powered"};
	};
};

class CfgVehicles
{
	class Powered_Base;
	class StunBaton: Powered_Base
	{
		class EnergyManager
		{
			hasIcon = 1;
			plugType = 1;
			energyUsagePerSecond = 0.415;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
	};
};