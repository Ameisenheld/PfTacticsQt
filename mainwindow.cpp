#include "mainwindow.h"
#include "ui_mainwindow.h"

void skillChanged(bool, int, QLabel*, QPushButton*, QLabel*, const char*, short);
void updateAbilityScore(int, QLabel*, QLabel*);

MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::MainWindow),
pointsAvail(10),
page(0)
{
	ui->setupUi(this);
	ui->rollDiceButton->hide();
	ui->creationStack->setCurrentIndex(0);
	ui->statusBar->showMessage(QString::number(page + 1));
	raceProvider = new RaceProvider();
	dice = NULL;
	character = NULL;
	connect(ui->actionNew, SIGNAL(triggered()), this, SLOT(newFile()));
	connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(save()));
	connect(ui->actionSave_as, SIGNAL(triggered()), this, SLOT(saveAs()));
	connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(open()));
	connect(ui->actionHelp, SIGNAL(triggered()), this, SLOT(help()));

}

MainWindow::~MainWindow()
{
	delete ui;
	delete raceProvider;
	delete dice;
	delete character;
}

void MainWindow::newFile(){
	ui->statusBar->showMessage("NEW FILE");
}
void MainWindow::save(){
	ui->statusBar->showMessage("SAVE");
}
void MainWindow::saveAs(){
	ui->statusBar->showMessage("SAVE AS");
}
void MainWindow::open(){
	ui->statusBar->showMessage("OPEN");
}
void MainWindow::help(){
	ui->statusBar->showMessage("HELP ME PLOX!");
}

void MainWindow::on_comboBox_activated(int index)
{
	int newPoints = 0;
	pointsSpent = 0;
	switch (index){
	case 3:     //25 point buy
		newPoints += 5;
	case 2:     //20 point buy
		newPoints += 5;
	case 1:     //15 point buy
		newPoints += 5;
	case 0:     //10 point buy
		newPoints += 10;
		ui->rollDiceButton->hide();
		ui->strBox_2->setMinimum(7);
		ui->dexBox_2->setMinimum(7);
		ui->conBox_2->setMinimum(7);
		ui->intBox_2->setMinimum(7);
		ui->wisBox_2->setMinimum(7);
		ui->chaBox_2->setMinimum(7);
		diceActive = false;
		break;
	case 4:     //3d6
		dice = new Dice(4, 6, 0, true);
		ui->rollDiceButton->show();
		ui->strBox_2->setMinimum(3);
		ui->dexBox_2->setMinimum(3);
		ui->conBox_2->setMinimum(3);
		ui->intBox_2->setMinimum(3);
		ui->wisBox_2->setMinimum(3);
		ui->chaBox_2->setMinimum(3);
		diceActive = true;
		break;
	case 5:     //d10+7
		//make some magic / replace text with 'roll dice' areas...
		dice = new Dice(1, 10, 7);
		ui->rollDiceButton->show();
		ui->strBox_2->setMinimum(8);
		ui->dexBox_2->setMinimum(8);
		ui->conBox_2->setMinimum(8);
		ui->intBox_2->setMinimum(8);
		ui->wisBox_2->setMinimum(8);
		ui->chaBox_2->setMinimum(8);
		diceActive = true;
		break;
	default:
		break;
	}
	ui->leftPointsTotal_2->setText(QString::number(pointsAvail - pointsSpent));
	if (newPoints > 0) pointsAvail = newPoints;
}

