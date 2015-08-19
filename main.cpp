#include "mainwindow.h"
#include <QApplication>
#include "Map.h"
#include <iostream>
#include "Hero.h"

long idCounter;

int main(int argc, char *argv[]){

	//first: check for imput arguments	
	for (int i = 0; i < argc; i++) {
		std::cout << "arg" << i << ": " << argv[i] << std::endl;
	}
	idCounter = 0;	//global Counter for ALL objects
	Map map(10, 10);
	Hero* fighter = new Hero(new Ability(18, 12, 16, 7, 11, 13));
	fighter->updateStats();

	fighter->skills->setClassSkills(Fighter);
	std::cout << "escape art: " << fighter->skills->escapeArtist->getValue() << std::endl;
	std::cout << "climb: " << fighter->skills->climb->getValue() << std::endl;
	fighter->skills->escapeArtist->rank++;
	fighter->skills->climb->rank++;
	std::cout << "escape art: " << fighter->skills->escapeArtist->getValue() << std::endl;
	std::cout << "climb: " << fighter->skills->climb->getValue() << std::endl;

	map.addCreature(1, 1, fighter);
	map.addCreature(2, 1, fighter);
	map.printMap();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
	//getchar();
}
