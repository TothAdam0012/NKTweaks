#define UNUSED_PARAMS \
	luminanceRectCoef = 0.0; \
	luminanceRectCoefCloud = 0.0; \
	rayleigh[] = {0.0, 0.0, 0.0}; \
	mie[] = {0.0, 0.0, 0.0}; \
	cloudsColor[] = {0.0, 0.0, 0.0}; \
	swBrightness = 0;

class LightingNew
{
  // CLEAR SET
  class C_Night
  {
	height = 0;									// altitude in meters for which this settings applies
	overcast = 0.35;							// overcast value for which this settings applies
	sunAngle = -18;								// angle of sun or moon
	sunOrMoon = 0.0;							// defines the switch between sun and moon
	diffuse[] = {0.1,0.150,0.3};				// facing global light (sun / moon)
	diffuseCloud[] = {0.1,0.150,0.3};
	bidirect[] = {0.0, 0.0, 0.0};				// opposite of diffuse
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.008,0.0158,0.024};			// shadows
	ambientCloud[] = {0.008,0.0158,0.024};
	groundReflection[] = {0.004,0.0072,0.012};		// illumination from ground
	groundReflectionCloud[] = {0.004,0.0072,0.012};
	sky[] = {0.018, 0.028, 0.043};				// also affects color of the fog
	skyAroundSun[] = {0.018, 0.028, 0.043};		// halo around sun / moon
	desiredLuminanceCoef = -0.14;				// luminance
	desiredLuminanceCoefCloud = -0.14;
	EVMin = -2.0;								// scene gets darker with higher value (default -2.0)
	EVMax = 0.0;								// scene gets brigther with higher value (default  0.5)
	filmGrainIntensity = 0.0125;				// intensity of filgram (applied to lower lum px)
	
