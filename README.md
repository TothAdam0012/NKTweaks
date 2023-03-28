# Sourcecode for the NKTweaks mod

Taking stuff out, modifying or repacking this mod is **ALLOWED**.</br>
Giving credit while doing so is welcome but not necessary.</br>
</br>
# Credits

[Sumrak](https://steamcommunity.com/sharedfiles/filedetails/?id=2289461232) Food heat particles</br>
[Crocodoc](https://steamcommunity.com/sharedfiles/filedetails/?id=2621103156) GasMasksOnly</br>
[Zenarchist](https://steamcommunity.com/sharedfiles/filedetails/?id=2809135233) Stun grenade</br>
[cru 便便拼盘](https://steamcommunity.com/sharedfiles/filedetails/?id=2189808704) Toilet paper</br>
</br>
# Tweaks

## Constants

ENVIRO_DRY_INCREMENT is tripled, meaning clothes will dry 3x faster. Keep in mind that because the base value is really low this modification is barely noticable. Just instead of having 'drenched' clothing after walking around for 2 hours you'll have 'soaked' or maybe 'wet'. It is still much better to dry your clothes next to a fire but if you have 'damp' or 'wet' attire they might dry up by themselves after 30-60 min.</br>
</br>
Worn clothes give you the same insulation as pristine ones. It's annoying that some attire has best insulation when pristine but only high when in worn condition.</br>
</br>
The character now uses 2/3 of the energy/water when walking or jogging. Currently even if you're low on food it's still worth it to sprint around trying to find food (especially since the update that makes it so you loose much less health when starving) because even though you're burning more calories you also get that much further. This modification helps players preserve food/water if they don't sprint.</br>
</br>

## Active mine

Adds a landmine variant that is activated when the game places it. It's identical to the normal landmine but is a great tool if you want to create mined zones. (You can define the ground/floor tag on it in types.xml but you can probably create an 'event' that spawns the activated mines in positions that you defined).</br>
</br>

## KA-101 45 round magazine

It's just a retextured KA-74 45rnd mag, even the bullets in the model are 5.45x39 rounds. Still a nice addition for the KA-101.</br>
</br>

## Armor

Adds 'heavy' variants for platecarrier and gorka helmet. Only the platecarrier has higher ballistic protection, the helmet has double shock protection and a boost in item hp (it won't get ruined after 1 shot). Also adds a 'LTWT' variant for the platecarrier, weighing only 7,8kg.</br>
</br>

## Foodstuff

Some retextured food items.</br>
</br>

## item_ImmersiveToiletPaper

You get 3 toilet paper variants. 2 used as bandages, having max uses of 10 and 4. The third 'RGD5' version inherits from the RGD5 grenade class, thus you can unpin it and make it explode.</br>
This one uses the ImmersiveToiletPaper asset but I also fixed some stuff with it: It's no longer dark in inventory view, created a normal map, created LODs and tweaked the physics model.</br>
</br>

## item_kotla

Every cooking pot is called kotla.</br>
</br>

## Readables

Adds readable notes. It has some samples but it's up to you to create your own readable collectibles.</br>
Already has a readable paper and book sample.</br>
</br>

## Stun grenade

An MK3A2 grenade which is a retextured flashbang. It uses the flashbang class but has way higher shock damage.</br>
</br>

## moddedlight

Will probably be tweaked a lot more later. At the moment it prevents the exposure to go up/down too much, making daylight around 9.00 - 14:00 much better.</br>
</br>

## Cereal gift

If you look at the back of the cereal box it says you get a compass as a free gift and with this tweak you really do get one.</br>
</br>

## Combine filters

This one gives the ability to combine gasmask filters. Every time you do you loose 10% in the process. Used up filters get removed.</br>
In the recipe file you can easily change the wasted amount in % by modifying the first variable.</br>
</br>

## tweak_durability

Contains all the item durability changes.</br>
</br>

## Fire minheight

Changes the indoor fire lighting height limit from 5 meters to 1.8 meters.</br>
You can finally make fires in reasonably tall sheds or interiors.</br>
</br>

## Less rotten

Less amount of food spawns as rotten.</br>
Since rotten mushrooms and fruits were introduced there's a lot spawning in that state. This tweak sets the rotten chance to 10%.</br>
</br>

## tweak_lightsource

Makes some lightsources visible during daytime. You can see the light of a fireplace any time now.</br>
</br>

## Mask only

You don't need nbc clothing to enter gas zones, only a mask and filters.</br>
</br>

## Heat particles

When food reaches 100 degrees it starts to produce steaming particles until it cools down. Looks good.</br>
</br>

## NBC fold

Adds the ability to fold NBC clothing, reducing the inventory space they take up by 50-66%.</br>
It just changes their size so it looks a bit silly but it's a better solution for more effectively storing NBC stuff than adding an NBC crate. (You don't have to find a crate, just fold/unfold the stuff any time).</br>
</br>

## No worn jam

If the gun or mag is worn there is 0% chance of jamming. Maintained weapons shouldn't jam.</br>
</br>

## tweak_rag

When you bandage yourself with a rag it takes less time (just like before the patch that buffed bandages). Bandages are still 2x faster.</br>
</br>