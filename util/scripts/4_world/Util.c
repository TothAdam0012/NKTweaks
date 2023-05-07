class NKUtil
{
	static void SendMessage(PlayerBase player, string message)
	{
		if (player != null && player.IsAlive())
		{
			Param1<string> msg = new Param1<string>(message);
			PlayerIdentity playerIdentity = player.GetIdentity();
			GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, msg, true, playerIdentity);
		}
	}

	static void SetRandomHealth(EntityAI itemEntity, float lowerBound, float upperBound) {
		if(itemEntity) {
			float rndHlt = Math.RandomFloat( lowerBound, upperBound );
			itemEntity.SetHealth01( "", "", rndHlt );
		}
	}
	
	static EntityAI CreateWithRandomHealth(EntityAI containerEntity, string type, float lowerBound, float upperBound) {
		EntityAI itemEntity = containerEntity.GetInventory().CreateInInventory( type );
		SetRandomHealth(itemEntity, lowerBound, upperBound);
		return itemEntity;
	}
	
	static EntityAI CreateWithQuantity(EntityAI containerEntity, string type, int quantity) {
		EntityAI itemEntity = containerEntity.GetInventory().CreateInInventory( type );
		ItemBase itemBase;
		if(Class.CastTo(itemBase, itemEntity)) {
			itemBase.SetQuantity( quantity );
		}
		return itemEntity;
	}

	/**
	* Return true with 'pct' percent chance
	*/
	static bool Chance(float pct) {
		if(pct <= 0.0) return false;
		if(pct >= 100.0) return true;
		return Math.RandomFloat01() < pct/100.0;
	}
}