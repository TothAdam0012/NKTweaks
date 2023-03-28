class CfgPatches
{
	class NK_item_foodstuff
	{
		units[] = {"SodaCan_Bak", "SodaCan_Kobi"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Drinks", "DZ_Gear_Food"};
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
		hiddenSelectionsTextures[]={"NK\Tweaks\item_foodstuff\sodacan_bak.paa"};
	};

	class NK_SodaCan_Kobi: SodaCan_Cola
	{
		scope=2;
		displayName="Köbi";
		descriptionShort="Családon belüli erőszak a nap végén";
		hiddenSelectionsTextures[]={"NK\Tweaks\item_foodstuff\SodaCan_Kobi.paa"};
	};

	class Edible_Base;
	class Banana: Edible_Base
	{
		displayName = "Banana";
		descriptionShort = "A banana";
		//inventorySlot[] += {"Pistol"};
	};
};