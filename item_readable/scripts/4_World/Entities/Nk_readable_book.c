class NK_readable_book extends ItemBook
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionReadBook);
	}
}