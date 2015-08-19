#ifndef GRAPHICVIEW_H
#define GRAPHICVIEW_H

#include <iostream>

class GraphicView{
public:
	char design;
	GraphicView(char);
	friend std::ostream& operator<<(std::ostream& os, const GraphicView& view){
		return os << view.design;
	}
	//TODO: implement real design
};



#endif