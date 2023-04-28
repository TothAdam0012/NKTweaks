modded class PlayerBase {
	int m_moddedLightingId = -1;

	void resetLighting() {
		m_moddedLightingId = -1;
		if ( GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT || !GetGame().IsMultiplayer() )
			GetGame().GetWorld().LoadNewLightingCfg(GetGame().GetMission().GetWorldLighting().GetVanillaDarkLighting());
	}

	int nextModdedLighting() {
		string lighting = GetGame().GetMission().GetWorldLighting().GetModdedLightingById(++m_moddedLightingId);
		if(lighting == "") {
			m_moddedLightingId = 0;
			lighting = GetGame().GetMission().GetWorldLighting().GetModdedLightingById(0);
		}
		if ( GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT || !GetGame().IsMultiplayer() ) {
			GetGame().GetWorld().LoadNewLightingCfg(lighting);
		}
		return m_moddedLightingId;
	}

}