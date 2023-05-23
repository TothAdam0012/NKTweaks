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

	class HighCapacityVest_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.7; // tactical vest has 30% protection (vanilla doesnt have any)
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
			};
		};
	};

	class PlateCarrierVest: Clothing
	{
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Shock
					{
						damage = 0.3; // 0.6
					};
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
					class Shock
					{
						damage = 0.375; // 0.75
					};
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
					class Shock
					{
						damage = 0.5; // 0.75
					};
				};
			};
		};
	};
};