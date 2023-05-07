class CfgPatches
{
	class NK_tweak_iteminitdamage
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "NK_util"};
	};
};

class CfgMods
{
	class NK_tweak_iteminitdamage
	{
		dir = "NK\Tweaks\tweak_iteminitdamage";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_tweak_iteminitdamage";
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
				files[] = {"NK/Tweaks/tweak_iteminitdamage/scripts/4_World"};
			};
		};
	};
};