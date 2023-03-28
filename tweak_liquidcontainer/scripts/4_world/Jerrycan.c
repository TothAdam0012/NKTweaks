modded class CanisterGasoline
{
	override void EEOnCECreate()
	{
		super.EEOnCECreate();

		float randModifier = Math.RandomFloat( 0.8, 0.95 );
		SetQuantity(GetQuantityMax() * randModifier);
	}
}