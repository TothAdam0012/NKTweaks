class CfgPatches
{
	class ImmersiveToiletPaper
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};

class CfgMods
{
	class ImmersiveToiletPaper
	{
		dir = "NK\Tweaks\item_ImmersiveToiletPaper";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ImmersiveToiletPaper";
		credits = "https://steamcommunity.com/sharedfiles/filedetails/?id=2189808704";
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
				files[] = {"NK/Tweaks/item_ImmersiveToiletPaper/scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class BandageDressing;
	class NK_Toilet_Paper_B10: BandageDressing
	{
		scope=2;
		displayName="Toilet Paper";
		descriptionShort="A roll of toilet paper.";
		model="NK\Tweaks\item_ImmersiveToiletPaper\toilet_paper.p3d";
		weight=50;
		absorbency=1;
		itemSize[]={1,2};
		inventorySlot[]={"Rags", "NK_Bandage1", "NK_Bandage2"};
		canBeSplit=0;
		quantityBar=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		rotationFlags=17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					//healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
					healthLevels[] = {{1.0,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper.rvmat"}},{0.7,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper.rvmat"}},{0.5,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper_damage.rvmat"}},{0.3,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper_bdamage.rvmat"}},{0.0,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper_destruct.rvmat"}}};
				};
			};
		};
	};
	class NK_Toilet_Paper_B4: BandageDressing
	{
		scope=2;
		displayName="Toilet Paper";
		descriptionShort="A roll of toilet paper.";
		model="NK\Tweaks\item_ImmersiveToiletPaper\toilet_paper.p3d";
		weight=50;
		absorbency=1;
		itemSize[]={1,2};
		inventorySlot[]={"Rags", "NK_Bandage1", "NK_Bandage2"};
		canBeSplit=0;
		quantityBar=1;
		varQuantityInit=4;
		varQuantityMin=0;
		varQuantityMax=4;
		varQuantityDestroyOnMin=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		rotationFlags=17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					//healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
					healthLevels[] = {{1.0,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper.rvmat"}},{0.7,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper.rvmat"}},{0.5,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper_damage.rvmat"}},{0.3,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper_bdamage.rvmat"}},{0.0,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper_destruct.rvmat"}}};
				};
			};
		};
	};

	class RGD5Grenade;
	class NK_Toilet_Paper_RGD5: RGD5Grenade
	{
		scope = 2;
		displayName="Toilet Paper";
		descriptionShort="A roll of explosive toilet paper.";
		model="NK\Tweaks\item_ImmersiveToiletPaper\toilet_paper.p3d";
		weight = 350;
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"dz\weapons\explosives\data\frag_RGD5_CO.paa"};
		//hiddenSelectionsMaterials[] = {"dz\weapons\explosives\data\frag_RGD5.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					//healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
					healthLevels[] = {{1.0,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper.rvmat"}},{0.7,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper.rvmat"}},{0.5,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper_damage.rvmat"}},{0.3,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper_bdamage.rvmat"}},{0.0,{"NK\Tweaks\item_ImmersiveToiletPaper\data\toilet_paper_destruct.rvmat"}}};
				};
			};
		};
	};
};