void updateAbilityScore(int value, QLabel* nextLabel, QLabel* totalLabel){
	switch (value){
	case 7: totalLabel->setText("-4"); nextLabel->setText("2"); break;
	case 8: totalLabel->setText("-2"); nextLabel->setText("1"); break;
	case 9: totalLabel->setText("-1"); nextLabel->setText("1"); break;
	case 10: totalLabel->setText("0"); nextLabel->setText("1"); break;
	case 11: totalLabel->setText("1"); nextLabel->setText("1"); break;
	case 12: totalLabel->setText("2"); nextLabel->setText("1"); break;
	case 13: totalLabel->setText("3"); nextLabel->setText("2"); break;
	case 14: totalLabel->setText("5"); nextLabel->setText("2"); break;
	case 15: totalLabel->setText("7"); nextLabel->setText("3"); break;
	case 16: totalLabel->setText("10"); nextLabel->setText("3"); break;
	case 17: totalLabel->setText("13"); nextLabel->setText("4"); break;
	case 18: totalLabel->setText("17"); nextLabel->setText("0"); break;
	default: totalLabel->setText("-4"); nextLabel->setText("0"); break;
	}
}

void MainWindow::updateAbilityPointsLeft(){
	int sum = 0;
	pointsSpent = 0;
	sum += ui->strBox_2->value();
	sum += ui->dexBox_2->value();
	sum += ui->conBox_2->value();
	sum += ui->intBox_2->value();
	sum += ui->wisBox_2->value();
	sum += ui->chaBox_2->value();
	ui->pointsTotalLabel->setText(QString::number(sum));
	pointsSpent += ui->strPointsTotal_2->text().toInt();
	pointsSpent += ui->dexPointsTotal_2->text().toInt();
	pointsSpent += ui->conPointsTotal_2->text().toInt();
	pointsSpent += ui->intPointsTotal_2->text().toInt();
	pointsSpent += ui->wisPointsTotal_2->text().toInt();
	pointsSpent += ui->chaPointsTotal_2->text().toInt();
	ui->leftPointsTotal_2->setText(QString::number(pointsAvail - pointsSpent));
}

void MainWindow::on_strBox_2_valueChanged(int arg1)
{
	updateAbilityScore(arg1, ui->strPointsNext_2, ui->strPointsTotal_2);
	updateAbilityPointsLeft();
}

void MainWindow::on_dexBox_2_valueChanged(int arg1)
{
	updateAbilityScore(arg1, ui->dexPointsNext_2, ui->dexPointsTotal_2);
	updateAbilityPointsLeft();
}

void MainWindow::on_conBox_2_valueChanged(int arg1)
{
	updateAbilityScore(arg1, ui->conPointsNext_2, ui->conPointsTotal_2);
	updateAbilityPointsLeft();
}

void MainWindow::on_intBox_2_valueChanged(int arg1)
{
	updateAbilityScore(arg1, ui->intPointsNext_2, ui->intPointsTotal_2);
	updateAbilityPointsLeft();
}

void MainWindow::on_wisBox_2_valueChanged(int arg1)
{
	updateAbilityScore(arg1, ui->wisPointsNext_2, ui->wisPointsTotal_2);
	updateAbilityPointsLeft();
}

void MainWindow::on_chaBox_2_valueChanged(int arg1)
{
	updateAbilityScore(arg1, ui->chaPointsNext_2, ui->chaPointsTotal_2);
	updateAbilityPointsLeft();
}

void MainWindow::on_rollDiceButton_clicked()
{
	//do some magic
	//create a 4d6 dice set and roll 6 times, skip worst dice
	//or create a 1d10+7 dice set and roll 4 times (set 18 and 7 before)
	ui->strBox_2->setValue(dice->roll());
	ui->dexBox_2->setValue(dice->roll());
	ui->conBox_2->setValue(dice->roll());
	ui->intBox_2->setValue(dice->roll());
	ui->wisBox_2->setValue(dice->roll());
	ui->chaBox_2->setValue(dice->roll());
}

void MainWindow::nextPage(){
	if (page < CHARACTER_CREATION_PAGES - 1){
		ui->creationStack->setCurrentIndex(++page);
		ui->statusBar->showMessage(QString::number(page + 1));
	}
}

void MainWindow::prevPage(){
	if (page >= 0){
		ui->creationStack->setCurrentIndex(--page);
		ui->statusBar->showMessage(QString::number(page + 1));
	}
}

