modded class ChemlightLight
{
	void ChemlightLight()
	{
		SetVisibleDuringDaylight(true);
	}
}

modded class FireplaceLight
{
	void FireplaceLight()
	{
		SetVisibleDuringDaylight(true);
	}
}

modded class PersonalLight
{
	void PersonalLight()
	{
		SetRadiusTo( 7.5 );
		SetVisibleDuringDaylight(true);
	}
}

modded class PortableGasLampLight
{
	void PortableGasLampLight()
	{
		SetVisibleDuringDaylight(true);
		SetCastShadow( false );
	}
}

modded class StoveLight
{
	void StoveLight()
	{
		SetVisibleDuringDaylight(true);
	}
}

modded class TorchLight
{
	void TorchLight()
	{
		SetVisibleDuringDaylight(true);
	}
}

modded class XmasTreeLight
{
	void XmasTreeLight()
	{
		SetVisibleDuringDaylight(true);
	}
}
/*
modded class ScriptedLightBase {
	override void CorrectLightPulseDuringDaylight() {
		
	}
};*/