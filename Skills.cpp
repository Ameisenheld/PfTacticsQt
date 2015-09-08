#include "Skills.h"
#include <iostream>

Skills::Skills(Ability* ability){
	acrobatics = new Skill(ability->dexMod, false);
	appraise = new Skill(ability->intMod, false);
	bluff = new Skill(ability->chaMod, false);
	climb = new Skill(ability->strMod, false);
	craft = new Skill(ability->intMod, false);
	diplomacy = new Skill(ability->chaMod, false);
	disableDevice = new Skill(ability->dexMod, true);
	disguise = new Skill(ability->chaMod, false);
	escapeArtist = new Skill(ability->dexMod, false);
	fly = new Skill(ability->dexMod, false);
	handleAnimal = new Skill(ability->chaMod, true);
	heal = new Skill(ability->wisMod, false);
	intimidate = new Skill(ability->chaMod, false);
	knowArcana = new Skill(ability->intMod, true);
	knowDungeoneering = new Skill(ability->intMod, true);
	knowEngineering = new Skill(ability->intMod, true);
	knowGeography = new Skill(ability->intMod, true);
	knowHistory = new Skill(ability->intMod, true);
	knowLocal = new Skill(ability->intMod, true);
	knowNature = new Skill(ability->intMod, true);
	knowNobility = new Skill(ability->intMod, true);
	knowPlanes = new Skill(ability->intMod, true);
	knowReligion = new Skill(ability->intMod, true);
	linguistics = new Skill(ability->intMod, true);
	perception = new Skill(ability->wisMod, false);
	perform = new Skill(ability->chaMod, false);
	profession = new Skill(ability->wisMod, true);
	ride = new Skill(ability->dexMod, false);
	senseMotive = new Skill(ability->wisMod, false);
	sleightOfHand = new Skill(ability->dexMod, true);
	spellcraft = new Skill(ability->intMod, true);
	stealth = new Skill(ability->dexMod, false);
	survival = new Skill(ability->wisMod, false);
	swim = new Skill(ability->strMod, false);
	useMagicDevice = new Skill(ability->chaMod, true);
	this->ability = ability;
}

Skills::~Skills(){
	delete acrobatics;
	delete appraise;
	delete bluff;
	delete climb;
	delete craft;
	delete diplomacy;
	delete disableDevice;
	delete disguise;
	delete escapeArtist;
	delete fly;
	delete handleAnimal;
	delete heal;
	delete intimidate;
	delete knowArcana;
	delete knowDungeoneering;
	delete knowEngineering;
	delete knowGeography;
	delete knowHistory;
	delete knowLocal;
	delete knowNature;
	delete knowNobility;
	delete knowPlanes;
	delete knowReligion;
	delete linguistics;
	delete perception;
	delete perform;
	delete profession;
	delete ride;
	delete senseMotive;
	delete sleightOfHand;
	delete spellcraft;
	delete stealth;
	delete survival;
	delete swim;
	delete useMagicDevice;
	//dont delete ability scores
}

