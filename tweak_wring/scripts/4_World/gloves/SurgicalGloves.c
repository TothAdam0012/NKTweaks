modded class SurgicalGloves_ColorBase extends Clothing 
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
};