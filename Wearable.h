#ifndef WEARABLE_H
#define WEARABLE_H

#include <string>
#include "StatBonus.h"

class Wearable{
public:
	bool equiped;
	std::string name;
	std::string description;
	std::vector<StatBonus> boni;
	long ID;
};

#endif