#include "Skill.h"

Skill::Skill(short* abbility, bool onlyTrained)
	: abbilityMod(abbility), trainedOnly(onlyTrained), classSkill(false), rank(0) {

}

Skill::~Skill(){
	//delete pointers
	//don't delete ability scores or mods.
}

short Skill::getValue(){
	if (trainedOnly && rank <= 0) return 0;
	if (classSkill && rank >= 1) return rank + miscMod + *abbilityMod + 3;
	else return rank + miscMod + *abbilityMod;
}

std::ostream& operator<<(std::ostream& os, const Skill& s){
	os << s.additionalType << '\n';
	os << s.classSkill << '\n';
	os << s.miscMod << '\n';
	os << s.rank << '\n';
	os << s.trainedOnly << '\n';
	return os;
	//The abbility mod has to be set in Skills write/read
}

std::istream& operator>>(std::istream& is, Skill& s){
	is >> s.additionalType >> s.classSkill >> s.miscMod >> s.rank >> s.trainedOnly;
	return is;
}