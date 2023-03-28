class CfgPatches
{
	class NK_item_stungrenade
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Explosives"};
	};
};

class CfgMods
{
	class NK_item_stungrenade
	{
		dir = "NK\Tweaks\item_stungrenade";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_item_stungrenade";
		credits = "Zenarchist"; // https://steamcommunity.com/sharedfiles/filedetails/?id=2809135233
		// I made the stungrande but copied the texture
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
				files[] = {"NK/Tweaks/item_stungrenade/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class FlashGrenade;
	class NK_StunGrenade: FlashGrenade
	{
		scope = 2;
		displayName = "MK3A2 stun grenade";
		descriptionShort = "The MK3 is a cylindrical concussion grenade with minimal fragmentation. Capable of knocking survivors unconscious.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\item_stungrenade\zen_concussion_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\explosives\data\flashbang.rvmat"};
	};
};

class CfgAmmo
{
	class FlashGrenade_Ammo;
	class NK_StunGrenade_Ammo: FlashGrenade_Ammo
	{
		indirectHitRange = 5;
		indirectHitRangeMultiplier = 4.0;
		class DamageApplied
		{
			type = "FragGrenade";
			class Health
			{
				damage = 1;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 25;
			};
		};
	};
};