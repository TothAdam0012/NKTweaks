modded class DayZPlayerImplement
{
	override void HandleView()
	{
		super.HandleView();

		if(m_CameraEyeZoomLevel == ECameraZoomType.SHALLOW)
			m_CameraEyeZoomLevel = ECameraZoomType.NORMAL;
	}
}