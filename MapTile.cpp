#include "MapTile.h"

MapTile::MapTile(){
	view = new GraphicView(' ');
}

MapTile::MapTile(GraphicView* gView)
	: MapTile(){
	view = gView;
}

MapTile::~MapTile(){
	delete prop;
	delete view;
}