	UNUSED_PARAMS
  };

  // astro
  class C_Astro1
  {
	height = 0;
	overcast = 0.35;
	sunAngle = -17;
	sunOrMoon = 0.5;
	diffuse[] = {0.0, 0.0, 0.0};
	diffuseCloud[] = {0.0, 0.0, 0.0};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.008,0.0158,0.024};
	ambientCloud[] = {0.008,0.0158,0.024};
	groundReflection[] = {0.004,0.0072,0.012};
	groundReflectionCloud[] = {0.004,0.0072,0.012};
	sky[] = {0.036, 0.056, 0.087};
	skyAroundSun[] = {0.036, 0.056, 0.087};
	desiredLuminanceCoef = -0.14;
	desiredLuminanceCoefCloud = -0.14;
	EVMin = -2.0;
	EVMax = 0.5;
	filmGrainIntensity = 0.0125;
	
	UNUSED_PARAMS
  };
  class C_Astro2
  {
	height = 0;
	overcast = 0.35;
	sunAngle = -16;
	sunOrMoon = 1.0;
	diffuse[] = {0.0, 0.0, 0.0};
	diffuseCloud[] = {0.0, 0.0, 0.0};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.032,0.0632,0.096};
	ambientCloud[] = {0.032,0.0632,0.096};
	groundReflection[] = {0.008,0.0144,0.024};
	groundReflectionCloud[] = {0.008,0.0144,0.024};
	sky[] = {0.036, 0.056, 0.087};
	skyAroundSun[] = {0.1011, 0.1063, 0.0926};
	desiredLuminanceCoef = -0.14;
	desiredLuminanceCoefCloud = -0.14;
	EVMin = -2.0;
	EVMax = 0.5;
	filmGrainIntensity = 0.0125;
	
	UNUSED_PARAMS
  };
  class C_Astro3
  {
	height = 0;
	overcast = 0.35;
	sunAngle = -14;
	sunOrMoon = 1.0;
	diffuse[] = {0.0, 0.0, 0.0};
	diffuseCloud[] = {0.0, 0.0, 0.0};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.032,0.0632,0.096};
	ambientCloud[] = {0.032,0.0632,0.096};
	groundReflection[] = {0.008,0.0144,0.024};
	groundReflectionCloud[] = {0.008,0.0144,0.024};
	sky[] = {0.1,0.14,0.22};
	skyAroundSun[] = {0.3035, 0.319, 0.278};
	desiredLuminanceCoef = -0.14;
	desiredLuminanceCoefCloud = -0.14;
	EVMin = -2.0;
	EVMax = 0.5;
	filmGrainIntensity = 0.0125;
	
	UNUSED_PARAMS
  };

  // nautical
  class C_Nautical1
  {
	height = 0;
	overcast = 0.35;
	sunAngle = -12;
	sunOrMoon = 1.0;
	diffuse[] = {0.0, 0.0, 0.0};
	diffuseCloud[] = {0.0, 0.0, 0.0};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.064,0.1264,0.192};
	ambientCloud[] = {0.064,0.1264,0.192};
	groundReflection[] = {0.016,0.0288,0.048};
	groundReflectionCloud[] = {0.016,0.0288,0.048};
	sky[] = {0.15,0.21,0.34};
	skyAroundSun[] = {0.6039, 0.5411, 0.4509};
	desiredLuminanceCoef = -0.12;
	desiredLuminanceCoefCloud = -0.12;
	EVMin = -2.0;
	EVMax = 0.5;
	filmGrainIntensity = 0.011;
	
	UNUSED_PARAMS
  };
  class C_Nautical2
  {
	height = 0;
	overcast = 0.35;
	sunAngle = -10;
	sunOrMoon = 1.0;
	diffuse[] = {0.1011, 0.1063, 0.0926};
	diffuseCloud[] = {0.1011, 0.1063, 0.0926};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.128,0.2528,0.384};
	ambientCloud[] = {0.128,0.2528,0.384};
	groundReflection[] = {0.016,0.0288,0.048};
	groundReflectionCloud[] = {0.016,0.0288,0.048};
	sky[] = {0.15,0.21,0.34};
	skyAroundSun[] = {0.8039, 0.5411, 0.4509};
	desiredLuminanceCoef = -0.12;
	desiredLuminanceCoefCloud = -0.12;
	EVMin = -2.0;
	EVMax = 0.5;
	filmGrainIntensity = 0.010;

	UNUSED_PARAMS
  };
  class C_Nautical3
  {
	height = 0;
	overcast = 0.35;
	sunAngle = -8;
	sunOrMoon = 1.0;
	diffuse[] = {0.2311, 0.2112, 0.184};
	diffuseCloud[] = {0.2311, 0.2112, 0.184};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.128,0.2528,0.384};
	ambientCloud[] = {0.128,0.2528,0.384};
	groundReflection[] = {0.032,0.0572,0.096};
	groundReflectionCloud[] = {0.032,0.0572,0.096};
	sky[] = {0.15,0.21,0.34};
	skyAroundSun[] = {0.8039, 0.5411, 0.4509};
	desiredLuminanceCoef = -0.04;
	desiredLuminanceCoefCloud = -0.04;
	EVMin = -2.0;
	EVMax = 0.5;
	filmGrainIntensity = 0.010;
	
	UNUSED_PARAMS
  };

  // civil
  class C_Civil1
  {
	height = 0;
	overcast = 0.35;
	sunAngle = -6;
	sunOrMoon = 1.0;
	diffuse[] = {0.346, 0.1803, 0.0836};
	diffuseCloud[] = {0.346, 0.1803, 0.0836};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.128,0.2528,0.384};
	ambientCloud[] = {0.128,0.2528,0.384};
	groundReflection[] = {0.032,0.0572,0.096};
	groundReflectionCloud[] = {0.032,0.0572,0.096};
	sky[] = {0.3,0.225,0.327};
	skyAroundSun[] = {0.939, 0.5411, 0.2509};
	desiredLuminanceCoef = 0.10;
	desiredLuminanceCoefCloud = 0.10;
	EVMin = -2.0;
	EVMax = 0.5;
	filmGrainIntensity = 0.010;
	
	UNUSED_PARAMS
  };
  class C_Civil2
  {
	height = 0;
	overcast = 0.35;
	sunAngle = -4;
	sunOrMoon = 1.0;
	diffuse[] = {{0.446, 0.1803, 0.0836}, 0.2};
	diffuseCloud[] = {{0.446, 0.1803, 0.0836}, 0.2};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {{0.128,0.2528,0.384}, 0.1};
	ambientCloud[] = {{0.128,0.2528,0.384}, 0.1};
	groundReflection[] = {0.064,0.1144,0.192};
	groundReflectionCloud[] = {0.064,0.1144,0.192};
	sky[] = {{0.6,0.549,0.745}, 0.5};
	skyAroundSun[] = {{0.939, 0.5411, 0.2509}, 1.5};
	desiredLuminanceCoef = 0.25;
	desiredLuminanceCoefCloud = 0.25;
	EVMin = -2.0;
	EVMax = 0.2;
	filmGrainIntensity = 0.010;
	
	UNUSED_PARAMS
  };
  class C_Civil3
  {
	height = 0;
	overcast = 0.35;
	sunAngle = -2;
	sunOrMoon = 1.0;
	diffuse[] = {1.3, 0.404, 0.294};
	diffuseCloud[] = {1.3, 0.404, 0.294};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.2,0.23,0.45};
	ambientCloud[] = {0.2,0.23,0.45};
	groundReflection[] = {0.032,0.0572,0.096};
	groundReflectionCloud[] = {0.032,0.0572,0.096};
	sky[] = {0.8,0.64,1};
	skyAroundSun[] = {1.239, 0.4411, 0.2509};
	desiredLuminanceCoef = 0.30;
	desiredLuminanceCoefCloud = 0.30;
	EVMin = -2.0;
	EVMax = 0.2;
	filmGrainIntensity = 0.005;
	
	UNUSED_PARAMS
  };

  // day
  class C_Day0
  {
	height = 0;
	overcast = 0.35;
	sunAngle = 0;
	sunOrMoon = 1.0;
	diffuse[] = {1.3, 0.404, 0.294};
	diffuseCloud[] = {1.3, 0.404, 0.294};
	bidirect[] = {0.03,0.03,0.03};
	bidirectCloud[] = {0.03,0.03,0.03};
	ambient[] = {0.2,0.23,0.45};
	ambientCloud[] = {0.2,0.23,0.45};
	groundReflection[] = {0.032,0.0572,0.096};
	groundReflectionCloud[] = {0.032,0.0572,0.096};
	sky[] = {1.2,0.64,1};
	skyAroundSun[] = {3.5,1.64,1};
	desiredLuminanceCoef = 0.40;
	desiredLuminanceCoefCloud = 0.40;
	EVMin = -0.8;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;
	
	UNUSED_PARAMS
  };
  class C_Day4
  {
	height = 0;
	overcast = 0.35;
	sunAngle = 4;
	sunOrMoon = 1;
	diffuse[] = {{1.2, 0.404, 0.294}, 7.4};
	diffuseCloud[] = {{1.2, 0.404, 0.294}, 7.4};
	bidirect[] = {0.03,0.03,0.03};
	bidirectCloud[] = {0.03,0.03,0.03};
	ambient[] = {{0.2,0.23,0.45}, 7.2};
	ambientCloud[] = {{0.2,0.23,0.45}, 7.2};
	groundReflection[] = {{0.2,0.23,0.45}, 3.4};
	groundReflectionCloud[] = {{0.2,0.23,0.45}, 3.4};
	sky[] = {{1.2,0.64,1}, 7.0}; 
	skyAroundSun[] = {{2.2, 1.24, 1}, 8.2};
	desiredLuminanceCoef = 0.45;
	desiredLuminanceCoefCloud = 0.45;
	EVMin = -0.8;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;
	
	UNUSED_PARAMS
  };
  class C_Day8
  {
	height = 0;
	overcast = 0.35;
	sunAngle = 8;
	sunOrMoon = 1;
	diffuse[] = {{1.0, 1, 1}, 10.4};
	diffuseCloud[] = {{1.0, 0.604, 0.294}, 10.4};
	bidirect[] = {0.03,0.03,0.03};
	bidirectCloud[] = {0.03,0.03,0.03};
	ambient[] = {{0.12,0.18,0.28}, 10.2};
	ambientCloud[] = {{0.12,0.18,0.28}, 10.2};
	groundReflection[] = {{0.12,0.18,0.28}, 7.4};
	groundReflectionCloud[] = {{0.12,0.18,0.28}, 7.4};
	sky[] = {{0.5, 0.64, 1}, 10.4};
	skyAroundSun[] = {{1.2, 0.674, 0.294}, 11};
	desiredLuminanceCoef = 0.45;
	desiredLuminanceCoefCloud = 0.45;
	EVMin = -0.75;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;
	
	UNUSED_PARAMS
  };
  class C_Day12
  {
	height = 0;
	overcast = 0.35;
	sunAngle = 12;
	sunOrMoon = 1;
	diffuse[] = {{1.0, 1, 1}, 11.4};
	diffuseCloud[] = {{1.0, 0.64, 0.31}, 11.4};
	bidirect[] = {0.03,0.03,0.03};
	bidirectCloud[] = {0.03,0.03,0.03};
	ambient[] = {{0.12,0.18,0.28}, 10.6};
	ambientCloud[] = {{0.12,0.18,0.28}, 10.6};
	groundReflection[] = {{0.12,0.18,0.28}, 8.1};
	groundReflectionCloud[] = {{0.12,0.18,0.28}, 8.1};
	sky[] = {{0.5, 0.64, 1}, 10.8};
	skyAroundSun[] = {{1.0, 0.874, 0.494}, 11.4};
	desiredLuminanceCoef = 0.53;
	desiredLuminanceCoefCloud = 0.53;
	EVMin = -0.75;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;

	UNUSED_PARAMS
  };
  class C_Day16
  {
	height = 0;
	overcast = 0.35;
	sunAngle = 16;
	sunOrMoon = 1;
	diffuse[] = {{1,1,1}, 11.8};
	diffuseCloud[] = {{1,0.87,0.85}, 11.8};
	bidirect[] = {0.08,0.08,0.07};
	bidirectCloud[] = {0.08,0.08,0.07};
	ambient[] = {{0.12,0.18,0.24}, 10.4};
	ambientCloud[] = {{0.12,0.18,0.24}, 10.4};
	groundReflection[] = {{0.12,0.18,0.24}, 8.1};
	groundReflectionCloud[] = {{0.12,0.18,0.24}, 8.1};
	sky[] = {{0.5, 0.64, 1}, 11.0};
	skyAroundSun[] = {{1.0, 1.0, 1.0}, 11.2};
	desiredLuminanceCoef = 0.58;
	desiredLuminanceCoefCloud = 0.58;
	EVMin = -0.7;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;
	
	UNUSED_PARAMS
  };
  class C_Day35
  {
	height = 0;
	overcast = 0.35;
	sunAngle = 35;
	sunOrMoon = 1;
	diffuse[] = {{1,1,1}, 12.8};
	diffuseCloud[] = {{1,0.87,0.85}, 12.8};
	bidirect[] = {0.08,0.08,0.07};
	bidirectCloud[] = {0.08,0.08,0.07};
	ambient[] = {{0.12,0.18,0.24}, 11.0};
	ambientCloud[] = {{0.12,0.18,0.24}, 11.0};
	groundReflection[] = {{0.12,0.18,0.24}, 8.0};
	groundReflectionCloud[] = {{0.12,0.18,0.24}, 8.0};
	sky[] = {{0.7, 0.84, 1}, 11.7};
	skyAroundSun[] = {{1.0, 1.0, 1.0}, 12.5};
	desiredLuminanceCoef = 0.61;
	desiredLuminanceCoefCloud = 0.61;
	EVMin = -0.7;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;

	UNUSED_PARAMS
  };
  class C_Day60
  {
	height = 0;
	overcast = 0.35;
	sunAngle = 60;
	sunOrMoon = 1;
	diffuse[] = {{1,1,1}, 13.8};  
	diffuseCloud[] ={{1,0.87,0.85}, 13.8};  
	bidirect[] = {0.08,0.08,0.07};
	bidirectCloud[] = {0.08,0.08,0.07};
	ambient[] = {{0.12,0.18,0.24}, 11.8};
	ambientCloud[] = {{0.12,0.18,0.24}, 11.8};
	groundReflection[] = {{0.12,0.18,0.24}, 7.8};
	groundReflectionCloud[] = {{0.12,0.18,0.24}, 7.8};
	sky[] = {{0.7, 0.84, 1}, 12.6};
	skyAroundSun[] = {{1.0, 1.0, 1.0}, 13.0};
	desiredLuminanceCoef = 0.63;
	desiredLuminanceCoefCloud = 0.63;
	EVMin = -0.7;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;
	
	UNUSED_PARAMS
  };



  // OVERCAST SET
  class O_Night
  {
	height = 0;
	overcast = 0.65;
	sunAngle = -18;
	sunOrMoon = 0.0;
	diffuse[] = {0.0, 0.0, 0.0};
	diffuseCloud[] = {0.0, 0.0, 0.0};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.012,0.012,0.017};
	ambientCloud[] = {0.012,0.012,0.017};
	groundReflection[] = {0.01, 0.01, 0.015};
	groundReflectionCloud[] = {0.01, 0.01, 0.015};
	sky[] = {0.0,0.0,0.0};
	skyAroundSun[] = {0.0,0.0,0.0};
	desiredLuminanceCoef = -0.22;
	desiredLuminanceCoefCloud = -0.22;
	EVMin = -2.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.0125;
	
	UNUSED_PARAMS
  };
  class O_Astro1
  {
	height = 0;
	overcast = 0.65;
	sunAngle = -17;
	sunOrMoon = 0.5;
	diffuse[] = {0.0, 0.0, 0.0};
	diffuseCloud[] = {0.0, 0.0, 0.0};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.036, 0.057, 0.085};
	ambientCloud[] = {0.036, 0.057, 0.085};
	groundReflection[] = {0.01, 0.01, 0.015};
	groundReflectionCloud[] = {0.01, 0.01, 0.015};
	sky[] = {0.0,0.0,0.0};
	skyAroundSun[] = {0.0,0.0,0.0};
	desiredLuminanceCoef = -0.22;
	desiredLuminanceCoefCloud = -0.22;
	EVMin = -2.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.0125;
	
	UNUSED_PARAMS
  };
  class O_Nautical1
  {
	height = 0;
	overcast = 0.65;
	sunAngle = -12;
	sunOrMoon = 1.0;
	diffuse[] = {0.036, 0.057, 0.085};
	diffuseCloud[] = {0.036, 0.057, 0.085};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.036, 0.057, 0.085};
	ambientCloud[] = {0.036, 0.057, 0.085};
	groundReflection[] = {0.01, 0.01, 0.015};
	groundReflectionCloud[] = {0.01, 0.01, 0.015};
	sky[] = {0.036, 0.056, 0.087};
	skyAroundSun[] = {0.1011, 0.1063, 0.0926};
	desiredLuminanceCoef = -0.12;
	desiredLuminanceCoefCloud = -0.12;
	EVMin = -2.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.010;

	UNUSED_PARAMS
  };
  class O_Civil1
  {
	height = 0;
	overcast = 0.65;
	sunAngle = -6;
	sunOrMoon = 1;
	diffuse[] = {0.018,0.018,0.018};
	diffuseCloud[] = {0.018,0.018,0.018};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.1,0.18,0.29};
	ambientCloud[] = {0.1,0.18,0.29};
	groundReflection[] = {0.01, 0.01, 0.015};
	groundReflectionCloud[] = {0.01, 0.01, 0.015};
	sky[] = {0.1,0.14,0.22};
	skyAroundSun[] = {0.1,0.14,0.22};
	desiredLuminanceCoef = -0.07;
	desiredLuminanceCoefCloud = -0.07;
	EVMin = -2.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.010;
	
	UNUSED_PARAMS
  };
  class O_Civil2
  {
	height = 0;
	overcast = 0.65;
	sunAngle = -2;
	sunOrMoon = 1;
	diffuse[] = {0.018,0.018,0.018};
	diffuseCloud[] = {0.018,0.018,0.018};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.145, 0.227, 0.349};
	ambientCloud[] = {0.145, 0.227, 0.349};
	groundReflection[] = {0.01, 0.01, 0.015};
	groundReflectionCloud[] = {0.01, 0.01, 0.015};
	sky[] = {0.1,0.14,0.22};
	skyAroundSun[] = {0.1,0.14,0.22};
	desiredLuminanceCoef = 0.05;
	desiredLuminanceCoefCloud = 0.05;
	EVMin = -2.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.0075;
	
	UNUSED_PARAMS
  };
  class O_Day0
  {
	height = 0;
	overcast = 0.65;
	sunAngle = 0;
	sunOrMoon = 1;
	diffuse[] = {0.27,0.27,0.27};
	diffuseCloud[] = {0.27,0.27,0.27};
	bidirect[] = {0.0, 0.0, 0.0};
	bidirectCloud[] = {0.0, 0.0, 0.0};
	ambient[] = {0.145, 0.227, 0.349};
	ambientCloud[] = {0.145, 0.227, 0.349};
	groundReflection[] = {0.02, 0.02, 0.03};
	groundReflectionCloud[] = {0.02, 0.02, 0.03};
	sky[] = {0.1,0.14,0.16};
	skyAroundSun[] = {0.1,0.14,0.16};
	desiredLuminanceCoef = 0.30;
	desiredLuminanceCoefCloud = 0.30;
	EVMin = -1.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;

	UNUSED_PARAMS
  };
  class O_Day4
  {
	height = 0;
	overcast = 0.65;
	sunAngle = 4;
	sunOrMoon = 1;
	diffuse[] = {{0.27,0.27,0.29}, 4.4};
	diffuseCloud[] = {{0.27,0.27,0.29}, 4.4};
	bidirect[] = {0.13,0.13,0.13};
	bidirectCloud[] = {0.13,0.13,0.13};
	ambient[] = {{0.145, 0.227, 0.349}, 5.4};
	ambientCloud[] = {{0.145, 0.227, 0.349}, 5.4};
	groundReflection[] = {{0.145, 0.227, 0.349}, 2.4};
	groundReflectionCloud[] = {{0.145, 0.227, 0.349}, 2.4};
	sky[] = {{1.0, 1.0, 1.0}, 4.415};
	skyAroundSun[] = {{1.0, 1.0, 1.0}, 4.799};
	desiredLuminanceCoef = 0.32;
	desiredLuminanceCoefCloud = 0.32;
	EVMin = -1.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;
	
	UNUSED_PARAMS
  };
  class O_Day8
  {
	height = 0;
	overcast = 0.65;
	sunAngle = 8;
	sunOrMoon = 1;
	diffuse[] = {{0.27,0.27,0.30}, 7.4};
	diffuseCloud[] = {{0.27,0.27,0.30}, 7.4};
	bidirect[] = {0.13,0.13,0.13};
	bidirectCloud[] = {0.13,0.13,0.13};
	ambient[] = {{0.145, 0.227, 0.349}, 8.1};
	ambientCloud[] = {{0.145, 0.227, 0.349}, 8.1};
	groundReflection[] = {{0.145, 0.227, 0.349}, 6.1};
	groundReflectionCloud[] = {{0.145, 0.227, 0.349}, 6.1};
	sky[] = {{1.0, 1.0, 1.0},8.0};
	skyAroundSun[] = {{1.0, 1.0, 1.0},8.8};
	desiredLuminanceCoef = 0.35;
	desiredLuminanceCoefCloud = 0.35;
	EVMin = -1.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;
	
	UNUSED_PARAMS
  };
  class O_Day12
  {
	height = 0;
	overcast = 0.65;
	sunAngle = 12;
	sunOrMoon = 1;
	diffuse[] = {{0.27,0.27,0.30},8.2};
	diffuseCloud[] = {{0.27,0.27,0.30},8.2};
	bidirect[] = {0.13,0.13,0.13};
	bidirectCloud[] = {0.13,0.13,0.13};
	ambient[] = {{0.145, 0.227, 0.349}, 10.1};
	ambientCloud[] = {{0.145, 0.227, 0.349}, 10.1};
	groundReflection[] = {{0.145, 0.227, 0.349}, 7.1};
	groundReflectionCloud[] = {{0.145, 0.227, 0.349}, 7.1};
	sky[] = {{1.0,1.0,1.0},9.0};
	skyAroundSun[] = {{1.0,1.0,1.0},9.8};
	desiredLuminanceCoef = 0.37;
	desiredLuminanceCoefCloud = 0.37;
	EVMin = -1.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;
	
	UNUSED_PARAMS
  };
  class O_Day35
  {
	height = 0;
	overcast = 0.65;
	sunAngle = 35;
	sunOrMoon = 1;
	diffuse[] = {{0.27,0.27,0.30}, 9.4};
	diffuseCloud[] = {{0.27,0.27,0.30}, 9.4};
	bidirect[] = {0.23,0.23,0.23};
	bidirectCloud[] = {0.23,0.23,0.23};
	ambient[] = {{0.15, 0.20, 0.25}, 11.1};
	ambientCloud[] = {{0.15, 0.20, 0.25}, 11.1};
	groundReflection[] = {{0.15, 0.20, 0.25}, 8.1};
	groundReflectionCloud[] = {{0.15, 0.20, 0.25}, 8.1};
	sky[] = {{1,1,1}, 11};
	skyAroundSun[] = {{1,1,1}, 11.8};
	desiredLuminanceCoef = 0.40;
	desiredLuminanceCoefCloud = 0.40;
	EVMin = -1.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;
	
	UNUSED_PARAMS
  };
  class O_Day60
  {
	height = 0;
	overcast = 0.65;
	sunAngle = 60;
	sunOrMoon = 1;
	diffuse[] = {{0.27,0.27,0.30}, 10.4};
	diffuseCloud[] = {{0.27,0.27,0.30}, 10.4};
	bidirect[] = {0.33,0.33,0.33};
	bidirectCloud[] = {0.33,0.33,0.33};
	ambient[] = {{0.20, 0.24, 0.29}, 12.4};
	ambientCloud[] = {{0.20, 0.24, 0.29}, 12.4};
	groundReflection[] = {{0.20, 0.24, 0.29}, 8.4};
	groundReflectionCloud[] = {{0.20, 0.24, 0.29}, 8.4};
	sky[] = {{1,1,1}, 12};
	skyAroundSun[] = {{1,1,1}, 12.8};
	desiredLuminanceCoef = 0.45;
	desiredLuminanceCoefCloud = 0.45;
	EVMin = -1.0;
	EVMax = 0.0;
	filmGrainIntensity = 0.0;

	UNUSED_PARAMS
  };
};