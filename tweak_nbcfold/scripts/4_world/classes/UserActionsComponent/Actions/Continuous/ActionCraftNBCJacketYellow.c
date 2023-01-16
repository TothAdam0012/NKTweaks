class ActionCraftNBCJacketYellowCB : ActionContinuousBaseCB
{	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(3);
	}
};

class ActionCraftNBCJacketYellow: ActionContinuousBase
{
	void ActionCraftNBCJacketYellow()
	{
		m_CallbackClass = ActionCraftNBCJacketYellowCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
		m_Text = "Unfold";
	}
	
	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return true;
	}
	
	override bool HasTarget()
	{
		return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
		MiscGameplayFunctions.TurnItemIntoItem(action_data.m_MainItem, "NBCJacketYellow", action_data.m_Player);
	}
};
