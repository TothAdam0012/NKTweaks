modded class LongrangeOptic
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		// Can't put it on SKS (it has the same 'weaponOpticsMosin' slot)
		//
		// substring == "string" is basically the same as String.startsWith() which enforce doesnt have for some reason
		// also for some reason Substring has a startIndex and Length parameter instead of startIndex(inc) and endIndex(exc)
		// wouldn't have to check for string length bc Substring only returns until last char if string is smaller than the wanted substring
		// BUT enforce is retarded and keeps spamming "Wrong parameter value" even tho it works
		if(parent.GetType().Length() > 2 && parent.GetType().Substring(0, 3) == "SKS") return false;
		return super.CanPutAsAttachment(parent);
	}
}