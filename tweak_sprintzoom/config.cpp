class CfgPatches
{
	class NK_tweak_sprintzoom
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NK_tweak_sprintzoom
	{
		dir = "NK/tweaks/tweak_sprintzoom";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_tweak_sprintzoom";
		credits = "Crocodoc"; // https://steamcommunity.com/sharedfiles/filedetails/?id=2935307787
		author = "XM";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NK/tweaks/tweak_sprintzoom/scripts/4_World"};
			};
		};
	};
};
