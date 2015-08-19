#ifndef SPELLCASTERCLASS_H
#define SPELLCASTERCLASS_H

#include "Class.h"
#include "Spellbook.h"
#include <vector>

class SpellcasterClass : public Class{
public:
	std::vector<std::vector<Spell>> SpellsKnown;	//A list for every SpellLevel
	Spellbook SpellBook;
	virtual bool isSpontaneous();
};

#endif