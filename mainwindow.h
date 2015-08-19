#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    void updatePointsLeft();
    int pointsAvail;
    int pointsSpent;
    int page;
    int str, dex, con, in, wis, cha;
    int raceID;
};

#endif // MAINWINDOW_H