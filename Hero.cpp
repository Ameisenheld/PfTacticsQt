#include "Hero.h"

Hero::Hero()
	: Unit(){
}

Hero::Hero(Ability* ab)
	: Unit(ab){

	//do Hero constructor... =/
}

void Hero::updateStats(){
	Unit::updateStats();
}