class CfgPatches
{
	class NK_tweak_fal
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms_FAL", "DZ_Weapons_Muzzles"};
	};
};

class cfgWeapons
{
	class FAL_Base;
	class FAL: FAL_Base
	{
		//attachments[] = {"weaponButtstockFal","weaponWrap","weaponOptics","weaponMuzzleM4"};
		scope = 2;
		initSpeedMultiplier = 0.9525; // deals 130 damage instead of the original 122.87
		displayName = "FAL Type 3";
		descriptionShort = "Battle rifle designed to fire .308 WIN rounds. The Type 3 has better muzzle velocity than its earlier variants. Compatible with Nato attachments.";
	};
};
