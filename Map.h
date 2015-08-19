#ifndef MAP_H
#define MAP_H

// The Map where everything will be placed
// variable size?

#include "Hero.h"
#include "Monster.h"
#include "Furniture.h"
#include "MapTile.h"
#include "Sizes.h"
#include <vector>

class Map{
public:
	Map(int, int);		//int,int are dimensions
	Map(std::vector<std::vector<char>>);		//gets an ASCII map
	~Map();
	std::vector<std::vector<MapTile*>> map;
	bool findWay(Size);
	int distance(int, int, int, int);
	void printMap();
	void addCreature(int, int, Prop*);
};


#endif