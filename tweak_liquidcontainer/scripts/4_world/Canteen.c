modded class Canteen
{
	override void EEOnCECreate()
	{
		super.EEOnCECreate();

		int rand = Math.RandomInt(0, 10);
		if(rand == 0)
		{
			SetLiquidType(LIQUID_GASOLINE, true);
		}
		else
		{
			rand = Math.RandomInt(0, 10);
			if(rand > 5)
			{
				InsertAgent(eAgents.CHOLERA, 1);
			}
		}
	}
}