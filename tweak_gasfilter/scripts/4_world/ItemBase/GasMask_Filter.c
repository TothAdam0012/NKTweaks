
// the normal filter has the default damage ratio due to losing health relatively slow and low quantity filters being common

/*
class GasMask_Filter : ItemBase
{
	override float GetFilterDamageRatio() 
	{
		return 0.09; //Health lost per quantity consumed
	}
}
*/

modded class GasMask_Filter_Improvised: GasMask_Filter
{
	override float GetFilterDamageRatio() 
	{
		//return 0.25; //Health lost per quantity consumed
		return 0.15;
	}
}