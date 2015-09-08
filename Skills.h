#ifndef SKILLS_H
#define SKILLS_H

//Controlling class for all skills, each Unit should use this to manage their skills.

#include "Class.h"
#include "Skill.h"
#include "Ability.h"
#include "StatBonus.h"

class Skills{
public:
	Skills(Ability*);
	~Skills();
	Skill* acrobatics;
	Skill* appraise;
	Skill* bluff;
	Skill* climb;
	Skill* craft;
	Skill* diplomacy;
	Skill* disableDevice;
	Skill* disguise;
	Skill* escapeArtist;
	Skill* fly;
	Skill* handleAnimal;
	Skill* heal;
	Skill* intimidate;
	Skill* knowArcana;
	Skill* knowDungeoneering;
	Skill* knowEngineering;
	Skill* knowGeography;
	Skill* knowHistory;
	Skill* knowLocal;
	Skill* knowNature;
	Skill* knowNobility;
	Skill* knowPlanes;
	Skill* knowReligion;
	Skill* linguistics;
	Skill* perception;
	Skill* perform;
	Skill* profession;
	Skill* ride;
	Skill* senseMotive;
	Skill* sleightOfHand;
	Skill* spellcraft;
	Skill* stealth;
	Skill* survival;
	Skill* swim;
	Skill* useMagicDevice;
	void setClassSkills(ClassName);
	void setSkillBonus(StatBonus*);
	friend std::ostream& operator<<(std::ostream& os, const Skills& s);
	friend std::istream& operator>>(std::istream& is, Skills& s);
private:
	Ability* ability;
};

#endif