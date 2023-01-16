modded class MissionGameplay
{
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate( timeslice );

		// book reading (from namalsk or czl book reading; i have no idea both have the same code)
		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		if (player && player.IsReadingBook())
		{
			player.ToggleBookReading();
			InventoryItem book = player.GetItemInHands();
			BookMenu bookMenu = BookMenu.Cast( GetUIManager().EnterScriptedMenu(MENU_BOOK, NULL) );
			if (bookMenu) 
			{
				PlayerControlDisable(INPUT_EXCLUDE_ALL);
				bookMenu.ReadBook(book);
			}
		}
	}
};