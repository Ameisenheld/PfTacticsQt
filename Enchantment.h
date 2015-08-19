#ifndef ENCHANTMENT_H
#define ENCHANTMENT_H

//Every Weapon can have any number of enchantments (up to the +10 limit)
//each enchantment costs +x slots.
//enchantments may add endless possibilities... 

#include <string>
#include "StatBonus.h"

class Enchantment{
public:
	std::string name;
	std::string description;
	short lvlCost;
	StatBonus bonus;
	bool intelligent;	//This is a problem; Will need an extra class
	bool isWeapon;		//Weapon Enchantment
	bool isArmor;		//Armor Enchantment, if its neither we have a problem?
};

#endif	//ENCHANTMENT_H