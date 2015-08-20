#ifndef STATBONUS_H
#define STATBONUS_H

enum SkillID { Acrobatics, Appraise, Bluff, Climb, Craft, Diplomacy, DisableDevice, Disguise, EscapeArtist, Fly, HandleAnimal, Heal, Intimidate, KnowArcana, KnowDungeoneering, KnowEngineering, KnowGeography, KnowHistory, KnowLocal, KnowNature, KnowNobility, KnowPlanes, KnowReligion, Linguistics, Perception, Perform, Profession, Ride, SenseMotive, SleightOfHand, Spellcraft, Stealth, Survival, Swim, UseMagicDevice };
enum BonusEffect { unspecified, strBonus, conBonus, dexBonus, intBonus, wisBonus, chaBonus, attackBonus, skillBonus, damageBonus, speedBonus, acBonus, fortBonus, willBonus, refBonus, BONUS_EFFECT_LENGTH = refBonus, BONUS_EFFECT_PROP = acBonus };
enum BonusType { typeless, alchemical, armor, circumstance, competence, deflection, dodge, enhancement, inherent, insight, luck, morale, naturalArmor, profane, racial, resistance, sacred, shield, size, trait, BONUS_TYPE_LENGTH = trait };
enum actionTime { freeAction, immediateAction, swiftAction, move, standardAction, fullRoundAction, twoRoundAction, ACTIONTIME_TYPE_LENGTH = twoRoundAction };
enum SavingThrow { fortSave, willSave, refSave };
//stacking types: circumstance (if other source), 


class StatBonus{
public:
	StatBonus(unsigned long*);
	StatBonus(unsigned long*, BonusEffect, BonusType, short, long);
	BonusEffect affectedStat;
	BonusType bonusType;
	short bonusValue;
	unsigned long* sourceID;
	long duration;		//-1 is eternal | -2 is bound to sourceID | >0 is duration | 0 is toDelete
	SkillID skillID;	//can be undefined
};

#endif