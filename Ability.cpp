#include "Ability.h"

Ability::Ability(short st, short de, short co, short in, short wi, short ch)
	: strAb(st), dexAb(de), conAb(co), intAb(in), wisAb(wi), chaAb(ch) {

	this->st = strAb / 2 - 5;
	this->de = dexAb / 2 - 5;
	this->co = conAb / 2 - 5;
	this->in = intAb / 2 - 5;
	this->wi = wisAb / 2 - 5;
	this->ch = chaAb / 2 - 5;

	strMod = &this->st;
	dexMod = &this->de;
	conMod = &this->co;
	intMod = &this->in;
	wisMod = &this->wi;
	chaMod = &this->ch;
}

void Ability::changeAbility(Attribute atr, short mod){
	switch (atr){
	case STR:
		strAb += mod;	st = strAb / 2 - 5; break;
	case DEX:
		dexAb += mod;	de = dexAb / 2 - 5; break;
	case CON:
		conAb += mod;	co = conAb / 2 - 5; break;
	case INT:
		intAb += mod;	in = intAb / 2 - 5; break;
	case WIS:
		wisAb += mod;	wi = wisAb / 2 - 5; break;
	case CHA:
		chaAb += mod;	ch = chaAb / 2 - 5; break;
	}
}

void Ability::changeAbility(StatBonus* bonus){
	switch (bonus->affectedStat){
	case strBonus:
		strAb += bonus->bonusValue;	st = strAb / 2 - 5; break;
	case dexBonus:
		dexAb += bonus->bonusValue;	de = dexAb / 2 - 5; break;
	case conBonus:
		conAb += bonus->bonusValue;	co = conAb / 2 - 5; break;
	case intBonus:
		intAb += bonus->bonusValue;	in = intAb / 2 - 5; break;
	case wisBonus:
		wisAb += bonus->bonusValue;	wi = wisAb / 2 - 5; break;
	case chaBonus:
		chaAb += bonus->bonusValue;	ch = chaAb / 2 - 5; break;
	default: break;
	}
}

Ability::~Ability(){
	delete strMod;
	delete conMod;
	delete dexMod;
	delete intMod;
	delete wisMod;
	delete chaMod;
}