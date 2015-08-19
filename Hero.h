#ifndef HERO_H
#define HERO_H

//Base Template for player characters/heros
//TODO: monsters and class levels?

#include "Unit.h"
#include "Class.h"

class Hero : public Unit{
public:
	Hero();
	Hero(Ability*);
	bool playerControlled;
	std::vector<Class> characterClasses;	//a character may have any number of classLevels
	void updateStats();
};


#endif