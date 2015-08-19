#ifndef DICE_H
#define DICE_H

//Every object that forces dice rolls should use this and roll the dice via the 'roll()' method
//Some entities may need more than one Dice object

#include <random>
#include <chrono>

class Dice{
public:
	Dice(int, int, int);
	int roll();
private:
	unsigned int n, v;
	int b;
	std::mt19937 random;
};

#endif