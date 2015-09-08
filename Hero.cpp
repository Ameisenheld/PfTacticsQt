#include "Hero.h"

Hero::Hero()
	: Unit(){
	race = NULL;
}

Hero::Hero(Ability* ab)
	: Unit(ab){

	race = NULL;
	//do Hero constructor... =/
}

Hero::~Hero(){		//TODO: make parent destructors virtual?
	for (int i = characterClasses.size() - 1; i > 0; --i){
		delete characterClasses[i];
	}
	//don't delete the feats vector they might be used on other instances
}

int Hero::getHitDice(){
	int lvl = 0;
	for (auto it = characterClasses.begin(); it != characterClasses.end(); ++it){
		lvl += (*it)->lvl;
	}
	if (lvl > 0) return lvl;
	else return 1;
}

void Hero::updateStats(){
	Unit::updateStats();
}

void Hero::levelUp(ClassName name){
	for (auto it = characterClasses.begin(); it != characterClasses.end(); ++it){
		if ((*it)->name == name){
			(*it)->lvl++;
			return;
		}
	}
	characterClasses.push_back(new Class(1, name));
}

void Hero::setRace(Race* newRace){
	if (race != NULL){
		ability->changeAbility(STR, -race->strMod);
		ability->changeAbility(DEX, -race->dexMod);
		ability->changeAbility(CON, -race->conMod);
		ability->changeAbility(INT, -race->intMod);
		ability->changeAbility(WIS, -race->wisMod);
		ability->changeAbility(CHA, -race->chaMod);
	}
	race = newRace;
	if (race != NULL){
		ability->changeAbility(STR, race->strMod);
		ability->changeAbility(DEX, race->dexMod);
		ability->changeAbility(CON, race->conMod);
		ability->changeAbility(INT, race->intMod);
		ability->changeAbility(WIS, race->wisMod);
		ability->changeAbility(CHA, race->chaMod);
	}
}

// Insertion operator
std::ostream& operator<<(std::ostream& os, const Hero& h){
	// write out individual members of h with an eof between each one
	os << *(h.ability) << '\n';	//ability class
	os << h.AC << '\n';
	//TODO: os << h.activeEffects << '\n';
	os << h.alignment << '\n';	//alignment enum
	os << h.attackBoni << '\n';
	os << h.BAB << '\n';
	os << h.characterClasses.size() << '\n';
	for (auto it = h.characterClasses.begin(); it != h.characterClasses.end(); ++it){
		os << **it << '\n';		//Class class
	}
	os << h.damage << '\n';
	os << h.damageBoni << '\n';
	os << h.DR << '\n';
	//TODO: os << h.equipment << '\n';
	os << h.feats.size() << '\n';
	for (auto it = h.feats.begin(); it != h.feats.end(); ++it){
		os << *it << '\n';		//Feat class
	}
	os << h.flatAC << '\n';
	os << h.fortitude << '\n';
	os << h.hitDice << '\n';
	os << h.HP << '\n';
	os << h.ID << '\n';
	os << h.ini << '\n';
	os << h.name << '\n';		//std::string, all ok?
	os << h.nonlethalDamage << '\n';
	os << h.playerControlled << '\n';
	os << *(h.race) << '\n';	//race class
	os << h.reflex << '\n';
	os << h.size << '\n';		//size enum
	os << *h.skills << '\n';		//skills class
	os << h.speed << '\n';
	os << h.spellResistance << '\n';
	os << h.touchAC << '\n';
	//TODO: os << h.weapons << '\n';
	os << h.will << '\n';
	//TODO: equipment, weapons and activeEffects
	return os;
}

// Extraction operator
std::istream& operator>>(std::istream& is, Hero& h){
	// read in individual members of h
	Ability ability;
	Race race;
	unsigned int hAlignment = 0;
	unsigned int hSize = 0;
	unsigned int classesSize = 0;
	unsigned int featsSize = 0;
	is >> ability
		>> h.AC
		//>> h.activeEffects
		>> hAlignment
		>> h.attackBoni
		>> h.BAB
		>> classesSize;
	for (; classesSize > 0; --classesSize){
		Class c;
		is >> c;
		h.characterClasses.push_back(&c);
	}
	is >> h.damage
		>> h.damageBoni
		>> h.DR
		//>> h.equipment
		>> featsSize;
	for (; featsSize > 0; --featsSize){
		Feat f;
		is >> f;
		h.feats.push_back(&f);
	}
	Skills skills(&ability);
	is >> h.flatAC
		>> h.fortitude
		>> h.hitDice
		>> h.HP
		>> h.ID
		>> h.ini
		>> h.name
		>> h.nonlethalDamage
		>> h.playerControlled
		>> race
		>> h.reflex
		>> hSize
		>> skills
		>> h.speed
		>> h.spellResistance
		>> h.touchAC
		//>> h.weapons
		>> h.will;
	h.ability = &ability;
	h.race = &race;
	h.skills = &skills;
	return is;
}