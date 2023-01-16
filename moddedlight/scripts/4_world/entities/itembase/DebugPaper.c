class NK_DebugPaper extends Paper
{
	override void SetActions()
	{
		super.SetActions();
		
		//AddAction(ActionReadPaper);
		//AddAction(ActionWritePaper);

		AddAction(ActionSwitchLight);
	}
}
