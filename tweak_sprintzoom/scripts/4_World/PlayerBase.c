modded class PlayerBase
{
	override void HandleView()
	{
		super.HandleView();

		if(m_CameraEyeZoomLevel == ECameraZoomType.SHALLOW && IsInVehicle())
			m_CameraEyeZoomLevel = ECameraZoomType.NORMAL;
	}
}