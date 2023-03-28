class CfgPatches
{
	class NK_item_funnyflag
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters_Tops", "DZ_Gear_Camping"};
	};
};

class CfgVehicles
{
	class Flag_Base;
	class Armband_ColorBase;

	class Flag_NK_Funny: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\NK\Tweaks\item_funnyflag\flag_funny_co.paa"};
		color = "NK_Funny";
	};

	class Armband_NK_Funny: Armband_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		color = "NK_Funny";
		hiddenSelectionsTextures[] = {"\NK\Tweaks\item_funnyflag\flag_funny_co.paa", "\NK\Tweaks\item_funnyflag\flag_funny_co.paa", "\NK\Tweaks\item_funnyflag\flag_funny_co.paa", "\NK\Tweaks\item_funnyflag\flag_funny_co.paa", "\NK\Tweaks\item_funnyflag\flag_funny_co.paa", "\NK\Tweaks\item_funnyflag\flag_funny_co.paa", "\NK\Tweaks\item_funnyflag\flag_funny_co.paa", "\NK\Tweaks\item_funnyflag\flag_funny_co.paa", "\NK\Tweaks\item_funnyflag\flag_funny_co.paa"};
	};

};