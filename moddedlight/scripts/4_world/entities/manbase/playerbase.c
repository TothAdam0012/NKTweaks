modded class PlayerBase {
	
	bool m_moddedLight = true;
	
	bool HasModdedLight() {
		return m_moddedLight;
	}
	
	void SetModdedLight(bool val) {
		m_moddedLight = val;
		if ( GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT || !GetGame().IsMultiplayer() )
		{
			string lighting;
			if(val) {
				lighting = GetGame().GetMission().GetWorldLighting().GetModdedLighting();
				//GetGame().GetWorld().SetAperture(0.83);
			} else {
				lighting = GetGame().GetMission().GetWorldLighting().GetDefaultLighting();
				//GetGame().GetWorld().SetAperture(1.0);
			}
			GetGame().GetWorld().LoadNewLightingCfg(lighting);
		}
	}
}