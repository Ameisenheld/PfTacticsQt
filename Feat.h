#ifndef FEAT_H
#define FEAT_H

//Base Template for Feats
//Every Unit can have any Number of Feats

#include <string>

class Feat{
public :
	bool combatFeat;
	std::string name;
	std::string description;
	//TODO: PROBLEM prerequisites
	
};

#endif