void MainWindow::on_nextButton_clicked()
{
	Ability* ability = new Ability(ui->strBox_2->text().toShort(),
		ui->dexBox_2->text().toShort(),
		ui->conBox_2->text().toShort(),
		ui->intBox_2->text().toShort(),
		ui->wisBox_2->text().toShort(),
		ui->chaBox_2->text().toShort()
		);
	//save ability scores
	character = new Hero(ability);
	nextPage();
}

void MainWindow::on_nextButton_2_clicked()
{
	//save race
	raceID = ui->raceGroup->checkedId();
	character->setRace(raceProvider->getRace(-(ui->raceGroup->checkedId() + 1)));
	//dwarf -2
	//elf -3
	//gnome -4
	//half elf -5
	//halfling -6
	//half orc -7
	//human -8
	nextPage();
}

void MainWindow::on_nextButton_3_clicked()
{
	//save the class
	ClassName name;
	int skillPoints = 0;
	switch (ui->classGroup->checkedId()){
	case -2: name = Barbarian; skillPoints = 4; break;
	case -3: name = Bard; skillPoints = 6; break;
	case -4: name = Cleric; skillPoints = 2; break;
	case -5: name = Druid; skillPoints = 4; break;
	case -6: name = Fighter; skillPoints = 2; break;
	case -7: name = Monk; skillPoints = 4; break;
	case -8: name = Paladin; skillPoints = 2; break;
	case -9: name = Ranger; skillPoints = 6; break;
	case -10: name = Rogue; skillPoints = 8; break;
	case -11: name = Sorcerer; skillPoints = 2; break;
	case -12: name = Wizard; skillPoints = 2; break;
	default: name = Barbarian; break;
	}
	character->levelUp(name);
	//check all the classSkills Boxes
	if (character->skills != NULL) character->skills->setClassSkills(name);
	ui->acrobaticsBox->setChecked(character->skills->acrobatics->classSkill);
	ui->appraiseBox->setChecked(character->skills->appraise->classSkill);
	ui->bluffBox->setChecked(character->skills->bluff->classSkill);
	ui->climbBox->setChecked(character->skills->climb->classSkill);
	ui->craftBox1->setChecked(character->skills->craft->classSkill);
	ui->craftBox2->setChecked(character->skills->craft->classSkill);
	ui->craftBox3->setChecked(character->skills->craft->classSkill);
	ui->diplomacyBox->setChecked(character->skills->diplomacy->classSkill);
	ui->disableBox->setChecked(character->skills->disableDevice->classSkill);
	ui->disguiseBox->setChecked(character->skills->disguise->classSkill);
	ui->escapeBox->setChecked(character->skills->escapeArtist->classSkill);
	ui->flyBox->setChecked(character->skills->fly->classSkill);
	ui->handleBox->setChecked(character->skills->handleAnimal->classSkill);
	ui->healBox->setChecked(character->skills->heal->classSkill);
	ui->intimidateBox->setChecked(character->skills->intimidate->classSkill);
	ui->arcanaBox->setChecked(character->skills->knowArcana->classSkill);
	ui->dungeoneeringBox->setChecked(character->skills->knowDungeoneering->classSkill);
	ui->engineeringBox->setChecked(character->skills->knowEngineering->classSkill);
	ui->geographyBox->setChecked(character->skills->knowGeography->classSkill);
	ui->historyBox->setChecked(character->skills->knowHistory->classSkill);
	ui->localBox->setChecked(character->skills->knowLocal->classSkill);
	ui->natureBox->setChecked(character->skills->knowNature->classSkill);
	ui->nobilityBox->setChecked(character->skills->knowNobility->classSkill);
	ui->planesBox->setChecked(character->skills->knowPlanes->classSkill);
	ui->religionBox->setChecked(character->skills->knowReligion->classSkill);
	ui->linguisticsBox->setChecked(character->skills->linguistics->classSkill);
	ui->perceptionBox->setChecked(character->skills->perception->classSkill);
	ui->performBox1->setChecked(character->skills->perform->classSkill);
	ui->performBox2->setChecked(character->skills->perform->classSkill);
	ui->professionBox1->setChecked(character->skills->profession->classSkill);
	ui->professionBox2->setChecked(character->skills->profession->classSkill);
	ui->rideBox->setChecked(character->skills->ride->classSkill);
	ui->senseBox->setChecked(character->skills->senseMotive->classSkill);
	ui->sleightBox->setChecked(character->skills->sleightOfHand->classSkill);
	ui->spellcraftBox->setChecked(character->skills->spellcraft->classSkill);
	ui->stealthBox->setChecked(character->skills->stealth->classSkill);
	ui->survivalBox->setChecked(character->skills->survival->classSkill);
	ui->swimBox->setChecked(character->skills->swim->classSkill);
	ui->useBox->setChecked(character->skills->useMagicDevice->classSkill);
	//make sure the maximum rank is set
	int hd = character->getHitDice();
	ui->acrobaticsValue->setMaximum(hd);
	ui->appraiseValue->setMaximum(hd);
	ui->bluffValue->setMaximum(hd);
	ui->climbValue->setMaximum(hd);
	ui->craftValue1->setMaximum(hd);
	ui->craftValue2->setMaximum(hd);
	ui->craftValue3->setMaximum(hd);
	ui->diplomacyValue->setMaximum(hd);
	ui->disableValue->setMaximum(hd);
	ui->disguiseValue->setMaximum(hd);
	ui->escapeValue->setMaximum(hd);
	ui->flyValue->setMaximum(hd);
	ui->handleValue->setMaximum(hd);
	ui->healValue->setMaximum(hd);
	ui->intimidateValue->setMaximum(hd);
	ui->arcanaValue->setMaximum(hd);
	ui->dungeoneeringValue->setMaximum(hd);
	ui->engineeringValue->setMaximum(hd);
	ui->geographyValue->setMaximum(hd);
	ui->historyValue->setMaximum(hd);
	ui->localValue->setMaximum(hd);
	ui->natureValue->setMaximum(hd);
	ui->nobilityValue->setMaximum(hd);
	ui->planesValue->setMaximum(hd);
	ui->religionValue->setMaximum(hd);
	ui->linguisticsValue->setMaximum(hd);
	ui->perceptionValue->setMaximum(hd);
	ui->performValue1->setMaximum(hd);
	ui->performValue2->setMaximum(hd);
	ui->professionValue1->setMaximum(hd);
	ui->professionValue2->setMaximum(hd);
	ui->rideValue->setMaximum(hd);
	ui->senseValue->setMaximum(hd);
	ui->sleightValue->setMaximum(hd);
	ui->spellcraftValue->setMaximum(hd);
	ui->stealthValue->setMaximum(hd);
	ui->survivalValue->setMaximum(hd);
	ui->swimValue->setMaximum(hd);
	ui->useValue->setMaximum(hd);
	//show how many Skill points are available
	ui->skillPointsAvailable->setText(QString::number(skillPoints + *character->ability->intMod));
	nextPage();
}

