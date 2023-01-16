class CfgPatches
{
	class NK_item_kobi
	{
		units[] = {"SodaCan_Kobi"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class SodaCan_Cola;
	class NK_SodaCan_Kobi: SodaCan_Cola
	{
		scope=2;
		displayName="Köbi";
		descriptionShort="Családon belüli erőszak a nap végén";
		hiddenSelectionsTextures[]={"NK\Tweaks\item_kobi\SodaCan_Kobi.paa"};
	};
};