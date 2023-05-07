modded class PlayerBase {

	void resetLighting() {
		if ( GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT || !GetGame().IsMultiplayer() ) {
			GetGame().GetWorld().LoadNewLightingCfg(GetGame().GetMission().GetWorldLighting().GetVanillaDarkLighting());
			GetGame().GetWorld().SetUserLightingLerp(0);
		}
		
	}

	void loadModdedLighting() {
		if ( GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT || !GetGame().IsMultiplayer() ) {

			GetGame().GetWorld().LoadUserLightingCfg("C:\\Program Files (x86)\\Steam\\steamapps\\common\\DayZ Server Exp\\mpmissions\\dayzOffline.nekladek\\lighting_better.txt", "Better");
			GetGame().GetWorld().SetUserLightingLerp(1);
		}
	}

}