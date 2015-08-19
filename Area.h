#ifndef AREA_H
#define AREA_H

enum AreaSpread{ ray, cone, cylinder, line, sphere, shapable };
enum SpreadType{ burst, emanation, spread };

class Area{
public:
	Area();
	~Area();
	int numTargets;		//0 is All, -1 is an environmental Effect without unit interaction
	AreaSpread area;
	SpreadType spreadType;
	bool onlyLiving;
};

#endif