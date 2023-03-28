class CfgPatches
{
	class NK_tweak_maskonly
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class NK_tweak_maskonly
	{
		dir = "NK\Tweaks\tweak_maskonly";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_tweak_maskonly";
		credits = "https://steamcommunity.com/sharedfiles/filedetails/?id=2621103156";
		author = "Crocodoc";
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
				files[] = {"NK/Tweaks/tweak_maskonly/scripts/4_World"};
			};
		};
	};
};