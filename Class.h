#ifndef CLASS_H
#define CLASS_H

// Base Template for all character classes
// TODO: monsters may have character classes too
#include <iostream>

enum ClassName{ Barbarian, Bard, Cleric, Druid, Fighter, Monk, Paladin, Ranger, Rogue, Sorcerer, Wizard };

class Class{
public:
	Class();
	Class(short,ClassName);
	~Class();
	short lvl;
	virtual short skillRanks();
	virtual short rollLife();
	virtual short babBonus();
	virtual short fortBonus();
	virtual short refBonus();
	virtual short willBonus();
	ClassName name;
	friend std::ostream& operator<<(std::ostream& os, const Class& c);
	friend std::istream& operator>>(std::istream& is, Class& c);
	//class skills are set in Skills class: setClassSkills() Method
	//TODO: include class specifig abilities
	//TODO: add weapon and armor proficiency
private:
};

#endif