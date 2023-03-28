modded class VomitSymptom extends SymptomBase
{
	override bool IsContaminationActive()
	{
		return false;
	}
};

modded class AreaExposureMdfr: ModifierBase
{
	override void BleedingSourceCreateCheck(PlayerBase player)
	{
		
	}
};