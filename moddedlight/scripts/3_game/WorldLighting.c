modded class WorldLighting {
	string lighting[] = {
		"dz\\data\\lighting\\lighting_default.txt", 
		"dz\\data\\lighting\\lighting_darknight.txt",
		"NK\\Tweaks\\moddedlight\\lighting\\lighting_modded.c"};
	string defaultLight = lighting[0];

	override void SetGlobalLighting(int lightingID) {
		if(lightingID == 0 || lightingID == 1) {
			defaultLight = lighting[lightingID];
			GetGame().GetWorld().LoadNewLightingCfg(lighting[lightingID]);
		} else {
			GetGame().GetWorld().LoadNewLightingCfg(lighting[2]);
		}
	}
	
	string GetDefaultLighting() {
		return defaultLight;
	}

	string GetModdedLighting() {
		return lighting[2];
	}
}