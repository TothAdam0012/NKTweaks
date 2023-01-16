modded class BookMenu
{
	override void OnHide()
	{
		super.OnHide();

		MissionGameplay.Cast(GetGame().GetMission()).PlayerControlEnable(false);
	}
}