#include "RaceProvider.h"

RaceProvider::RaceProvider(){
	//dwarf -2
	//elf -3
	//gnome -4
	//half elf -5
	//halfling -6
	//half orc -7
	//human -8
	Race* dwarf = new Race("Dwarf", 0, 0, 2, 0, 2, -2);
	Race* elf = new Race("Elf", 0, 2, -2, 2, 0, 0);
	Race* gnome = new Race("Gnome", -2, 0, 2, 0, 0, 2);
	Race* halfElf = new Race("Half-Elf");
	Race* halfling = new Race("Halfling", -2, 2, 0, 0, 0, 2);
	Race* halfOrc = new Race("Half-Orc");
	Race* human = new Race("Human");
	existingRaces.push_back(dwarf);
	existingRaces.push_back(elf);
	existingRaces.push_back(gnome);
	existingRaces.push_back(halfElf);
	existingRaces.push_back(halfling);
	existingRaces.push_back(halfOrc);
	existingRaces.push_back(human);
}

Race* RaceProvider::getRace(long id){
	if (id > 0 && id<=existingRaces.size())
		return existingRaces[id -1];
	else return NULL;
}