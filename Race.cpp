#include "Race.h"

Race::Race(){

}

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

Race::~Race(){
	//delete pointers
}

std::ostream& operator<<(std::ostream& os, const Race& r){
	os << r.strMod << '\n';
	os << r.dexMod << '\n';
	os << r.conMod << '\n';
	os << r.intMod << '\n';
	os << r.wisMod << '\n';
	os << r.chaMod << '\n';
	os << r.name << '\n';
	//TODO: more race stuff incoming
	return os;
}

std::istream& operator>>(std::istream& is, Race& r){
	is >> r.strMod >> r.dexMod >> r.conMod >> r.intMod >> r.wisMod >> r.chaMod >> r.name;
	return is;
}