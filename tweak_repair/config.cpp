class CfgPatches
{
	class NK_tweak_repair
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};
};
class CfgVehicles
{
	class FishingRod_Base_New;
	class FishingRod: FishingRod_Base_New
	{
		repairableWithKits[]={5, 8}; // fishing rod can be repaired with ducttape, epoxy
		repairCosts[]={25,25};
	};

	class Inventory_Base;
	class FieldShovel: Inventory_Base
	{
		repairableWithKits[]={4}; // whetstone
		repairCosts[]={15};
	};
	class Shovel: Inventory_Base
	{
		repairableWithKits[]={4}; // whetstone
		repairCosts[]={15};
	};
};