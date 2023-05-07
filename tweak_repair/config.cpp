class CfgPatches
{
	class NK_tweak_repair
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools", "DZ_Gear_Camping", "DZ_Weapons_Supports", "DZ_Weapons_Optics", "DZ_Vehicles_Parts"};
	};
};

class CfgMods
{
	class NK_tweak_repair
	{
		dir = "NK\Tweaks\tweak_repair";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_tweak_repair";
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
				files[] = {"NK/Tweaks/tweak_repair/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class FishingRod_Base_New;
	class FishingRod: FishingRod_Base_New
	{
		repairableWithKits[]={5, 8}; // fishing rod can be repaired with ducttape, epoxy
		repairCosts[]={25,25};
	};

	class Inventory_Base;
	class FieldShovel: Inventory_Base
	{
		repairableWithKits[]={4}; // whetstone
		repairCosts[]={15};
	};
	class Shovel: Inventory_Base
	{
		repairableWithKits[]={4}; // whetstone
		repairCosts[]={15};
	};
	class Hammer: Inventory_Base
	{
		repairableWithKits[]={4}; // whetstone
		repairCosts[]={15};
	};
	class CamoNet: Inventory_Base
	{
		repairableWithKits[]={2, 5}; // sweing kit, duct tape
		repairCosts[]={25,25};
	};

	class SparkPlug: Inventory_Base
	{
		repairableWithKits[] = {7}; // electrical kit
		repairCosts[] = {25.0};
	};
	class GlowPlug: Inventory_Base
	{
		repairableWithKits[] = {7}; // electrical kit
		repairCosts[] = {25.0};
	};

	class ItemOptics;
	class ItemOptics_Base: ItemOptics
	{
		repairableWithKits[] = {1, 7}; // optics can be repaired with gun cleaning kit, electrical kit
		repairCosts[] = {25,25};
	};

	// there s no abstract class for attachments :(

	class M4_OEBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class M4_MPBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class M4_CQBBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class AK_WoodBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class AK74_WoodBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class AK_FoldingBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class AK_PlasticBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class AKS74U_Bttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class MP5k_StockBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class Fal_OeBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class Fal_FoldingBttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class Saiga_Bttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class PP19_Bttstck: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	// handguards

	class M4_PlasticHndgrd: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class M4_RISHndgrd: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class M4_MPHndgrd: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class AK_WoodHndgrd: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class AK74_Hndgrd: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class AK_RailHndgrd: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class AK_PlasticHndgrd: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class MP5_PlasticHndgrd: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};

	class MP5_RailHndgrd: Inventory_Base
	{
		repairableWithKits[]={1, 8}; // gun cleaning, epoxy
		repairCosts[] = {25,25};
	};
};