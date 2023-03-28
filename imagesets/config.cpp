class CfgPatches
{
	class NK_tweak_imagesets
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NK_tweak_imagesets
	{
		dir = "NK\Tweaks\imagesets";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_tweak_imagesets";
		credits = "XM";
		author = "XM";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {};
		class defs
		{
			class imageSets
			{
				files[] = {"NK/Tweaks/imagesets/set.imageset"};
			};
		};
	};
};
