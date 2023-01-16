class ActionDXSelf: ActionBandageSelf
{
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item ) {
		return true;
	}
	
	override string GetText()
	{
		return "Heal";
	}

	override void ApplyBandage( ItemBase item, PlayerBase player ) {	
		player.AddHealth("", "Health", 60);
		player.AddHealth("", "Shock", 20);
		player.AddHealth("", "Blood", 1000);
		player.GetModifiersManager().ActivateModifier( eModifiers.MDF_DISINFECTION );
		
		if(player.GetBleedingManagerServer().GetBleedingSourcesCount() > 4)
		{
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
		}
		else
		{
			player.GetBleedingManagerServer().RemoveAllSources();
		}
		
		if (item.HasQuantity()) {
			item.AddQuantity(-1,true);
		} else {
			item.Delete();
		}
	}
};
