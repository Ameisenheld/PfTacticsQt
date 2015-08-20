#ifndef RACEPROVIDER_H
#define RACEPROVIDER_H

#include "Race.h"
#include <vector>

class RaceProvider{
public:
	RaceProvider();
	Race* getRace(long id);
private:
	std::vector<Race*> existingRaces;
};

#endif //RACEPROVIDER_H