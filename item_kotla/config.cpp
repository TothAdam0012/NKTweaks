class CfgPatches
{
	class NK_item_kotla
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Cooking"};
	};
};
class CfgVehicles
{
	class Bottle_Base;
	class Pot: Bottle_Base
	{
		scope = 2;
		displayName = "Kotla";
	};
};