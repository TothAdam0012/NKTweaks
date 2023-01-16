class CfgPatches
{
	class NK_Tweaks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NK_Tweaks
	{
		dir = "NK\Tweaks";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_Tweaks";
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
				files[] = {"NK/Tweaks/scripts/4_world"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/scripts/3_Game"};
			};
		};
	};
};
