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
	characterClasses.push_back(new Class(1,name));
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