#ifndef RACE_H
#define RACE_H

#include "Ability.h"
#include <string>

class Race{
public:
	Race();
	Race(std::string);
	Race(std::string, short, short, short, short, short, short);
	~Race();
	short strMod, dexMod, conMod, intMod, wisMod, chaMod;
	std::string name;
	friend std::ostream& operator<<(std::ostream& os, const Race& r);
	friend std::istream& operator>>(std::istream& is, Race& r);
private:
	
};

#endif //RACE_H