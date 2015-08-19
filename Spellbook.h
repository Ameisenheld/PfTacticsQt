#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include "Spell.h"
#include <vector>

class Spellbook{

public:
	Spellbook(bool);
	Spellbook(bool, std::vector<std::vector<Spell>>);
	bool isSpontaneous;
	void addSpell(short, Spell);
	void prepareSpell(short, unsigned long);
	unsigned long getSpellID(Spell);
	void castSpell(unsigned long);
	std::vector<std::vector<Spell>> book;
	std::vector<std::vector<Spell*>> prepared;
};

#endif