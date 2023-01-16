modded class Rag
{
	override bool CanBeIgnitedBy( EntityAI igniter = NULL )
	{
		if ( GetHierarchyParent() ) return false;
		return Fireplace.CanIgniteEntityAsFireplace( this );
	}
}

modded class BandageDressing
{
	override bool CanBeIgnitedBy( EntityAI igniter = NULL )
	{
		if ( GetHierarchyParent() ) return false;
		return Fireplace.CanIgniteEntityAsFireplace( this );
	}
}

modded class Paper
{
	override bool CanBeIgnitedBy( EntityAI igniter = NULL )
	{
		if ( GetHierarchyParent() ) return false;
		return Fireplace.CanIgniteEntityAsFireplace( this );
	}
}

modded class Bark_ColorBase
{
	override bool CanBeIgnitedBy( EntityAI igniter = NULL )
	{
		if ( GetHierarchyParent() ) return false;
		return Fireplace.CanIgniteEntityAsFireplace( this );
	}
}