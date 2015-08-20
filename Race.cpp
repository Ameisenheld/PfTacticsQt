#include "Race.h"

Race::Race(std::string raceName)
	: name(raceName), strMod(0), dexMod(0), conMod(0), intMod(0), wisMod(0), chaMod(0){

}

Race::Race(std::string raceName, short st, short de, short co, short in, short wi, short ch)
	: Race(raceName){
	strMod = st;
	dexMod = de;
	conMod = co;
	intMod = in;
	wisMod = wi;
	chaMod = ch;
}