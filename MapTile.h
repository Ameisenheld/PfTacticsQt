#ifndef MAPTILE_H
#define MAPTILE_H

#include "Prop.h"
#include "GraphicView.h"

class MapTile{
public:
	MapTile();
	MapTile(GraphicView*);
	~MapTile();
	Prop* prop;
	GraphicView* view;
};



#endif