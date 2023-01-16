modded class GhillieHood_ColorBase extends Clothing 
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
};