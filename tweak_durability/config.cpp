class CfgPatches
{
	class NK_tweak_durability
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Muzzles"};
	};
};

class cfgVehicles
{
	class ItemSuppressor;
	// M4_Suppressor & AK_Suppressor:
	// wanted to double the amount of shots these endure too but because they spawn more frequently
	// and in more accessible areas compared to vanilla having the default durability acts as a balancing factor

	class PistolSuppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 8;
				};
			};
		};
	};
};