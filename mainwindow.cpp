#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    pointsAvail(10),
    page(0)
{
    ui->setupUi(this);
    ui->rollDiceButton->hide();
    ui->creationStack->setCurrentIndex(0);
    ui->statusBar->showMessage(QString::number(page+1));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_activated(int index)
{
    pointsAvail = 0;
    switch(index){
    case 3:     //25 point buy
        pointsAvail += 5;
    case 2:     //20 point buy
        pointsAvail += 5;
    case 1:     //15 point buy
        pointsAvail += 5;
    case 0:     //10 point buy
        pointsAvail += 10;
        ui->pointsLeftLabel_2->setText("Points left:");
        ui->rollDiceButton->hide();
        break;
    case 4:     //4d6
    case 5:     //d10+7
         //make some magic / replace text with 'roll dice' areas...
        pointsAvail = 60;
        ui->pointsLeftLabel_2->setText("Summed score:");
        pointsSpent = 0;
        ui->rollDiceButton->show();
        break;
    default:
        break;
    }
    ui->leftPointsTotal_2->setText(QString::number(pointsAvail-pointsSpent));
}

void updateAbilityScore(int value, QLabel* nextLabel, QLabel* totalLabel){
    switch(value){
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
        default: break;
    }
}

void MainWindow::updatePointsLeft(){
    pointsSpent = 0;
    pointsSpent += ui->strPointsTotal_2->text().toInt();
    pointsSpent += ui->dexPointsTotal_2->text().toInt();
    pointsSpent += ui->conPointsTotal_2->text().toInt();
    pointsSpent += ui->intPointsTotal_2->text().toInt();
    pointsSpent += ui->wisPointsTotal_2->text().toInt();
    pointsSpent += ui->chaPointsTotal_2->text().toInt();
    ui->leftPointsTotal_2->setText(QString::number(pointsAvail-pointsSpent));
}

void MainWindow::on_strBox_2_valueChanged(int arg1)
{
    updateAbilityScore(arg1,ui->strPointsNext_2,ui->strPointsTotal_2);
    updatePointsLeft();
}

void MainWindow::on_dexBox_2_valueChanged(int arg1)
{
    updateAbilityScore(arg1,ui->dexPointsNext_2,ui->dexPointsTotal_2);
    updatePointsLeft();
}

void MainWindow::on_conBox_2_valueChanged(int arg1)
{
    updateAbilityScore(arg1,ui->conPointsNext_2,ui->conPointsTotal_2);
    updatePointsLeft();
}

void MainWindow::on_intBox_2_valueChanged(int arg1)
{
    updateAbilityScore(arg1,ui->intPointsNext_2,ui->intPointsTotal_2);
    updatePointsLeft();
}

void MainWindow::on_wisBox_2_valueChanged(int arg1)
{
    updateAbilityScore(arg1,ui->wisPointsNext_2,ui->wisPointsTotal_2);
    updatePointsLeft();
}

void MainWindow::on_chaBox_2_valueChanged(int arg1)
{
    updateAbilityScore(arg1,ui->chaPointsNext_2,ui->chaPointsTotal_2);
    updatePointsLeft();
}

void MainWindow::on_rollDiceButton_clicked()
{
    //do some magic
    //create a 4d6 dice set and roll 6 times, skip worst dice
    //or create a 1d10+7 dice set and roll 4 times (set 18 and 7 before)
}

void MainWindow::nextPage(){
    ui->creationStack->setCurrentIndex(++page);
    ui->statusBar->showMessage(QString::number(page+1));
}

void MainWindow::prevPage(){
    ui->creationStack->setCurrentIndex(--page);
    ui->statusBar->showMessage(QString::number(page+1));
}

void MainWindow::on_nextButton_clicked()
{
    //save ability scores
    str = ui->strBox_2->text().toInt();
    dex = ui->dexBox_2->text().toInt();
    con = ui->conBox_2->text().toInt();
    in  = ui->intBox_2->text().toInt();
    wis = ui->wisBox_2->text().toInt();
    cha = ui->chaBox_2->text().toInt();
    nextPage();
}

void MainWindow::on_nextButton_2_clicked()
{
    //save race
    raceID = ui->raceGroup->checkedId();
    //dwarf -3
    //elf -6
    //gnome -5
    //half elf -7
    //halfling -4
    //half orc -2
    //human -8
    nextPage();
}

void MainWindow::on_nextButton_3_clicked()
{
    nextPage();
}

void MainWindow::on_nextButton_4_clicked()
{
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