void MainWindow::on_nextButton_4_clicked()
{
	//save all the skills
	nextPage();
}

void MainWindow::on_nextButton_5_clicked()
{
	nextPage();
}

void MainWindow::on_nextButton_6_clicked()
{
	nextPage();
}

void MainWindow::on_previousButton_clicked()
{
	prevPage();
}

void MainWindow::on_previousButton_2_clicked()
{
	prevPage();
}

void MainWindow::on_previousButton_3_clicked()
{
	prevPage();
}

void MainWindow::on_previousButton_4_clicked()
{
	prevPage();
}

void MainWindow::on_previousButton_5_clicked()
{
	prevPage();
}

void MainWindow::on_previousButton_6_clicked()
{
	prevPage();
}

void skillChanged(bool classSkill, int value, QLabel* totalLabel, QPushButton* nextButton, QLabel* label, const char* abilityScore, short abilityBonus){
	int bonus = 0;
	if (classSkill) bonus = 3;
	bonus += abilityBonus;
	if (value == 0) label->setText(abilityScore);
	else label->setText(QString::number(value + bonus));
	int n = totalLabel->text().toInt();								//TODO: make this work for skills > level 1
	if (value > 0) n--;
	else n++;
	totalLabel->setText(QString::number(n));
	if (n != 0) nextButton->setEnabled(false);
	else nextButton->setEnabled(true);
}

