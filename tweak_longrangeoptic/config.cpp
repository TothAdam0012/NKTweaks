class CfgPatches
{
	class NK_tweak_longrangeoptic
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};

class CfgMods
{
	class NK_tweak_longrangeoptic
	{
		dir = "NK/Tweaks/tweak_longrangeoptic";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "tweak_longrangeoptic";
		credits = "XM";
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
				files[] = {"NK/Tweaks/tweak_longrangeoptic/scripts/4_World"};
			};
		};
	};
};

class cfgVehicles
{
	class ItemOptics_Base;
	class LongrangeOptic: ItemOptics_Base
	{
		scope = 2;
		displayName = "Longrange optic";
		descriptionShort = "A long-range hunting scope which can be adjusted to fit the Mosin and other weighty caliber guns.";
		itemSize[] = {1,4};
		inventorySlot[] += {"weaponOpticsMosin", "weaponOpticsHunting"};
	};
};