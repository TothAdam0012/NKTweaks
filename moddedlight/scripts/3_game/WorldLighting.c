modded class WorldLighting {
	ref TStringArray moddedLighting = {
		"NK\\Tweaks\\moddedlight\\lighting\\lighting_modded.c",
		"NK\\Tweaks\\moddedlight\\lighting\\lighting_modded2.c", // unused atm
		"NK\\Tweaks\\moddedlight\\lighting\\lighting_modded3.c" // unused atm
	};
	string lighting[] = {
		"dz\\data\\lighting\\lighting_default.txt", 
		"dz\\data\\lighting\\lighting_darknight.txt",
		"NK\\Tweaks\\moddedlight\\lighting\\lighting_modded.c"};
	string initialLight = lighting[0];

	override void SetGlobalLighting(int lightingID) {
		if(lightingID == 0 || lightingID == 1) {
			initialLight = lighting[lightingID];
			GetGame().GetWorld().LoadNewLightingCfg(lighting[lightingID]);
		} else {
			initialLight = lighting[2];
			GetGame().GetWorld().LoadNewLightingCfg(lighting[2]);
		}
	}

	// lightconfig the server booted up with
	string GetInitialLighting() {
		return initialLight;
	}

	// vanilla bright night lighting config
	string GetVanillaBrightLighting() {
		return lighting[0];
	}

	// vanilla dark night lighting config
	string GetVanillaDarkLighting() {
		return lighting[1];
	}

	// DTweaks lighting config (also has dark nights)
	string GetModdedLighting() {
		return lighting[2];
	}

	string GetModdedLightingById(int id) {
		if(id >= moddedLighting.Count()) {
			return "";
		}
		return moddedLighting.Get(id);
	}
}