modded class Edible_Base
{		
	Particle m_HeatParticles;
	
	void ~Edible_Base()
	{
		if (GetGame() && (GetGame().IsClient() || !GetGame().IsMultiplayer()) && m_HeatParticles) {
			m_HeatParticles.Stop();
			GetGame().ObjectDelete(m_HeatParticles);
		}
	}

	override void UpdateVisuals()
	{
		super.UpdateVisuals();
		
		if (GetGame() && GetGame().IsClient() || !GetGame().IsMultiplayer()) {
			if (GetTemperature() > 99 && !m_HeatParticles) {
				m_HeatParticles = Particle.PlayOnObject(ParticleList.COOKING_BOILING_DONE, this);
			} 
			
			else if (GetTemperature() < 61 && m_HeatParticles) {
				m_HeatParticles.Stop();
				GetGame().ObjectDelete(m_HeatParticles);
			}
		}
	}
}