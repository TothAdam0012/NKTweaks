class CfgPatches
{
	class NK_item_crossbow_old
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Archery_Crossbow"};
	};
};
class cfgWeapons
{
	class Crossbow_Base;
	class NK_Crossbow_Leaves: Crossbow_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"dz\weapons\archery\crossbow\data\crossbow_leaves_co.paa"};
	};
};