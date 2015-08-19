#ifndef UNIT_H
#define UNIT_H

//Base Template for interactable objects / creatures
//Every Unit is an attackable entity and thus needs every combat capability.

#include <vector>
#include "Skills.h"
#include "Feat.h"
#include "Weapon.h"
#include "Equipment.h"
#include "Sizes.h"
#include "Prop.h"
#include "Ability.h"

enum Alignment{ LG, NG, CG, LN, NN, CN, LE, NE, CE };
// <3 is good
// >6 is evil
// %3==0 is chaotic
// %3==1 is lawfull

class Unit : public Prop{
public:
	Unit();
	Unit(Ability*);
	~Unit();
	Ability* ability;
	short BAB;
	short attackBoni;
	short damageBoni;
	short ini;
	short speed;
	Alignment alignment;
	Skills* skills;
	std::vector<Feat> feats;
	std::vector<Weapon> weapons;
	std::vector<Equipment> equipment;
	Size size;
	void updateStats();
};


#endif