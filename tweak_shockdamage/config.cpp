class CfgPatches
{
	class NK_tweak_shockdamage
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters"};
	};
};

class CfgVehicles
{
	class Man;
	class SurvivorBase: Man
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Head
				{
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 1; };
							class Blood { damage = 1; };
							class Shock { damage = 3; };
						};
					};
				};
				class Torso
				{
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 1; };
							class Blood { damage = 1; };
							class Shock { damage = 1; }; // 1.0
						};
					};
				};
				class LeftArm
				{
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 1; };
							class Blood { damage = 1; };
							class Shock { damage = 0.17; }; // 0.33
						};
					};
				};
				class RightArm
				{
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 1; };
							class Blood { damage = 1; };
							class Shock { damage = 0.17; }; // 0.33
						};
					};
				};
				class LeftHand
				{
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 1; };
							class Blood { damage = 1; };
							class Shock { damage = 0.1; };
						};
					};
				};
				class RightHand
				{
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 1; };
							class Blood { damage = 1; };
							class Shock { damage = 0.1; };
						};
					};
				};
				class LeftLeg
				{
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 1.2; };
							class Blood { damage = 1; };
							class Shock { damage = 0.17; }; // 0.33
						};
					};
				};
				class RightLeg: LeftLeg { };
				class LeftFoot
				{
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 1.2; };
							class Blood { damage = 1; };
							class Shock { damage = 0.1; };
						};
					};
				};
				class RightFoot: LeftFoot { };
			};
		};
	};
};