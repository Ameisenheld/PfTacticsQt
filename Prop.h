#ifndef PROP_H
#define PROP_H

//Base Class-Template for every object that can be placed on the map
//for combat ready objects see: Unit.
//For normal (and immovable) objects see: Furniture.
//Pro tip: animated objects are creatures: Unit -> Monster

#include <string>
#include "StatBonus.h"
#include <vector>

class Prop{
public:
	Prop();
	short AC;
	short touchAC;
	short flatAC;
	unsigned short spellResistance;
	short fortitude;
	short reflex;
	short will;
	unsigned int HP;
	unsigned int damage;
	unsigned int nonlethalDamage;
	unsigned short DR;
	std::string name;
	unsigned long ID;
	std::vector<std::vector<std::vector<StatBonus*>>> activeEffects;		//BonusEffects | BonusTypes | BonusValue
	//std::vector<StatBonus> activeEffects;
	void updateStats();
	void tickDownEffects();
	void removeID(long*);
private:
	//Prop();		//Don't create this... PLEASE
};

#endif