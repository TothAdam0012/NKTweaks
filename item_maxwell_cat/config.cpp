class CfgPatches
{
	class NK_item_maxwell_cat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class NK_item_maxwell_cat
	{
		dir = "NK/Tweaks/item_maxwell_cat";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "maxwell_cat";
		credits = "apokot";
		author = "XM";
		authorID = "0";
		version = 1.0;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/item_maxwell_cat/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class NK_maxwell_cat_static: HouseNoDestruct
	{
		scope=1;
		model="\NK\Tweaks\item_maxwell_cat\cat_s.p3d";
	};
	class Switchable_Base;
	class NK_maxwell_cat: Switchable_Base
	{
		scope=2;
		model="\NK\Tweaks\item_maxwell_cat\cat.p3d";
		displayName="Maxwell cat";
		descriptionShort="Maxwell";
		soundImpactType = "glass";
		//isMeleeWeapon=0;
		weight=200;
		absorbency=1;
		itemSize[]={4,3};
		varWetMax=1;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {25, 25};
		hiddenSelections[] = {"usi", "cat"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\item_maxwell_cat\data\usi_ca.paa", "NK\Tweaks\item_maxwell_cat\data\cat_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=191090;
					healthLevels[] = {{1.0,{"NK\Tweaks\item_maxwell_cat\data\cat.rvmat"}},{0.7,{"NK\Tweaks\item_maxwell_cat\data\cat.rvmat"}},{0.5,{"NK\Tweaks\item_maxwell_cat\data\cat.rvmat"}},{0.3,{"NK\Tweaks\item_maxwell_cat\data\cat.rvmat"}},{0.0,{"NK\Tweaks\item_maxwell_cat\data\cat.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class NK_maxwell_cat_gen: NK_maxwell_cat
	{
		scope=2;
		displayName="Maxwell generator";
		descriptionShort="Powered Maxwell";
	};
};