void Skills::setSkillBonus(StatBonus* bonus){
	switch (bonus->skillID){
	case Acrobatics:		acrobatics->miscMod += bonus->bonusValue; break;
	case Appraise:			appraise->miscMod += bonus->bonusValue; break;
	case Bluff:				bluff->miscMod += bonus->bonusValue; break;
	case Climb:				climb->miscMod += bonus->bonusValue; break;
	case Craft:				craft->miscMod += bonus->bonusValue; break;
	case Diplomacy:			diplomacy->miscMod += bonus->bonusValue; break;
	case DisableDevice:		disableDevice->miscMod += bonus->bonusValue; break;
	case Disguise:			disguise->miscMod += bonus->bonusValue; break;
	case EscapeArtist:		escapeArtist->miscMod += bonus->bonusValue; break;
	case Fly:				fly->miscMod += bonus->bonusValue; break;
	case HandleAnimal:		handleAnimal->miscMod += bonus->bonusValue; break;
	case Heal:				heal->miscMod += bonus->bonusValue; break;
	case Intimidate:		intimidate->miscMod += bonus->bonusValue; break;
	case KnowArcana:		knowArcana->miscMod += bonus->bonusValue; break;
	case KnowDungeoneering:	knowDungeoneering->miscMod += bonus->bonusValue; break;
	case KnowEngineering:	knowEngineering->miscMod += bonus->bonusValue; break;
	case KnowGeography:		knowGeography->miscMod += bonus->bonusValue; break;
	case KnowHistory:		knowHistory->miscMod += bonus->bonusValue; break;
	case KnowLocal:			knowLocal->miscMod += bonus->bonusValue; break;
	case KnowNature:		knowNature->miscMod += bonus->bonusValue; break;
	case KnowNobility:		knowNobility->miscMod += bonus->bonusValue; break;
	case KnowPlanes:		knowPlanes->miscMod += bonus->bonusValue; break;
	case KnowReligion:		knowReligion->miscMod += bonus->bonusValue; break;
	case Linguistics:		linguistics->miscMod += bonus->bonusValue; break;
	case Perception:		perception->miscMod += bonus->bonusValue; break;
	case Perform:			perform->miscMod += bonus->bonusValue; break;
	case Profession:		profession->miscMod += bonus->bonusValue; break;
	case Ride:				ride->miscMod += bonus->bonusValue; break;
	case SenseMotive:		senseMotive->miscMod += bonus->bonusValue; break;
	case SleightOfHand:		sleightOfHand->miscMod += bonus->bonusValue; break;
	case Spellcraft:		spellcraft->miscMod += bonus->bonusValue; break;
	case Stealth:			stealth->miscMod += bonus->bonusValue; break;
	case Survival:			survival->miscMod += bonus->bonusValue; break;
	case Swim:				swim->miscMod += bonus->bonusValue; break;
	case UseMagicDevice:	useMagicDevice->miscMod += bonus->bonusValue; break;
	default: break;
	}
}

