class CfgPatches
{
	class NK_moddedlight
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class NK_moddedlight
	{
		dir = "NK\Tweaks\moddedlight";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_moddedlight";
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
				files[] = {"NK/Tweaks/moddedlight/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/moddedlight/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class Paper;
	class NK_DebugPaper: Paper {};
};