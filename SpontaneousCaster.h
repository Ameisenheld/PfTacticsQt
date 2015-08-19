#ifndef SPONTANEOUSCASTER_H
#define SPONTANEOUSCASTER_H

#include "SpellcasterClass.h"

class SpontaneousCaster : public SpellcasterClass{
public:
	virtual bool isSpontaneous(){ return true; }
};

#endif