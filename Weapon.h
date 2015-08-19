#ifndef WEAPON_H
#define WEAPON_H

//Template for weapons including those needing ammunition
//for ammunition/limited uses use 'loads' variable

//TODO: can this be used for wands/staffes?

#include "Dice.h"
#include "Enchantment.h"
#include <string>
#include "Sizes.h"
#include "Wearable.h"

enum WeaponGroup { Simple, Martial, Exotic };
enum WeaponType { Unarmed, LightMelee, OneHandedMelee, TwoHandedMelee, Ranged };

class Weapon{
public:
	Dice* getDamage();
	short reach;
	bool masterWork;
	short magicLevel;
	Enchantment enchantment;
	WeaponGroup group;
	WeaponType type;
	int range;
	bool doubleWeapon;
	Size weaponSize;
	bool limited;
	int loads;
private:
	Dice damage;
};

#endif