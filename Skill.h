#ifndef SKILL_H
#define SKILL_H

//Basic Template for all Skills in the game
//There is a fixed and small list of Skills
//Every Unit can train any skill wanted
//Some Units may have some restricted skills

#include <string>

class Skill{
public:
	Skill(short*, bool);
	short miscMod;
	bool classSkill;
	short rank;
	std::string additionalType;
	short getValue();
private:
	bool trainedOnly;
	short* abbilityMod;

};

#endif