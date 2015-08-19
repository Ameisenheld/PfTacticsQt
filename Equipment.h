#ifndef EQUIPMENT_H
#define EQUIPMENT_H

//Base Template for every equipment
//For each Body slot one equipment may be worn (For simplicity 'held in hand' is a slot too)

//TODO: Extra header for armor?

#include "Wearable.h"

enum BodySlot { Slotless, Belt, Body, Chest, Eyes, Feet, Hand, Head, Headband, Neck, Shoulder, Wrist, rightHold, leftHold };

class Equipment : Wearable{
public:
	BodySlot slot;
};

#endif