#pragma once
#ifndef MONEXAMINE_H
#define MONEXAMINE_H

class monster;

namespace monexamine
{
/*
*Manages the milking and milking cooldown of monsters.
*Milked item uses starting_ammo, where ammo type is the milked item
*and amount the times per day you can milk the monster.
*/
void milk_source( monster &source_mon );

/*
*Manages the shearing and shearing cooldown of monsters.
*Sheared item uses starting_ammo, where ammo type is the sheared item
*and amount the times per season you can shear the monster.
*/
void shear_source(monster &source_mon);
}
#endif
