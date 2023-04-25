class CfgPatches
{
	// credits: https://steamcommunity.com/sharedfiles/filedetails/?id=2960002014
	class NK_item_lymecycline
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Medical"};
	};
};
class CfgVehicles
{
	class TetracyclineAntibiotics;

	class NK_lymecycline: TetracyclineAntibiotics
	{
        displayName="Lymecycline";
        descriptionShort="Tetracycline broad-spectrum antibiotic.";
        hiddenSelections[]={"zbytek"};
        hiddenSelectionsTextures[]={"NK\Tweaks\item_lymecycline\Lymecycline.paa","NK\Tweaks\item_lymecycline\Lymecycline.paa","NK\Tweaks\item_lymecycline\Lymecycline.paa"};
    };
};