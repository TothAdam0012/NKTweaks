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
	class Vest_Base;

	class HighCapacityVest_ColorBase: Vest_Base
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

	class PlateCarrierVest: Vest_Base
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

	class PressVest_ColorBase: Vest_Base
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

	class PoliceVest: Vest_Base
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