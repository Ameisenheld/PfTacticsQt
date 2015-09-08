#include "Feat.h"

Feat::Feat(){

}

Feat::~Feat(){

}

std::ostream& operator<<(std::ostream& os, const Feat& f){
	os << f.combatFeat << '\n';
	os << f.description << '\n';
	os << f.ID << '\n';
	os << f.name << '\n';
	return os;
}

std::istream& operator>>(std::istream& is, Feat& f){
	is >> f.combatFeat >> f.description >> f.ID >> f.name;
	//TODO: make this a read-ID only and load the feat from a feat database?
	return is;
}