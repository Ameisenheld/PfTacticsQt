#include "Skill.h"

Skill::Skill(short* abbility, bool onlyTrained)
	: abbilityMod(abbility), trainedOnly(onlyTrained), classSkill(false), rank(0) {

}

short Skill::getValue(){
	if (trainedOnly && rank <= 0) return 0;
	if (classSkill && rank >= 1) return rank + miscMod + *abbilityMod + 3;
	else return rank + miscMod + *abbilityMod;
}