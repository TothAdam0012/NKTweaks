class CfgPatches
{
	class NK_item_bak
	{
		units[] = {"SodaCan_Bak"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class SodaCan_Cola;
	class NK_SodaCan_Bak: SodaCan_Cola
	{
		scope=2;
		displayName="BAK";
		descriptionShort="Fődhön vág";
		hiddenSelectionsTextures[]={"NK\Tweaks\item_bak\sodacan_bak.paa"};
	};
};