void MainWindow::on_craftValue3_valueChanged(int arg1)
{
	skillChanged(ui->craftBox3->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->craftLabel3, intString, *character->ability->intMod);
}

void MainWindow::on_craftValue2_valueChanged(int arg1)
{
	skillChanged(ui->craftBox2->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->craftLabel2, intString, *character->ability->intMod);
}

void MainWindow::on_craftValue1_valueChanged(int arg1)
{
	skillChanged(ui->craftBox1->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->craftLabel1, intString, *character->ability->intMod);
}

void MainWindow::on_climbValue_valueChanged(int arg1)
{
	skillChanged(ui->climbBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->climbLabel, strString, *character->ability->strMod);
}

void MainWindow::on_bluffValue_valueChanged(int arg1)
{
	skillChanged(ui->bluffBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->bluffLabel, chaString, *character->ability->chaMod);
}

void MainWindow::on_appraiseValue_valueChanged(int arg1)
{
	skillChanged(ui->appraiseBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->appraiseLabel, intString, *character->ability->intMod);
}

void MainWindow::on_acrobaticsValue_valueChanged(int arg1)
{
	skillChanged(ui->acrobaticsBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->acrobaticsLabel, dexString, *character->ability->dexMod);
}

void MainWindow::on_diplomacyValue_valueChanged(int arg1)
{
	skillChanged(ui->diplomacyBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->diplomacyLabel, chaString, *character->ability->chaMod);
}

void MainWindow::on_disableValue_valueChanged(int arg1)
{
	skillChanged(ui->disableBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->disableLabel, dexString, *character->ability->dexMod);
}

void MainWindow::on_disguiseValue_valueChanged(int arg1)
{
	skillChanged(ui->disguiseBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->disguiseLabel, chaString, *character->ability->chaMod);
}

void MainWindow::on_escapeValue_valueChanged(int arg1)
{
	skillChanged(ui->escapeBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->escapeLabel, dexString, *character->ability->dexMod);
}

void MainWindow::on_flyValue_valueChanged(int arg1)
{
	skillChanged(ui->flyBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->flyLabel, dexString, *character->ability->dexMod);
}

void MainWindow::on_handleValue_valueChanged(int arg1)
{
	skillChanged(ui->handleBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->handleLabel, chaString, *character->ability->chaMod);
}

void MainWindow::on_healValue_valueChanged(int arg1)
{
	skillChanged(ui->healBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->healLabel, wisString, *character->ability->wisMod);
}

void MainWindow::on_intimidateValue_valueChanged(int arg1)
{
	skillChanged(ui->intimidateBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->intimidateLabel, chaString, *character->ability->chaMod);
}

void MainWindow::on_arcanaValue_valueChanged(int arg1)
{
	skillChanged(ui->arcanaBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->arcanaLabel, intString, *character->ability->intMod);
}

void MainWindow::on_dungeoneeringValue_valueChanged(int arg1)
{
	skillChanged(ui->dungeoneeringBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->dungeoneeringLabel, intString, *character->ability->intMod);
}

void MainWindow::on_engineeringValue_valueChanged(int arg1)
{
	skillChanged(ui->engineeringBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->engineeringLabel, intString, *character->ability->intMod);
}

