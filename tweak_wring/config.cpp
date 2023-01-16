class CfgPatches
{
	class NK_tweak_wring
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NK_tweak_wring
	{
		credits = "steamcommunity.com/sharedfiles/filedetails/?id=2780261120";
		authorID = "76561199236087909";
		// from @Wring Gloves (vanilla) mod
		dir = "NK\Tweaks\tweak_wring";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_tweak_wring";
		author = "XM";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World", "Game"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/tweak_wring/scripts/4_World"};
			};
		};
	};
};