void Skills::setClassSkills(ClassName name){
	switch (name){
	case Barbarian: acrobatics->classSkill =
		climb->classSkill =
		craft->classSkill =
		handleAnimal->classSkill =
		intimidate->classSkill =
		knowNature->classSkill =
		perception->classSkill =
		ride->classSkill =
		survival->classSkill =
		swim->classSkill = true; break;
	case Bard: acrobatics->classSkill =
		appraise->classSkill =
		bluff->classSkill =
		climb->classSkill =
		craft->classSkill =
		diplomacy->classSkill =
		disguise->classSkill =
		escapeArtist->classSkill =
		intimidate->classSkill =
		knowArcana->classSkill =
		knowDungeoneering->classSkill =
		knowEngineering->classSkill =
		knowGeography->classSkill =
		knowHistory->classSkill =
		knowLocal->classSkill =
		knowNature->classSkill =
		knowNobility->classSkill =
		knowPlanes->classSkill =
		knowReligion->classSkill =
		linguistics->classSkill =
		perception->classSkill =
		perform->classSkill =
		profession->classSkill =
		senseMotive->classSkill =
		sleightOfHand->classSkill =
		spellcraft->classSkill =
		stealth->classSkill =
		useMagicDevice->classSkill = true; break;
	case Cleric: appraise->classSkill =
		diplomacy->classSkill =
		heal->classSkill =
		knowArcana->classSkill =
		knowHistory->classSkill =
		knowNobility->classSkill =
		knowPlanes->classSkill =
		knowReligion->classSkill =
		linguistics->classSkill =
		profession->classSkill =
		senseMotive->classSkill =
		spellcraft->classSkill = true; break;
	case Druid: climb->classSkill =
		craft->classSkill =
		fly->classSkill =
		handleAnimal->classSkill =
		heal->classSkill =
		knowGeography->classSkill =
		knowNature->classSkill =
		perception->classSkill =
		profession->classSkill =
		ride->classSkill =
		spellcraft->classSkill =
		survival->classSkill =
		swim->classSkill = true; break;
	case Fighter: climb->classSkill =
		craft->classSkill =
		handleAnimal->classSkill =
		intimidate->classSkill =
		knowDungeoneering->classSkill =
		knowEngineering->classSkill =
		profession->classSkill =
		ride->classSkill =
		survival->classSkill =
		swim->classSkill = true; break;
	case Monk: acrobatics->classSkill =
		climb->classSkill =
		craft->classSkill =
		escapeArtist->classSkill =
		intimidate->classSkill =
		knowHistory->classSkill =
		knowReligion->classSkill =
		perception->classSkill =
		perform->classSkill =
		profession->classSkill =
		ride->classSkill =
		senseMotive->classSkill =
		stealth->classSkill =
		swim->classSkill = true; break;
	case Paladin: craft->classSkill =
		diplomacy->classSkill =
		handleAnimal->classSkill =
		heal->classSkill =
		knowNobility->classSkill =
		knowReligion->classSkill =
		profession->classSkill =
		ride->classSkill =
		senseMotive->classSkill =
		spellcraft->classSkill = true; break;
	case Ranger: climb->classSkill =
		craft->classSkill =
		handleAnimal->classSkill =
		heal->classSkill =
		intimidate->classSkill =
		knowDungeoneering->classSkill =
		knowGeography->classSkill =
		knowNature->classSkill =
		perception->classSkill =
		profession->classSkill =
		ride->classSkill =
		spellcraft->classSkill =
		stealth->classSkill =
		survival->classSkill =
		swim->classSkill = true; break;
	case Rogue: acrobatics->classSkill =
		appraise->classSkill =
		bluff->classSkill =
		climb->classSkill =
		craft->classSkill =
		diplomacy->classSkill =
		disableDevice->classSkill =
		disguise->classSkill =
		escapeArtist->classSkill =
		intimidate->classSkill =
		knowDungeoneering->classSkill =
		knowLocal->classSkill =
		linguistics->classSkill =
		perception->classSkill =
		perform->classSkill =
		profession->classSkill =
		senseMotive->classSkill =
		sleightOfHand->classSkill =
		stealth->classSkill =
		swim->classSkill =
		useMagicDevice->classSkill = true; break;
	case Sorcerer: appraise->classSkill =
		bluff->classSkill =
		craft->classSkill =
		fly->classSkill =
		intimidate->classSkill =
		knowArcana->classSkill =
		profession->classSkill =
		spellcraft->classSkill =
		useMagicDevice->classSkill = true; break;
	case Wizard: appraise->classSkill =
		craft->classSkill =
		fly->classSkill =
		knowArcana->classSkill =
		knowDungeoneering->classSkill =
		knowEngineering->classSkill =
		knowGeography->classSkill =
		knowHistory->classSkill =
		knowLocal->classSkill =
		knowNature->classSkill =
		knowNobility->classSkill =
		knowPlanes->classSkill =
		knowReligion->classSkill =
		linguistics->classSkill =
		profession->classSkill =
		spellcraft->classSkill = true; break;
	}
}

std::ostream& operator<<(std::ostream& os, const Skills& s){
	os << *s.acrobatics << '\n';
	os << *s.appraise << '\n';
	os << *s.bluff << '\n';
	os << *s.climb << '\n';
	os << *s.craft << '\n';
	os << *s.diplomacy << '\n';
	os << *s.disableDevice << '\n';
	os << *s.disguise << '\n';
	os << *s.escapeArtist << '\n';
	os << *s.fly << '\n';
	os << *s.handleAnimal << '\n';
	os << *s.heal << '\n';
	os << *s.intimidate << '\n';
	os << *s.knowArcana << '\n';
	os << *s.knowDungeoneering << '\n';
	os << *s.knowEngineering << '\n';
	os << *s.knowGeography << '\n';
	os << *s.knowHistory << '\n';
	os << *s.knowLocal << '\n';
	os << *s.knowNature << '\n';
	os << *s.knowNobility << '\n';
	os << *s.knowPlanes << '\n';
	os << *s.knowReligion << '\n';
	os << *s.linguistics << '\n';
	os << *s.perception << '\n';
	os << *s.perform << '\n';
	os << *s.profession << '\n';
	os << *s.ride << '\n';
	os << *s.senseMotive << '\n';
	os << *s.sleightOfHand << '\n';
	os << *s.spellcraft << '\n';
	os << *s.stealth << '\n';
	os << *s.survival << '\n';
	os << *s.swim << '\n';
	os << *s.useMagicDevice << '\n';
	return os;
}

