#ifndef SPELL_H
#define SPELL_H

#include "StatBonus.h"
#include <vector>
#include <string>
#include "MaterialComponent.h"
#include "Area.h"
#include "Dice.h"

enum Component{ V, S, M, F, DF, SPECMAT };
enum SavingThrowType{ negates, partial, half, none, disbelief, harmless };

class Spell{
public:
	Spell(unsigned int);
	Spell(unsigned int, std::string);
	Spell(unsigned int, std::string, std::vector<StatBonus>, std::string, std::vector<std::string>, actionTime, std::vector<Component>, MaterialComponent, long, long, Area, long, bool, SavingThrowType, SavingThrow, bool, std::string, Dice);
	std::string name;
	std::vector<StatBonus> boni;
	unsigned long spellID;
	std::string school;
	std::vector<std::string> subSchools;
	actionTime castingTime;
	std::vector<Component> components;
	MaterialComponent materialComponent;
	long range;
	long rangePerLevel;
	Area area;
	long duration;			//-3 is eternal, -2 is concentration, -1 is discharge, 0 is instantaneous, x is roundDuration
	bool dismissible;
	SavingThrowType save;
	SavingThrow savingThrow;
	bool spellResistance;
	std::string description;
	Dice* getDamage();
	void newDice(int, int, int);
private:
	Dice damage;
};

#endif