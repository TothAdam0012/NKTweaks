class CfgPatches
{
	class NK_tweak_durability
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Muzzles", "DZ_Weapons_Melee_Blade", "DZ_Weapons_Muzzles", "DZ_Gear_Tools"};
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
				class Health { hitpoints = 8; };
			};
		};
	};

	// increased durability of 'fighting' knives
	class Inventory_Base;
	class CombatKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health { hitpoints = 250; }; // 150 
			};
		};
	};
	class HuntingKnife: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health { hitpoints = 220; }; // 130
			};
		};
	};

	class BoneKnife: Inventory_Base
	{
		inventorySlot[] += {"Knife"};
	};

	class AK_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health { hitpoints = 220; }; // 150
			};
		};
	};
	class M9A1_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health { hitpoints = 220; }; // 150
			};
		};
	};
	class Mosin_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health { hitpoints = 220; }; // 150
			};
		};
	};
	class SKS_Bayonet: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health { hitpoints = 220; }; // 150
			};
		};
	};
};