class CfgPatches
{
	class NK_loadingscreen
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NK_loadingscreen
	{
		dir = "NK/Tweaks/loadingscreen";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_loadingscreen";
		credits = "https://www.youtube.com/watch?v=5zaGbtRFJ8k";
		author = "XM";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/loadingscreen/scripts/3_Game"};
			};
		};
	};
};
