#ifndef HERO_H
#define HERO_H

//Base Template for player characters/heros
//TODO: monsters and class levels?

#include "Unit.h"
#include "Class.h"
#include "Race.h"

class Hero : public Unit{
public:
	Hero();
	Hero(Ability*);
	~Hero();
	bool playerControlled;
	void levelUp(ClassName);
	void updateStats();
	void setRace(Race*);
	int getHitDice();
	friend std::ostream& operator<<(std::ostream& os, const Hero& h);
	friend std::istream& operator>>(std::istream& is, Hero& h);
private:
	Race* race;
	std::vector<Class*> characterClasses;	//a character may have any number of classLevels
};


#endif