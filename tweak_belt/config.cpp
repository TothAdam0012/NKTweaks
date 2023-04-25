class CfgPatches
{
	class NK_tweak_belt
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", /*"DZ_Gear_Containers","DZ_Gear_Medical",*/ "DZ_Gear_Drinks"};
	};
};

class CfgVehicles
{
	class Bottle_Base;

	class WaterBottle: Bottle_Base
	{
		inventorySlot[] += {"Belt_Left"};
	};

};