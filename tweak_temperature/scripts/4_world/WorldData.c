modded class ChernarusPlusData
{
	const int CLEAR_WEATHER_CHANCE = 80;
	const int BAD_WEATHER_CHANCE = 10;
		
	protected int m_clearWeatherChance = CLEAR_WEATHER_CHANCE;
	protected int m_badWeatherChance = BAD_WEATHER_CHANCE;

	override void Init()
	{
		super.Init();

		m_Sunrise_Jan = 8.54;
		m_Sunset_Jan = 15.52;
		m_Sunrise_Jul = 4.26;
		m_Sunset_Jul = 20.73;

		//            1     2      3     4     5     6     7     8     9     10    11     12 
		m_MaxTemps = {10,   10,    12,   12,   12,   13,   13,   14,   13,   13,   11,    9};
		m_MinTemps = {-3,  -2,    -1,   -1,    0,    0,    1,    1,    0,    -1,   -1,    -3};
		m_FiringPos = CHERNARUS_ARTY_STRIKE_POS;
	}		

};

modded class EnochData
{
	const int CLEAR_WEATHER_CHANCE = 80;
	const int BAD_WEATHER_CHANCE = 10;
		
	protected int m_clearWeatherChance = CLEAR_WEATHER_CHANCE;
	protected int m_badWeatherChance = BAD_WEATHER_CHANCE;

	override void Init()
	{
		super.Init();

		m_Sunrise_Jan = 8.54;
		m_Sunset_Jan = 15.52;
		m_Sunrise_Jul = 4.26;
		m_Sunset_Jul = 20.73;

		//            1     2      3     4     5     6     7     8     9     10    11     12 
		m_MaxTemps = {10,   10,    12,   12,   12,   13,   13,   14,   13,   13,   11,    9};
		m_MinTemps = {-3,  -2,    -1,   -1,    0,    0,    1,    1,    0,    -1,   -1,    -3};
		m_FiringPos = LIVONIA_ARTY_STRIKE_POS;
	}		

};