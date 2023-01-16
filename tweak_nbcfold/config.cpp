class CfgPatches
{
	class NK_nbcfold
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class NK_nbcfold
	{
		dir = "NK\Tweaks\tweak_nbcfold";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_nbcfold";
		credits = "XM";
		author = "XM";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/tweak_nbcfold/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class NBCJacketBase;
	class NK_folded_NBCJacketBase: NBCJacketBase
	{
		itemSize[] = {1,2};
		itemsCargoSize[] = {0,0};
		inventorySlot[] = {""};
		itemInfo[] = {""};
	};
	
	class NK_folded_NBCJacketGray: NK_folded_NBCJacketBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\Data\NBC_Jacket_g_grey_co.paa","\dz\characters\tops\Data\NBC_Jacket_grey_co.paa","\dz\characters\tops\Data\NBC_Jacket_grey_co.paa"};
	};
	class NK_folded_NBCJacketYellow: NK_folded_NBCJacketBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\dz\characters\tops\Data\NBC_Jacket_g_yellow_co.paa","\dz\characters\tops\Data\NBC_Jacket_yellow_co.paa","\dz\characters\tops\Data\NBC_Jacket_yellow_co.paa"};
	};
};