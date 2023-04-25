class CfgPatches
{
	class NK_tweak_longrangeoptic
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};

class CfgMods
{
	class NK_tweak_longrangeoptic
	{
		dir = "NK/Tweaks/tweak_longrangeoptic";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "tweak_longrangeoptic";
		credits = "XM";
		author = "XM";
		authorID = "0";
		version = 1.0;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/tweak_longrangeoptic/scripts/4_World"};
			};
		};
	};
};

class cfgVehicles
{
	class ItemOptics_Base;
	class LongrangeOptic: ItemOptics_Base
	{
		scope = 2;
		displayName = "Longrange optic";
		descriptionShort = "Long-range hunting scope which can be mounted on the Mosin rifle.";
		itemSize[] = {1,4};
		inventorySlot[] += {"weaponOpticsMosin"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\data\terra.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\data\terra_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\data\terra_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "\DZ\weapons\attachments\optics\opticview_longrange.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/10";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/6","0.3926/10"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 800;
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.43,0.09};
			PPLensProperties[] = {0.5,0.5,0,0};
			PPBlurProperties = 0.5;
		};
	};

};