class CfgPatches
{
	class NK_tweak_hints
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class NK_tweak_hints
	{
		dir = "NK\Tweaks\tweak_hints";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_tweak_hints";
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
				files[] = {"NK/Tweaks/tweak_hints/scripts/3_Game"};
			};
		};
	};
};