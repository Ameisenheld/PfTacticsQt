#include "StatBonus.h"

StatBonus::StatBonus(unsigned long* id)
	: sourceID(id){

}

StatBonus::StatBonus(unsigned long* id, BonusEffect stat, BonusType type, short value, long durat)
	: sourceID(id), affectedStat(stat), bonusType(type), bonusValue(value), duration(durat){

}