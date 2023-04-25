modded class Environment
{
	override protected float GetEnvironmentTemperature()
	{
		float temperature;
		temperature = g_Game.GetMission().GetWorldData().GetBaseEnvTemperature();
		temperature += Math.AbsFloat(temperature * m_Clouds * GameConstants.ENVIRO_CLOUDS_TEMP_EFFECT);

		/////////////////////////////////////////////////////
		// ============== MODIFIED PART OF CODE =============
		/////////////////////////////////////////////////////

		if (IsWaterContact() && m_WaterLevel > 0)
		{
			float waterHeatLoss = Math.AbsFloat(temperature * GameConstants.ENVIRO_WATER_TEMPERATURE_COEF);
			if(m_WaterLevel < WATER_LEVEL_HIGH)
			{
				float depthModifier = m_WaterLevel/WATER_LEVEL_HIGH;
				waterHeatLoss *= depthModifier;
			}

			temperature -= waterHeatLoss;
		}

		/////////////////////////////////////////////////////
		// ============== END OF MODIFICATION ===============
		/////////////////////////////////////////////////////


		if (IsInsideBuilding())
		{
			temperature += Math.AbsFloat(temperature * GameConstants.ENVIRO_TEMPERATURE_INSIDE_COEF);
		}
		else if (IsInsideVehicle())
		{
			temperature += Math.AbsFloat(temperature * GameConstants.ENVIRO_TEMPERATURE_INSIDE_VEHICLE_COEF);
		}
		else if (IsUnderRoof())
		{
			temperature += Math.AbsFloat(temperature * GameConstants.ENVIRO_TEMPERATURE_UNDERROOF_COEF);
			temperature -= GameConstants.ENVIRO_TEMPERATURE_WIND_COEF * GetWindModifierPerSurface() * m_Wind;
		}
		else
		{
			temperature -= GameConstants.ENVIRO_TEMPERATURE_WIND_COEF * GetWindModifierPerSurface() * m_Wind;
			temperature -= Math.AbsFloat(temperature * m_Fog * GameConstants.ENVIRO_FOG_TEMP_EFFECT);
			temperature -= GetTemperatureHeightCorrection();
		}
		
		// incorporate temperature from temperature sources (buffer)
		if (Math.AbsFloat(m_UTSAverageTemperature) > 0.001)
		{
			temperature += m_UTSAverageTemperature;
		}
		
		return temperature;
	}	
}