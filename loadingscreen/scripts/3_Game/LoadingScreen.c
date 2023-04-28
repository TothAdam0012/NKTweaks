
// path of paa image to be used as loadingscreen
static const string NKLoadingscreen = "NK/Tweaks/loadingscreen/data/nkloadingscreen_co.paa";

// don't have to change anything below

modded class LoadingScreen {

	void LoadingScreen(DayZGame game) {
		Class.CastTo(m_ImageLogoMid, m_WidgetRoot.FindAnyWidget("ImageLogoMid"));
		Class.CastTo(m_ImageLogoCorner, m_WidgetRoot.FindAnyWidget("ImageLogoCorner"));
		m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(false);		
		m_ImageBackground.LoadImageFile(0, NKLoadingscreen);
		m_ImageBackground.LoadMaskTexture("");
		ProgressAsync.SetUserData(m_ImageBackground);
	}
}

modded class LoginQueueBase {

	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadMaskTexture("");
		imageWidgetBackground.LoadImageFile(0, NKLoadingscreen);
		return w;
	}
}

modded class LoginTimeBase {

	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadMaskTexture("");
		imageWidgetBackground.LoadImageFile(0, NKLoadingscreen);
		return w;
	}	
}
