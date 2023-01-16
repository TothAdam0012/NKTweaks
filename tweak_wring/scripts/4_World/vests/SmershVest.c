modded class SmershVest extends Clothing 
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
};