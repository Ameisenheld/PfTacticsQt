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
	~Skill();
	short miscMod;
	bool classSkill;
	short rank;
	std::string additionalType;
	short getValue();
	friend std::ostream& operator<<(std::ostream& os, const Skill& s);
	friend std::istream& operator>>(std::istream& is, Skill& s);
private:
	bool trainedOnly;
	short* abbilityMod;

};

#endif