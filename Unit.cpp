#include "Unit.h"
#include <iostream>

Unit::Unit()
	: Prop(){
	ability = NULL;
	skills = NULL;
	hitDice = 1;
}

Unit::Unit(Ability* ab)
	: Unit(){

	ability = ab;
	skills = new Skills(ability);
	hitDice = 1;
}

Unit::~Unit(){
	//delete ability;		//TODO: is a problem cause ability might be zero??
	//delete skills;
}

int Unit::getHitDice(){
	return hitDice;
}

void Unit::updateStats(){
	for (int i = 0; i < BONUS_EFFECT_PROP; i++){
		for (int j = 0; j <= BONUS_TYPE_LENGTH; j++){
			int size = activeEffects[i][j].size();
			if (size >= 1){		//do others stack as well?	/dodge is in parent class
				int pos;
				int circles = 1;
				if (size == 1) pos = 0;
				else if (j == typeless) {
					pos = size - 1; 	 //do all
					circles = pos;
				}
				else {		//(size > 1)
					pos = 0;
					for (int k = 1; k < size; ++k){
						if (activeEffects[i][j][k]->bonusValue > activeEffects[i][j][pos]->bonusValue) pos = k;
					}
				}
				for (; circles > 0, pos > 0; circles--){		//pos>0 is hopefully redundant
					StatBonus* cur = activeEffects[i][j][pos--];
					switch (i){
					case unspecified: break;
					case strBonus:
					case dexBonus:
					case conBonus:
					case intBonus:
					case wisBonus:
					case chaBonus:		ability->changeAbility(cur); break;
					case attackBonus:	attackBoni += cur->bonusValue; break;
					case skillBonus:	skills->setSkillBonus(cur); break;
					case damageBonus:	damageBoni += cur->bonusValue; break;
					case speedBonus:	speed += cur->bonusValue; break;
					case acBonus:			//below is only here for convenience, won't be called
					case fortBonus:
					case willBonus:
					case refBonus:			//beacause its done in parent class
					default: break;
					}
				}
			}
		}
	}
}