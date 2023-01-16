modded class PluginRecipesManagerBase extends PluginBase
{	
	void RegisterRecipies()
	{
		super.RegisterRecipies();
		
		RegisterRecipe(new CombineFilters);
	}
};