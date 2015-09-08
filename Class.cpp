#include "Class.h"

Class::Class(){
	//TODO: intialize pointers
}

Class::Class(short classLevel, ClassName className)
	: lvl(classLevel), name(className){

}

Class::~Class(){
	//delete pointers
}

short Class::skillRanks(){
	return 0;
}
short Class::rollLife(){
	return 0;
}
short Class::babBonus(){
	return 0;
}
short Class::fortBonus(){
	return 0;
}
short Class::refBonus(){
	return 0;
}
short Class::willBonus(){
	return 0;
}

std::ostream& operator<<(std::ostream& os, const Class& c){
	os << c.lvl << '\n';
	os << c.name << '\n';
	//TODO: update as more data becomes available
	return os;
}

std::istream& operator>>(std::istream& is, Class& c){
	unsigned int cName = 0;
	is >> c.lvl >> cName;
	c.name = static_cast<ClassName>(cName);		//TODO: more failsave?
	return is;
}