class CfgPatches
{
	class NK_constants
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class NK_constants
	{
		dir = "NK\Tweaks\constants";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_constants";
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
				files[] = {"NK/Tweaks/constants/scripts/3_Game"};
			};
		};
	};
};