class CfgPatches
{
	class Maxwell_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"DZ_Data"};
	};
};
class CfgSoundShaders
{
	class CatLoopMaxwell_SoundShader
	{
		samples[] = {{"NK\Tweaks\item_maxwell_cat\sounds\catloop",1}};
		volume = 1.0;
		range = 20;
	};
};
class CfgSoundSets
{
	class CatLoopMaxwell_SoundSet
	{
		soundShaders[] = {"CatLoopMaxwell_SoundShader"};
		sound3DProcessingType = "smallItem3DProcessingType";
		volumeCurve = "LinearCurve";
		volumeFactor = 0.1;
		spatial = 1;
		loop = 1;
	};
};
