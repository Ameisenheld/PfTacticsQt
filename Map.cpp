#include "Map.h"
#include <cmath>
#include <iostream>

Map::Map(int xDim, int yDim)
	: map(xDim, std::vector<MapTile*>(yDim)){
	for (auto it = map.begin(); it != map.end(); ++it){
		for (auto it2 = it->begin(); it2 != it->end(); it2++){
			*it2 = new MapTile();
		}
	}
}

Map::Map(std::vector<std::vector<char>> design){
	if (design.empty()) return;
	Map(design.size(), design[0].size());

	for (unsigned int i = 0; i < design.size(); ++i){
		for (unsigned int j = 0; j < design[i].size(); ++i){
			map[i][j]->view = new GraphicView(design[i][j]);
		}
	}

}

void Map::addCreature(int xPos, int yPos, Prop* creature){
	if (!map.empty() && xPos < map.size() && yPos < map[0].size()){
		if (map[xPos][yPos] == NULL) map[xPos][yPos] = new MapTile();
		map[xPos][yPos]->prop = creature;
	}
}

void Map::printMap(){
	for (auto it = map.begin(); it != map.end(); ++it){
		for (auto it2 = it->begin(); it2 != it->end(); it2++){
			if ((*it2)->prop == NULL) std::cout << *((*it2)->view) << " ";
			else std::cout << "c ";
		}
		std::cout << std::endl;
	}
}

Map::~Map(){
	//TODO: delete all mapTiles
}

int Map::distance(int xPos, int yPos, int xDest, int yDest){
	int x = abs(xPos - xDest);
	int y = abs(yPos - yDest);
	if (x <= y){
		return x * 3 / 2 + y - x;
	}
	else {
		return y * 3 / 2 + x - y;
	}
}