void MainWindow::on_geographyValue_valueChanged(int arg1)
{
	skillChanged(ui->geographyBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->geographyLabel, intString, *character->ability->intMod);
}

void MainWindow::on_historyValue_valueChanged(int arg1)
{
	skillChanged(ui->historyBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->historyLabel, intString, *character->ability->intMod);
}

void MainWindow::on_localValue_valueChanged(int arg1)
{
	skillChanged(ui->localBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->localLabel, intString, *character->ability->intMod);
}

void MainWindow::on_natureValue_valueChanged(int arg1)
{
	skillChanged(ui->natureBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->natureLabel, intString, *character->ability->intMod);
}

void MainWindow::on_nobilityValue_valueChanged(int arg1)
{
	skillChanged(ui->nobilityBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->nobilityLabel, intString, *character->ability->intMod);
}

void MainWindow::on_planesValue_valueChanged(int arg1)
{
	skillChanged(ui->planesBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->planesLabel, intString, *character->ability->intMod);
}

void MainWindow::on_religionValue_valueChanged(int arg1)
{
	skillChanged(ui->religionBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->religionLabel, intString, *character->ability->intMod);
}

void MainWindow::on_linguisticsValue_valueChanged(int arg1)
{
	skillChanged(ui->linguisticsBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->linguisticsLabel, intString, *character->ability->intMod);
}

void MainWindow::on_perceptionValue_valueChanged(int arg1)
{
	skillChanged(ui->perceptionBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->perceptionLabel, wisString, *character->ability->wisMod);
}

void MainWindow::on_performValue1_valueChanged(int arg1)
{
	skillChanged(ui->performBox1->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->performLabel1, chaString, *character->ability->chaMod);
}

void MainWindow::on_performValue2_valueChanged(int arg1)
{
	skillChanged(ui->performBox2->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->performLabel2, chaString, *character->ability->chaMod);
}

void MainWindow::on_professionValue1_valueChanged(int arg1)
{
	skillChanged(ui->professionBox1->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->professionLabel1, wisString, *character->ability->wisMod);
}

void MainWindow::on_professionValue2_valueChanged(int arg1)
{
	skillChanged(ui->professionBox2->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->professionLabel2, wisString, *character->ability->wisMod);
}

void MainWindow::on_rideValue_valueChanged(int arg1)
{
	skillChanged(ui->rideBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->rideLabel, dexString, *character->ability->dexMod);
}

void MainWindow::on_senseValue_valueChanged(int arg1)
{
	skillChanged(ui->senseBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->senseLabel, wisString, *character->ability->wisMod);
}

void MainWindow::on_sleightValue_valueChanged(int arg1)
{
	skillChanged(ui->sleightBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->sleightLabel, dexString, *character->ability->dexMod);
}

void MainWindow::on_spellcraftValue_valueChanged(int arg1)
{
	skillChanged(ui->spellcraftBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->spellcraftLabel, intString, *character->ability->intMod);
}

void MainWindow::on_stealthValue_valueChanged(int arg1)
{
	skillChanged(ui->stealthBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->stealthLabel, dexString, *character->ability->dexMod);
}

void MainWindow::on_survivalValue_valueChanged(int arg1)
{
	skillChanged(ui->survivalBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->survivalLabel, wisString, *character->ability->wisMod);
}

void MainWindow::on_swimValue_valueChanged(int arg1)
{
	skillChanged(ui->swimBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->swimLabel, strString, *character->ability->strMod);
}

void MainWindow::on_useValue_valueChanged(int arg1)
{
	skillChanged(ui->useBox->isChecked(), arg1, ui->skillPointsAvailable, ui->nextButton_4, ui->useLabel, chaString, *character->ability->chaMod);
}

void MainWindow::on_nameValue_textChanged(const QString &arg1)
{
	if (arg1.length() > 1){
		ui->nextButton_6->setEnabled(true);
	}
	else{
		ui->nextButton_6->setEnabled(false);
	}
}
