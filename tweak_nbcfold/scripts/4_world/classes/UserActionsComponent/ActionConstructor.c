modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
		actions.Insert(ActionCraftNBCJacketGray);
		actions.Insert(ActionCraftNBCJacketYellow);
		actions.Insert(ActionCraftNBCJacketGrayFolded);
		actions.Insert(ActionCraftNBCJacketYellowFolded);
	}
};