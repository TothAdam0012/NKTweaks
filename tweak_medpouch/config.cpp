class CfgPatches
{
	// credits: https://steamcommunity.com/sharedfiles/filedetails/?id=2467714725
	class NK_tweak_medpouch
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Containers","DZ_Gear_Medical", "DZ_Gear_Consumables"};
	};
};

class CfgSlots
{
	class Slot_NK_Bandage1
	{
		name="NK_Bandage1";
		displayName="$STR_CfgVehicles_BandageDressing0";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class Slot_NK_Bandage2
	{
		name="NK_Bandage2";
		displayName="$STR_CfgVehicles_BandageDressing0";
		ghostIcon="set:dayz_inventory image:medicalbandage";
	};
	class Slot_NK_Injector1
	{
		name="NK_Injector1";
		displayName="Injector";
		ghostIcon="set:NK_set image:nk_slot_injector";
	};
	class Slot_NK_Injector2
	{
		name="NK_Injector2";
		displayName="Injector";
		ghostIcon="set:NK_set image:nk_slot_injector";
	};
	class Slot_NK_IVBag
	{
		name="NK_IVBag";
		displayName="IV bag";
		ghostIcon="set:NK_set image:nk_slot_ivbag";
	};
};

class CfgVehicles
{
	class Container_Base;
	class Inventory_Base;

	class FirstAidKit: Container_Base
	{
		repairableWithKits[] = {5, 2};
		repairCosts[] = {25, 25};

		attachments[]=
		{
			"NK_Bandage1",
			"NK_Bandage2",
			"NK_Injector1",
			"NK_Injector2",
			"NK_IVBag"
		};
		inventorySlot[] += {"Belt_Left"}; // medpouch can be attached to belt canteen slot
	};
	
	class BandageDressing: Inventory_Base
	{
		inventorySlot[] += {"NK_Bandage1", "NK_Bandage2"};
	};
	class Rag: Inventory_Base
	{
		inventorySlot[] += {"NK_Bandage1", "NK_Bandage2"};
	};

	class Epinephrine: Inventory_Base
	{
		inventorySlot[] += {"NK_Injector1", "NK_Injector2"};
	};
	class Morphine: Inventory_Base
	{
		inventorySlot[] += {"NK_Injector1", "NK_Injector2"};
	};
	class AntiChemInjector: Inventory_Base
	{
		inventorySlot[] += {"NK_Injector1", "NK_Injector2"};
	};

	class SalineBag: Inventory_Base
	{
		inventorySlot[] += {"NK_IVBag"};
	};
	class SalineBagIV: Inventory_Base
	{
		inventorySlot[] += {"NK_IVBag"};
	};
	class BloodBagFull: Inventory_Base
	{
		inventorySlot[] += {"NK_IVBag"};
	};
	class BloodBagIV: Inventory_Base
	{
		inventorySlot[] += {"NK_IVBag"};
	};
	class BloodBagEmpty: Inventory_Base
	{
		inventorySlot[] += {"NK_IVBag"};
	};
};