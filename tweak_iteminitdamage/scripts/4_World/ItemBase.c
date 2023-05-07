modded class ItemBase {
	override void EEOnCECreate() {
		if (!IsMagazine() && HasQuantity()) SetCEBasedQuantity();

		// 20% chance to return true
		if(NKUtil.Chance(99)) {
			SetHealth(GetMaxHealth() * Math.RandomFloat(0.1, 0.5));
		}
		SetZoneDamageCEInit();
	}
}