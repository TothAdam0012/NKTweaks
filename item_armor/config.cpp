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
	class NK_GorkaHelmet_orkan: GorkaHelmet
	{
		scope = 2;
		displayName = "Orkán Assault Helmet";
		descriptionShort = "Reinforced version of the gorka helmet used by Orkán forces.";
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
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\maska.rvmat"}},{0.7,{"DZ\characters\headgear\data\maska.rvmat"}},{0.5,{"DZ\characters\headgear\data\maska_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\maska_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\maska_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage = 0.25;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.25;};
				};
				class Melee
				{
					class Health {damage = 0.25;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.12;};
				};
				class Infected
				{
					class Health {damage = 0.25;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.12;};
				};
				class FragGrenade
				{
					class Health {damage = 0.5;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.13;};
				};
			};
		};
	};

	class PlateCarrierVest;
	class NK_Plate_LTWT: PlateCarrierVest
	{
		scope = 2;
		weight = 7700;
		displayName = "Platecarrier LTWT";
		descriptionShort = "Carries extra lightweight polyethylene plates which better distribute the absorbed energy resulting in less shock. Offers the same ballistic protection at reduced weight for more maneuverability.";
		visibilityModifier = 0.6;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\BallisticVest_camo_co.paa","\dz\characters\vests\data\BallisticVest_camo_co.paa","\dz\characters\vests\data\BallisticVest_camo_co.paa"};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage = 0.3;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.2;};
				};
				class Melee
				{
					class Health {damage = 0.25;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.25;};
				};
				class Infected
				{
					class Health {damage = 0.25;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.25;};
				};
				class FragGrenade
				{
					class Health {damage = 0.25;};
					class Blood  {damage = 0;};
					class Shock  {damage = 0.26;};
				};
			};
		};
	};
	
	class NK_Plate_orkan: PlateCarrierVest
	{
		scope = 2;
		weight = 9800;
		displayName = "Platecarrier Orkán";
		descriptionShort = "A tactical platecarrier vest with built-in 3A soft armor accompanied with level 4 lightweight polyethylene plates. Has better projectile and knockout protection at a lower weight. Superior to the standardized version.";
		visibilityModifier = 0.6;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\item_armor\pb_heavy_ttsko_co.paa", "NK\Tweaks\item_armor\pb_heavy_ttsko_co.paa", "NK\Tweaks\item_armor\pb_heavy_ttsko_co.paa"};
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
					class Health {damage = 0.19;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.16;};
				};
				class Melee
				{
					class Health {damage = 0.25;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.25;};
				};
				class Infected
				{
					class Health {damage = 0.25;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.25;};
				};
				class FragGrenade
				{
					class Health {damage = 0.25;};
					class Blood  {damage = 0;};
					class Shock  {damage = 0.13;};
				};
			};
		};
	};
	
	class NK_Plate_orkan_black: NK_Plate_orkan
	{
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"NK\Tweaks\item_armor\pb_heavy_b_co.paa", "NK\Tweaks\item_armor\pb_heavy_b_co.paa", "NK\Tweaks\item_armor\pb_heavy_b_co.paa"};
		visibilityModifier = 0.6;
	};
};