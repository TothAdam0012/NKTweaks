class CfgPatches
{
	class NK_util
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class NK_util
	{
		dir = "NK\Tweaks\util";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_util";
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
				files[] = {"NK/Tweaks/util/scripts/4_World"};
			};
		};
	};
};