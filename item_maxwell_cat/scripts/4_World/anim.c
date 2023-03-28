modded class ModItemRegisterCallbacks
{
	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterTwoHanded(pType, pBehavior);
        pType.AddItemInHandsProfileIK("NK_maxwell_cat", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, 							"dz/anims/anm/player/ik/two_handed/CookingPot.anm");
	}
};