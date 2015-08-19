#include "Prop.h"

//std::vector<std::vector<std::vector<StatBonus*>>>
Prop::Prop()
	:activeEffects(BONUS_EFFECT_LENGTH + 1, std::vector<std::vector<StatBonus*>>(BONUS_TYPE_LENGTH + 1)){

}

//enum BonusEffect { unspecified, strBonus, konBonus, dexBonus, intBonus, wisBonus, chaBonus, attackBonus, skillBonus, damageBonus, speedBonus, acBonus, fortBonus, willBonus, refBonus, };
//enum BonusType { typeless, alchemical, armor, circumstance, competence, deflection, dodge, enhancement, inherent, insight, luck, morale, naturalArmor, profane, racial, resistance, sacred, shield, size, trait };

void Prop::updateStats(){		//TODO make this work without 10 years runtime ... is this good enough?
	for (int i = BONUS_EFFECT_PROP; i <= BONUS_EFFECT_LENGTH; i++){
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
					case konBonus:
					case dexBonus:
					case intBonus:
					case wisBonus:
					case chaBonus:
					case attackBonus:
					case skillBonus:
					case damageBonus:			//above is only here for convenience, won't be called
					case speedBonus: break;		//do this in child class if needed
					case acBonus:		AC += cur->bonusValue; break;
					case fortBonus:		fortitude += cur->bonusValue; break;
					case willBonus:		will += cur->bonusValue; break;
					case refBonus:		reflex += cur->bonusValue; break;
					default: break;
					}
				}
			}
		}
	}
}

void Prop::removeID(long* ID){
	for (auto it = activeEffects.begin(); it != activeEffects.end(); ++it){
		for (auto jt = it->begin(); jt != it->end(); ++jt){
			for (auto kt = jt->begin(); kt != jt->end();){
				if ((*kt)->duration <= -2 && *((*kt)->sourceID) == *ID){
					kt = jt->erase(kt);
				}
				else ++kt;
			}
		}
	}
}

void Prop::tickDownEffects(){
	for (auto it = activeEffects.begin(); it != activeEffects.end(); ++it){
		for (auto jt = it->begin(); jt != it->end(); ++jt){
			for (auto kt = jt->begin(); kt != jt->end(); ++kt){
				if ((*kt)->duration > 0){
					(*kt)->duration--;
				}
			}
		}
	}
}