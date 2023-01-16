modded class JMAnimRegister
{
	override void OnRegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.OnRegisterOneHanded( pType, pBehavior );

		pType.AddItemInHandsProfileIK("NK_Toilet_Paper_B10", "dz/anims/workspaces/player/player_main/props/player_main_1h_sodacan.asi", pBehavior, "dz/anims/anm/player/ik/gear/GasCannisterLarge.anm");
		pType.AddItemInHandsProfileIK("NK_Toilet_Paper_B4", "dz/anims/workspaces/player/player_main/props/player_main_1h_sodacan.asi", pBehavior, "dz/anims/anm/player/ik/gear/GasCannisterLarge.anm");
		pType.AddItemInHandsProfileIK("NK_Toilet_Paper_RGD5", "dz/anims/workspaces/player/player_main/props/player_main_1h_sodacan.asi", pBehavior, "dz/anims/anm/player/ik/gear/GasCannisterLarge.anm");
		// need to adjust center for this to not look dogshit
	}
}; 