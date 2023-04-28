class CfgPatches
{
	class NK_item_readable
	{
		units[] = {"NK_Readable_book", "NK_Readable_note"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Gear_Consumables", "DZ_Gear_Books"};
	};
};

class CfgMods
{
	class NK_item_readable
	{
		dir = "NK\Tweaks\item_readable";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NK_item_readable";
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
				files[] = {"NK/Tweaks/item_readable/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"NK/Tweaks/item_readable/scripts/5_Mission"};
			};
		};
	};
};

class CfgVehicles
{
	class ItemBook;
	class NK_readable_book: ItemBook
	{
		scope = 2;
		title = "";
		author = "";
		file = "NK\Tweaks\item_readable\data\default.html";
		displayName = "Readable book";
		descriptionShort = "A book that has readable content.";
		hiddenSelectionsTextures[] = {"NK\Tweaks\item_readable\data\Book_Green_co.paa"};
	};
	
	class Paper;
	class NK_readable_note: Paper
	{
		scope = 2;
		title = "";
		author = "";
		file = "NK\Tweaks\item_readable\data\default.html";
		displayName = "Readable note";
		descriptionShort = "A note that has readable content.";
	};

	class NK_readable_shitpostbase: NK_readable_note
	{
		scope = 2;
		descriptionShort = "A note that has some questionable content.";
	};

	class NK_readable_shitpost1: NK_readable_shitpostbase
	{
		file = "NK\Tweaks\item_readable\data\shitpost1.html";
		displayName = "Collectible 1";
	};
	class NK_readable_shitpost2: NK_readable_shitpostbase
	{
		file = "NK\Tweaks\item_readable\data\shitpost2.html";
		displayName = "Collectible 2";
	};
	class NK_readable_shitpost3: NK_readable_shitpostbase
	{
		file = "NK\Tweaks\item_readable\data\shitpost3.html";
		displayName = "Collectible 3";
	};
	class NK_readable_shitpost4: NK_readable_shitpostbase
	{
		file = "NK\Tweaks\item_readable\data\shitpost4.html";
		displayName = "Collectible 4";
	};
};