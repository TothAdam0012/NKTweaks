class CfgPatches
{
	class NK_tweak_temperature
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class NK_tweak_temperature
	{
		dir = "NK\Tweaks\tweak_temperature";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_tweak_temperature";
		credits = "XM";
		author = "XM";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World", "Game"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/tweak_temperature/scripts/4_World"};
			};
		};
	};
};