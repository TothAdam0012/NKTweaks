modded class ItemBase {
	override void EEOnCECreate() {
		if (!IsMagazine() && HasQuantity()) SetCEBasedQuantity();

		// 20% chance to return true
		if(NKUtil.Chance(20)) {
			SetHealth(GetMaxHealth() * Math.RandomFloat(0.0, 0.5));
		}
		SetZoneDamageCEInit();
	}
}