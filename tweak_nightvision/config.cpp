class CfgPatches
{
	class NK_tweak_nightvision
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters_Glasses"};
	};
};

class CfgMods
{
	class NK_tweak_nightvision
	{
		dir = "NK\Tweaks\tweak_nightvision";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_tweak_nightvision";
		credits = "XM";
		author = "XM";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World", "Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/tweak_nightvision/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/tweak_nightvision/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class NVGoggles;
	class NK_NVGogglesB: NVGoggles
	{
		scope = 2;
		displayName = "Better nvg";
		descriptionShort = "better";
	};
};
