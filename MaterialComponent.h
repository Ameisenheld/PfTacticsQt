#ifndef MATERIALCOMPONENT_H
#define MATERIALCOMPONENT_H

#include <string>

class MaterialComponent{

public:
	MaterialComponent();
	MaterialComponent(std::string, int);
	std::string name;
	int cost;
};

#endif