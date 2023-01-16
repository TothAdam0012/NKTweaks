class ActionCraftNBCJacketGrayFoldedCB : ActionContinuousBaseCB
{	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(3);
	}
};

class ActionCraftNBCJacketGrayFolded: ActionContinuousBase
{
	void ActionCraftNBCJacketGrayFolded()
	{
		m_CallbackClass = ActionCraftNBCJacketGrayFoldedCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
		m_Text = "Fold";
	}
	
	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return item.IsEmpty();
	}
	
	override bool HasTarget()
	{
		return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
		MiscGameplayFunctions.TurnItemIntoItem(action_data.m_MainItem, "NK_folded_NBCJacketGray", action_data.m_Player);
	}
};
