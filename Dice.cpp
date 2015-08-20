#include "Dice.h"

Dice::Dice(int diceNum, int diceValue, int bonus)
	:n(diceNum), v(diceValue), b(bonus), ignore(false){
	typedef std::chrono::high_resolution_clock clock;
	clock::duration d = clock::now().time_since_epoch();	//TODO: does this work properly?
	random.seed(d.count());
}

Dice::Dice(int diceNum, int diceValue, int bonus, bool ignoreWorst)
	: Dice(diceNum, diceValue, bonus){

	ignore = ignoreWorst;
}

int Dice::roll(){
	int erg;
	int worst = v;
	int rand;
	for (unsigned int i = 0; i < n; ++i){
		rand = random() % v;
		if(random.max()>2*n) erg += rand;
		else erg += n / 2;	//TODO: get more info on random Numbers and fix this
		if (rand < worst) worst = rand;
	}
	if (ignore) return erg + b - worst;
	else return erg + b;
}