#include "Dice.h"

Dice::Dice(int diceNum, int diceValue, int bonus)
	:n(diceNum), v(diceValue), b(bonus){
	typedef std::chrono::high_resolution_clock clock;
	clock::duration d = clock::now().time_since_epoch();	//TODO: does this work properly?
	random.seed(d.count());
}

int Dice::roll(){
	int erg;
	for (unsigned int i = 0; i < n; ++i){
		if(random.max()>2*n) erg += random()%n;
		else erg += n / 2;	//TODO: get more info on random Numbers and fix this
	}
	return erg + b;
}