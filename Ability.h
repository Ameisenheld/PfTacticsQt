#ifndef ABILITY_H
#define ABILITY_H

#include "StatBonus.h"
#include <iostream>

enum Attribute{ STR, DEX, CON, INT, WIS, CHA };

class Ability{
public:
	Ability();
	Ability(short, short, short, short, short, short);
	~Ability();
	short* strMod;		//pointers to the abbilty score modifiers
	short* dexMod;
	short* conMod;
	short* intMod;
	short* wisMod;
	short* chaMod;
	void changeAbility(Attribute, short);	//simple way to alter the scores
	void changeAbility(StatBonus*);			//Bonus-way to alter the scores
	friend std::ostream& operator<<(std::ostream& os, const Ability& a);
	friend std::istream& operator>>(std::istream& is, Ability& a);
private:
	unsigned short strAb;	//The real abbility scores
	unsigned short dexAb;
	unsigned short conAb;
	unsigned short intAb;
	unsigned short wisAb;
	unsigned short chaAb;
	short st;			//The abbility modifiers
	short de;
	short co;
	short in;
	short wi;
	short ch;
};

#endif