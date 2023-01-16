class CfgPatches
{
	class NK_item_dx
	{
		units[] = {"NK_BandageDX"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class NK_item_dx
	{
		dir = "NK\Tweaks\item_dx";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "bandageTweak";
		credits = "XM";
		author = "XM";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World", "Game"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/item_dx/scripts/4_world"};
			};
		};
	};
};

class CfgVehicles
{
	class BandageDressing;
	class NK_BandageDX: BandageDressing
	{
		displayName="Bandages DX";
		DX=true;
		varQuantityInit=3;
		varQuantityMin=0;
		varQuantityMax=3;
		varCleannessInit = 0;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"NK\Tweaks\item_dx\bandage_dx.paa"};
		hiddenSelectionsMaterials[]={"NK\Tweaks\item_dx\dx.rvmat"};
	};
};