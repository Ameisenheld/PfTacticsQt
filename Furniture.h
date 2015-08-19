#ifndef FURNITURE_H
#define FURNITURE_H

//Base Template for every Prop on the map, thats just there to sit around
//This means: decoration, for the talking mirror go to Unit.

#include "Prop.h"

class Furniture : public Prop{
public:
	int xDimension;		//in contrast to other sources, these are in feet
	int yDimension;
	int height;
	Furniture();
};

#endif