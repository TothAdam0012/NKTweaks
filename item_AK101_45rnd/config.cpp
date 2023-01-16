class CfgPatches
{
	class NK_item_AK101_45rnd
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Data","DZ_Weapons_Firearms"};
	};
};

class CfgMagazines
{
	class Mag_AK74_45Rnd;
	class NK_Mag_AK101_45Rnd: Mag_AK74_45Rnd
	{
		scope = 2;
		displayName = "KA101 45Rnd mag";
		descriptionShort = "Extended magazine for the KA101.";
		model = "\DZ\weapons\attachments\magazine\magazine_ak74_45rnd.p3d";
		weight = 420;
		itemSize[] = {1,4};
		count = 45;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\item_AK101_45rnd\magazine_ak101_45rnd_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\weapons\attachments\magazine\data\magazine_ak74_45rnd.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\magazine_ak74_45rnd.rvmat"}},{0.7,{"DZ\weapons\attachments\magazine\data\magazine_ak74_45rnd.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\magazine_ak74_45rnd_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\magazine_ak74_45rnd_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\magazine_ak74_45rnd_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};

class cfgWeapons
{
	class AK101_Base;
	class AK101: AK101_Base
	{
		scope = 2;
		magazines[] = {"Mag_AK101_30Rnd","Mag_AK101_30Rnd_Black","Mag_AK101_30Rnd_Green","NK_Mag_AK101_45Rnd"};
	};
};

