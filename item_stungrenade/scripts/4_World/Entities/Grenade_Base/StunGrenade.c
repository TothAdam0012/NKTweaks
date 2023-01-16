class NK_StunGrenade extends FlashGrenade {

	void NK_StunGrenade()
	{
		SetAmmoType("NK_StunGrenade_Ammo");
		SetFuseDelay(4);
		SetGrenadeType(EGrenadeType.ILLUMINATING);
		SetParticleExplosion(ParticleList.GRENADE_M84);
	}

	void ~NK_StunGrenade() {}
}