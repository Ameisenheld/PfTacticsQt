#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Dice.h"
#include "Hero.h"
#include "RaceProvider.h"
#include "GlobalMacros.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_comboBox_activated(int index);
    void on_strBox_2_valueChanged(int arg1);
    void on_dexBox_2_valueChanged(int arg1);
    void on_conBox_2_valueChanged(int arg1);
    void on_intBox_2_valueChanged(int arg1);
    void on_wisBox_2_valueChanged(int arg1);
    void on_chaBox_2_valueChanged(int arg1);


    void on_rollDiceButton_clicked();
    void on_nextButton_clicked();
    void on_nextButton_2_clicked();
    void on_nextButton_3_clicked();
    void on_nextButton_4_clicked();
    void on_nextButton_5_clicked();
    void on_nextButton_6_clicked();
    void on_previousButton_clicked();
    void on_previousButton_2_clicked();
    void on_previousButton_3_clicked();
    void on_previousButton_4_clicked();
    void on_previousButton_5_clicked();
    void on_previousButton_6_clicked();
    void nextPage();
    void prevPage();

    void on_craftValue3_valueChanged(int arg1);
    void on_craftValue2_valueChanged(int arg1);
    void on_craftValue1_valueChanged(int arg1);
    void on_climbValue_valueChanged(int arg1);
    void on_bluffValue_valueChanged(int arg1);
    void on_appraiseValue_valueChanged(int arg1);
    void on_acrobaticsValue_valueChanged(int arg1);
    void on_diplomacyValue_valueChanged(int arg1);
    void on_disableValue_valueChanged(int arg1);
    void on_disguiseValue_valueChanged(int arg1);
    void on_escapeValue_valueChanged(int arg1);
    void on_flyValue_valueChanged(int arg1);
    void on_handleValue_valueChanged(int arg1);
    void on_healValue_valueChanged(int arg1);
    void on_intimidateValue_valueChanged(int arg1);
    void on_arcanaValue_valueChanged(int arg1);
    void on_dungeoneeringValue_valueChanged(int arg1);
    void on_engineeringValue_valueChanged(int arg1);
    void on_geographyValue_valueChanged(int arg1);
    void on_historyValue_valueChanged(int arg1);
    void on_localValue_valueChanged(int arg1);
    void on_natureValue_valueChanged(int arg1);
    void on_nobilityValue_valueChanged(int arg1);
    void on_planesValue_valueChanged(int arg1);
    void on_religionValue_valueChanged(int arg1);
    void on_linguisticsValue_valueChanged(int arg1);
    void on_perceptionValue_valueChanged(int arg1);
    void on_performValue1_valueChanged(int arg1);
    void on_performValue2_valueChanged(int arg1);
    void on_professionValue1_valueChanged(int arg1);
    void on_professionValue2_valueChanged(int arg1);
    void on_rideValue_valueChanged(int arg1);
    void on_senseValue_valueChanged(int arg1);
    void on_sleightValue_valueChanged(int arg1);
    void on_spellcraftValue_valueChanged(int arg1);
    void on_stealthValue_valueChanged(int arg1);
    void on_survivalValue_valueChanged(int arg1);
    void on_swimValue_valueChanged(int arg1);
    void on_useValue_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    void updateAbilityPointsLeft();
    int pointsAvail;
    int pointsSpent;
    int page;
    int str, dex, con, in, wis, cha;
    int raceID;
	Dice* dice;
	bool diceActive;
	Hero* character;
	RaceProvider* raceProvider;
};

#endif // MAINWINDOW_H
