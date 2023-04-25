class CfgPatches
{
	class NK_tweak_vss
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
	};
};
class cfgWeapons
{
	class VSS_Base;
	class VSS: VSS_Base
	{
		scope = 2;
		chamberableFrom[] = {"Ammo_9x39AP"};

		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\tweak_vss\vss_1_co.paa"};
	};
	class ASVAL: VSS_Base
	{
		scope = 2;
		chamberableFrom[] = {"Ammo_9x39AP"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class Mag_VSS_10Rnd: Magazine_Base
	{
		ammo = "Bullet_9x39AP";
		ammoItems[] = {"Ammo_9x39AP"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\tweak_vss\vss_mag_spp_co.paa"};
	};
	class Mag_VAL_20Rnd: Magazine_Base
	{
		ammo = "Bullet_9x39AP";
		ammoItems[] = {"Ammo_9x39AP"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\tweak_vss\val_mag_spp_co.paa"};
	};
	
	class Ammunition_Base;
	class Ammo_9x39AP: Ammunition_Base
	{
		displayName = "9x39 SPP";
		descriptionShort = "The blue tip 9x39 SPP is a subsonic sniper round based on the SP5 round with increased penetration.";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\tweak_vss\vss_mag_spp_co.paa"};
	};
};

class CfgVehicles
{
	class Box_Base;
	class AmmoBox_9x39AP_20Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed 9x39 SPP";
		descriptionShort = "The blue tip 9x39 SPP is a subsonic sniper round based on the SP5 design with increased penetration.";
		model = "\dz\weapons\ammunition\9x39_20RoundBox.p3d";
		iconType = 2;
		rotationFlags = 17;
		weight = 200;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\tweak_vss\box_spp_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39_box.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39_box.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_box_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_box_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class Ammo_9x39AP
			{
				value = 20;
				variable = "quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
};

class CfgAmmo
{
	class Bullet_Base;
	class Bullet_9x39AP: Bullet_Base
	{
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 95;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 95;
			};
		};
	};
};