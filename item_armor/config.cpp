class CfgPatches
{
	class NK_item_armor
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters_Headgear", "DZ_Characters_Vests"};
	};
};
class CfgVehicles
{
	class GorkaHelmet;
	class NK_GorkaHelmet_heavy: GorkaHelmet
	{
		scope = 2;
		displayName = "Heavy Assault Helmet";
		descriptionShort = "2x shock damage védelem.";
		visibilityModifier = 0.6;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\item_armor\ah_heavy_co.paa","NK\Tweaks\item_armor\ah_heavy_co.paa","NK\Tweaks\item_armor\ah_heavy_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 175;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.7,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.5,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\HelmetMich_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.12;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.12;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.13;
					};
				};
			};
		};
	};

	class PlateCarrierVest;
	class NK_PlateLTWT: PlateCarrierVest
	{
		scope = 2;
		displayName = "Platecarrier LTWT";
		weight = 7800;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\BallisticVest_camo_co.paa","\dz\characters\vests\data\BallisticVest_camo_co.paa","\dz\characters\vests\data\BallisticVest_camo_co.paa"};
	};
	
	class NK_PlateHeavy: PlateCarrierVest
	{
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\item_armor\pb_heavy_ttsko_co.paa", "NK\Tweaks\item_armor\pb_heavy_ttsko_co.paa", "NK\Tweaks\item_armor\pb_heavy_ttsko_co.paa"};
		displayName = "Heavy Platecarrier";
		descriptionShort = "Ugyanolyan nehéz, mint a sima tányérhordozó, de többet véd!";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.19;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	
	class NK_PlateHeavy_Black: NK_PlateHeavy
	{
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\item_armor\pb_heavy_b_co.paa", "NK\Tweaks\item_armor\pb_heavy_b_co.paa", "NK\Tweaks\item_armor\pb_heavy_b_co.paa"};
	};
};