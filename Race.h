#ifndef RACE_H
#define RACE_H

#include "Ability.h"
#include <string>

class Race{
public:
	Race(std::string);
	Race(std::string, short, short, short, short, short, short);
	short strMod, dexMod, conMod, intMod, wisMod, chaMod;
	std::string name;
};

#endif //RACE_H