std::istream& operator>>(std::istream& is, Skills& s){
	Skill acrobatics(s.ability->dexMod, false),
		appraise(s.ability->intMod, false),
		bluff(s.ability->chaMod, false),
		climb(s.ability->strMod, false),
		craft(s.ability->intMod, false),
		diplomacy(s.ability->chaMod, false),
		disableDevice(s.ability->dexMod, true),
		disguise(s.ability->chaMod, false),
		escapeArtist(s.ability->dexMod, false),
		fly(s.ability->dexMod, false),
		handleAnimal(s.ability->chaMod, true),
		heal(s.ability->wisMod, false),
		intimidate(s.ability->chaMod, false),
		knowArcana(s.ability->intMod, true),
		knowDungeoneering(s.ability->intMod, true),
		knowEngineering(s.ability->intMod, true),
		knowGeography(s.ability->intMod, true),
		knowHistory(s.ability->intMod, true),
		knowLocal(s.ability->intMod, true),
		knowNature(s.ability->intMod, true),
		knowNobility(s.ability->intMod, true),
		knowPlanes(s.ability->intMod, true),
		knowReligion(s.ability->intMod, true),
		linguistics(s.ability->intMod, true),
		perception(s.ability->wisMod, false),
		perform(s.ability->chaMod, false),
		profession(s.ability->wisMod, true),
		ride(s.ability->dexMod, false),
		senseMotive(s.ability->wisMod, false),
		sleightOfHand(s.ability->dexMod, true),
		spellcraft(s.ability->intMod, true),
		stealth(s.ability->dexMod, false),
		survival(s.ability->wisMod, false),
		swim(s.ability->strMod, false),
		useMagicDevice(s.ability->chaMod, true);
	is >> acrobatics;
	is >> appraise;
	is >> bluff;
	is >> climb;
	is >> craft;
	is >> diplomacy;
	is >> disableDevice;
	is >> disguise;
	is >> escapeArtist;
	is >> fly;
	is >> handleAnimal;
	is >> heal;
	is >> intimidate;
	is >> knowArcana;
	is >> knowDungeoneering;
	is >> knowEngineering;
	is >> knowGeography;
	is >> knowHistory;
	is >> knowLocal;
	is >> knowNature;
	is >> knowNobility;
	is >> knowPlanes;
	is >> knowReligion;
	is >> linguistics;
	is >> perception;
	is >> perform;
	is >> profession;
	is >> ride;
	is >> senseMotive;
	is >> sleightOfHand;
	is >> spellcraft;
	is >> stealth;
	is >> survival;
	is >> swim;
	is >> useMagicDevice;
	s.acrobatics = &acrobatics;
	s.appraise = &appraise;
	s.bluff = &bluff;
	s.climb = &climb;
	s.craft = &craft;
	s.diplomacy = &diplomacy;
	s.disableDevice = &disableDevice;
	s.disguise = &disguise;
	s.escapeArtist = &escapeArtist;
	s.fly = &fly;
	s.handleAnimal = &handleAnimal;
	s.heal = &heal;
	s.intimidate = &intimidate;
	s.knowArcana = &knowArcana;
	s.knowDungeoneering = &knowDungeoneering;
	s.knowEngineering = &knowEngineering;
	s.knowGeography = &knowGeography;
	s.knowHistory = &knowHistory;
	s.knowLocal = &knowLocal;
	s.knowNature = &knowNature;
	s.knowNobility = &knowNobility;
	s.knowPlanes = &knowPlanes;
	s.knowReligion = &knowReligion;
	s.linguistics = &linguistics;
	s.perception = &perception;
	s.perform = &perform;
	s.profession = &profession;
	s.ride = &ride;
	s.senseMotive = &senseMotive;
	s.sleightOfHand = &sleightOfHand;
	s.spellcraft = &spellcraft;
	s.stealth = &stealth;
	s.survival = &survival;
	s.swim = &swim;
	s.useMagicDevice = &useMagicDevice;
	return is;
}