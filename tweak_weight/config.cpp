class CfgPatches
{
	class NK_tweak_weight
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Tools", "DZ_Weapons_Melee", "DZ_Characters_Tops", "DZ_Gear_Optics", "DZ_Weapons_Supports", "DZ_Weapons_Magazines", "DZ_Characters"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class Mag_VSS_10Rnd: Magazine_Base
	{
		weight = 240; // 350
	};
	class Mag_VAL_20Rnd: Magazine_Base
	{
		weight = 300; // 550 - new values copied from tarkov. 550 is a crazy value when even the 60rnd stanag mag is only 450.
	};
	/*class Mag_M249_Box200Rnd: Magazine_Base // lett csinálva külön NK verzió -> Weapons configjában
	{
		weight = 450; // fully loaded: 1250, m249 with full mag: 5000+1250 -> 6250
	};*/
};

class CfgVehicles
{
	class Clothing;
	class ItemOptics;
	class Inventory_Base;

	class HuntingJacket_ColorBase: Clothing
	{
		weight = 1650; // 3200
	};
	class Binoculars: ItemOptics
	{
		//itemSize[] = {2,2}; // it's 2x2 by default since 1.18
		weight = 495; // 980
	};


	class GhillieAtt_ColorBase: Inventory_Base
	{
		weight = 300; // 500
	};

	class Shovel: Inventory_Base
	{
		weight = 1300; // 5500 - pickaxe is also 1300
	};

	class FieldShovel: Inventory_Base
	{
		weight = 780; // 5500
	};

	// ================================================ [ Improvised cloting insulation tweak ] ================================================

	class HeadCover_Improvised: Clothing
	{
		heatIsolation = 0.3; // improved heat isolation (doubled) from BAD to LOW
	};
	
	class HandsCover_Improvised: Clothing
	{
		scope = 2;
		heatIsolation = 0.3;
	};

	class LegsCover_Improvised: Clothing
	{
		heatIsolation = 0.3;
	};

	class FeetCover_Improvised: Clothing
	{
		heatIsolation = 0.3;
	};

	class FaceCover_Improvised: Clothing
	{
		heatIsolation = 0.3;
	};

	class TorsoCover_Improvised: Clothing
	{
		heatIsolation = 0.3;
	};
};