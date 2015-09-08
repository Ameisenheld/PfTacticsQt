#ifndef FEAT_H
#define FEAT_H

//Base Template for Feats
//Every Unit can have any Number of Feats

#include <string>

class Feat{
public :
	Feat();
	~Feat();
	bool combatFeat;
	std::string name;
	std::string description;
	unsigned long ID;
	//TODO: PROBLEM prerequisites
	friend std::ostream& operator<<(std::ostream& os, const Feat& f);
	friend std::istream& operator>>(std::istream& is, Feat& f);
private:
};

#endif