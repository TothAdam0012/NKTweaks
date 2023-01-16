class CfgPatches
{
	class NK_item_activemine
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Traps"};
	};
};

class CfgMods
{
	class NK_item_activemine
	{
		dir = "NK\Tweaks\item_activemine";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_item_activemine";
		credits = "XM";
		author = "XM";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World", "Game"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/item_activemine/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class LandMineTrap;
	class NK_LandMineTrap: LandMineTrap
	{
		ammoType = "LandMineExplosion";
	};
};

class CfgAmmo
{
	class DefaultAmmo;
	class LandMineExplosion: DefaultAmmo
	{
		unconRefillModifier = 10.0;
		class DamageApplied
		{
			type = "FragGrenade";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 0;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};
};