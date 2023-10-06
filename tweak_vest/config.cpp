class CfgPatches
{
	class NK_tweak_vest
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters_Vests"};
	};
};
class CfgVehicles
{
	class Clothing;

	
	// vanilla platecarrier
	
	class PlateCarrierVest: Clothing
	{
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage = 0.3;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.4;}; // 0.6 -> no one hit win or 762 KO
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
					class Health {damage = 0.5;};
					class Blood  {damage = 0;};
					class Shock  {damage = 0.26;};
				};
			};
		};
	};

	class HighCapacityVest_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage = 0.7;}; // 30% protection (in vanilla it doesnt have any)
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.75;};
				};
				class Melee
				{
					class Health {damage = 0.75;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.75;};
				};
				class Infected
				{
					class Health {damage = 0.75;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.75;};
				};
				class FragGrenade
				{
					class Health {damage = 0.8;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.53;};
				};
			};
		};
	};

	class PressVest_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage = 0.5;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.6;};
				};
				class Melee
				{
					class Health {damage = 0.5;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.5;};
				};
				class Infected
				{
					class Health {damage = 0.5;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.5;};
				};
				class FragGrenade
				{
					class Health {damage = 0.5;};
					class Blood  {damage = 0;};
					class Shock  {damage = 0.5;};
				};
			};
		};
	};

	class PoliceVest: Clothing
	{
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage = 0.5;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.6;};
				};
				class Melee
				{
					class Health {damage = 0.75;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.75;};
				};
				class Infected
				{
					class Health {damage = 0.75;};
					class Blood  {damage = 0.0;};
					class Shock  {damage = 0.75;};
				};
				class FragGrenade
				{
					class Health {damage = 0.5;};
					class Blood  {damage = 0;};
					class Shock  {damage = 0.5;};
				};
			};
		};
	};


};