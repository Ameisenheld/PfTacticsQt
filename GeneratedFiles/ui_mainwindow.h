/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *creationStack;
    QWidget *page;
    QComboBox *comboBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *pointsLeftLabel_2;
    QSpinBox *dexBox_2;
    QLabel *intPointsNext_2;
    QSpinBox *conBox_2;
    QSpinBox *strBox_2;
    QSpinBox *chaBox_2;
    QLabel *wisPointsNext_2;
    QLabel *chaPointsNext_2;
    QSpinBox *wisBox_2;
    QLabel *dexPointsNext_2;
    QSpinBox *intBox_2;
    QLabel *strPointsNext_2;
    QLabel *conPointsNext_2;
    QLabel *strPointsTotal_2;
    QLabel *dexPointsTotal_2;
    QLabel *conPointsTotal_2;
    QLabel *intPointsTotal_2;
    QLabel *wisPointsTotal_2;
    QLabel *chaPointsTotal_2;
    QLabel *leftPointsTotal_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *rollDiceButton;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QWidget *page_2;
    QPushButton *nextButton_2;
    QPushButton *previousButton_2;
    QLabel *label_13;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_7;
    QWidget *page_3;
    QPushButton *nextButton_3;
    QPushButton *previousButton_3;
    QWidget *page_4;
    QPushButton *nextButton_4;
    QPushButton *previousButton_4;
    QWidget *page_5;
    QPushButton *nextButton_5;
    QPushButton *previousButton_5;
    QWidget *page_6;
    QPushButton *nextButton_6;
    QPushButton *previousButton_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *raceGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(511, 335);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        creationStack = new QStackedWidget(centralWidget);
        creationStack->setObjectName(QStringLiteral("creationStack"));
        creationStack->setGeometry(QRect(-1, -1, 511, 291));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        comboBox = new QComboBox(page);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 30, 111, 22));
        gridLayoutWidget = new QWidget(page);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(190, 30, 301, 190));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pointsLeftLabel_2 = new QLabel(gridLayoutWidget);
        pointsLeftLabel_2->setObjectName(QStringLiteral("pointsLeftLabel_2"));

        gridLayout_2->addWidget(pointsLeftLabel_2, 6, 2, 1, 1);

        dexBox_2 = new QSpinBox(gridLayoutWidget);
        dexBox_2->setObjectName(QStringLiteral("dexBox_2"));
        dexBox_2->setMinimum(7);
        dexBox_2->setMaximum(18);
        dexBox_2->setValue(10);

        gridLayout_2->addWidget(dexBox_2, 1, 1, 1, 1);

        intPointsNext_2 = new QLabel(gridLayoutWidget);
        intPointsNext_2->setObjectName(QStringLiteral("intPointsNext_2"));

        gridLayout_2->addWidget(intPointsNext_2, 3, 2, 1, 1);

        conBox_2 = new QSpinBox(gridLayoutWidget);
        conBox_2->setObjectName(QStringLiteral("conBox_2"));
        conBox_2->setMinimum(7);
        conBox_2->setMaximum(18);
        conBox_2->setValue(10);

        gridLayout_2->addWidget(conBox_2, 2, 1, 1, 1);

        strBox_2 = new QSpinBox(gridLayoutWidget);
        strBox_2->setObjectName(QStringLiteral("strBox_2"));
        strBox_2->setMinimum(7);
        strBox_2->setMaximum(18);
        strBox_2->setValue(10);

        gridLayout_2->addWidget(strBox_2, 0, 1, 1, 1);

        chaBox_2 = new QSpinBox(gridLayoutWidget);
        chaBox_2->setObjectName(QStringLiteral("chaBox_2"));
        chaBox_2->setMinimum(7);
        chaBox_2->setMaximum(18);
        chaBox_2->setValue(10);

        gridLayout_2->addWidget(chaBox_2, 5, 1, 1, 1);

        wisPointsNext_2 = new QLabel(gridLayoutWidget);
        wisPointsNext_2->setObjectName(QStringLiteral("wisPointsNext_2"));

        gridLayout_2->addWidget(wisPointsNext_2, 4, 2, 1, 1);

        chaPointsNext_2 = new QLabel(gridLayoutWidget);
        chaPointsNext_2->setObjectName(QStringLiteral("chaPointsNext_2"));

        gridLayout_2->addWidget(chaPointsNext_2, 5, 2, 1, 1);

        wisBox_2 = new QSpinBox(gridLayoutWidget);
        wisBox_2->setObjectName(QStringLiteral("wisBox_2"));
        wisBox_2->setMinimum(7);
        wisBox_2->setMaximum(18);
        wisBox_2->setValue(10);

        gridLayout_2->addWidget(wisBox_2, 4, 1, 1, 1);

        dexPointsNext_2 = new QLabel(gridLayoutWidget);
        dexPointsNext_2->setObjectName(QStringLiteral("dexPointsNext_2"));

        gridLayout_2->addWidget(dexPointsNext_2, 1, 2, 1, 1);

        intBox_2 = new QSpinBox(gridLayoutWidget);
        intBox_2->setObjectName(QStringLiteral("intBox_2"));
        intBox_2->setMinimum(7);
        intBox_2->setMaximum(18);
        intBox_2->setValue(10);

        gridLayout_2->addWidget(intBox_2, 3, 1, 1, 1);

        strPointsNext_2 = new QLabel(gridLayoutWidget);
        strPointsNext_2->setObjectName(QStringLiteral("strPointsNext_2"));

        gridLayout_2->addWidget(strPointsNext_2, 0, 2, 1, 1);

        conPointsNext_2 = new QLabel(gridLayoutWidget);
        conPointsNext_2->setObjectName(QStringLiteral("conPointsNext_2"));

        gridLayout_2->addWidget(conPointsNext_2, 2, 2, 1, 1);

        strPointsTotal_2 = new QLabel(gridLayoutWidget);
        strPointsTotal_2->setObjectName(QStringLiteral("strPointsTotal_2"));

        gridLayout_2->addWidget(strPointsTotal_2, 0, 3, 1, 1);

        dexPointsTotal_2 = new QLabel(gridLayoutWidget);
        dexPointsTotal_2->setObjectName(QStringLiteral("dexPointsTotal_2"));

        gridLayout_2->addWidget(dexPointsTotal_2, 1, 3, 1, 1);

        conPointsTotal_2 = new QLabel(gridLayoutWidget);
        conPointsTotal_2->setObjectName(QStringLiteral("conPointsTotal_2"));

        gridLayout_2->addWidget(conPointsTotal_2, 2, 3, 1, 1);

        intPointsTotal_2 = new QLabel(gridLayoutWidget);
        intPointsTotal_2->setObjectName(QStringLiteral("intPointsTotal_2"));

        gridLayout_2->addWidget(intPointsTotal_2, 3, 3, 1, 1);

        wisPointsTotal_2 = new QLabel(gridLayoutWidget);
        wisPointsTotal_2->setObjectName(QStringLiteral("wisPointsTotal_2"));

        gridLayout_2->addWidget(wisPointsTotal_2, 4, 3, 1, 1);

        chaPointsTotal_2 = new QLabel(gridLayoutWidget);
        chaPointsTotal_2->setObjectName(QStringLiteral("chaPointsTotal_2"));

        gridLayout_2->addWidget(chaPointsTotal_2, 5, 3, 1, 1);

        leftPointsTotal_2 = new QLabel(gridLayoutWidget);
        leftPointsTotal_2->setObjectName(QStringLiteral("leftPointsTotal_2"));

        gridLayout_2->addWidget(leftPointsTotal_2, 6, 3, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 3, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 5, 0, 1, 1);

        rollDiceButton = new QPushButton(page);
        rollDiceButton->setObjectName(QStringLiteral("rollDiceButton"));
        rollDiceButton->setEnabled(true);
        rollDiceButton->setGeometry(QRect(40, 160, 111, 21));
        nextButton = new QPushButton(page);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(410, 240, 80, 23));
        previousButton = new QPushButton(page);
        previousButton->setObjectName(QStringLiteral("previousButton"));
        previousButton->setEnabled(false);
        previousButton->setGeometry(QRect(310, 240, 80, 23));
        creationStack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        nextButton_2 = new QPushButton(page_2);
        nextButton_2->setObjectName(QStringLiteral("nextButton_2"));
        nextButton_2->setGeometry(QRect(410, 240, 80, 23));
        previousButton_2 = new QPushButton(page_2);
        previousButton_2->setObjectName(QStringLiteral("previousButton_2"));
        previousButton_2->setGeometry(QRect(310, 240, 80, 23));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(40, 30, 91, 21));
        gridLayoutWidget_2 = new QWidget(page_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(310, 30, 171, 191));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_6 = new QRadioButton(gridLayoutWidget_2);
        raceGroup = new QButtonGroup(MainWindow);
        raceGroup->setObjectName(QStringLiteral("raceGroup"));
        raceGroup->addButton(radioButton_6);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        gridLayout_3->addWidget(radioButton_6, 5, 0, 1, 1);

        radioButton = new QRadioButton(gridLayoutWidget_2);
        raceGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_3->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_5 = new QRadioButton(gridLayoutWidget_2);
        raceGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        gridLayout_3->addWidget(radioButton_5, 4, 0, 1, 1);

        radioButton_3 = new QRadioButton(gridLayoutWidget_2);
        raceGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout_3->addWidget(radioButton_3, 2, 0, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget_2);
        raceGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_3->addWidget(radioButton_2, 1, 0, 1, 1);

        radioButton_4 = new QRadioButton(gridLayoutWidget_2);
        raceGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout_3->addWidget(radioButton_4, 3, 0, 1, 1);

        radioButton_7 = new QRadioButton(gridLayoutWidget_2);
        raceGroup->addButton(radioButton_7);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        gridLayout_3->addWidget(radioButton_7, 6, 0, 1, 1);

        creationStack->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        nextButton_3 = new QPushButton(page_3);
        nextButton_3->setObjectName(QStringLiteral("nextButton_3"));
        nextButton_3->setGeometry(QRect(410, 240, 80, 23));
        previousButton_3 = new QPushButton(page_3);
        previousButton_3->setObjectName(QStringLiteral("previousButton_3"));
        previousButton_3->setGeometry(QRect(310, 240, 80, 23));
        creationStack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        nextButton_4 = new QPushButton(page_4);
        nextButton_4->setObjectName(QStringLiteral("nextButton_4"));
        nextButton_4->setGeometry(QRect(410, 240, 80, 23));
        previousButton_4 = new QPushButton(page_4);
        previousButton_4->setObjectName(QStringLiteral("previousButton_4"));
        previousButton_4->setGeometry(QRect(310, 240, 80, 23));
        creationStack->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        nextButton_5 = new QPushButton(page_5);
        nextButton_5->setObjectName(QStringLiteral("nextButton_5"));
        nextButton_5->setGeometry(QRect(410, 240, 80, 23));
        previousButton_5 = new QPushButton(page_5);
        previousButton_5->setObjectName(QStringLiteral("previousButton_5"));
        previousButton_5->setGeometry(QRect(310, 240, 80, 23));
        creationStack->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        nextButton_6 = new QPushButton(page_6);
        nextButton_6->setObjectName(QStringLiteral("nextButton_6"));
        nextButton_6->setEnabled(false);
        nextButton_6->setGeometry(QRect(410, 240, 80, 23));
        previousButton_6 = new QPushButton(page_6);
        previousButton_6->setObjectName(QStringLiteral("previousButton_6"));
        previousButton_6->setGeometry(QRect(310, 240, 80, 23));
        creationStack->addWidget(page_6);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 511, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        creationStack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "PointBuy 10", 0)
         << QApplication::translate("MainWindow", "PointBuy 15", 0)
         << QApplication::translate("MainWindow", "PointBuy 20", 0)
         << QApplication::translate("MainWindow", "PointBuy 25", 0)
         << QApplication::translate("MainWindow", "Roll the dice! (4d6)", 0)
         << QApplication::translate("MainWindow", "d10+7 sorted", 0)
        );
        pointsLeftLabel_2->setText(QApplication::translate("MainWindow", "Points left:", 0));
        intPointsNext_2->setText(QApplication::translate("MainWindow", "1", 0));
        wisPointsNext_2->setText(QApplication::translate("MainWindow", "1", 0));
        chaPointsNext_2->setText(QApplication::translate("MainWindow", "1", 0));
        dexPointsNext_2->setText(QApplication::translate("MainWindow", "1", 0));
        strPointsNext_2->setText(QApplication::translate("MainWindow", "1", 0));
        conPointsNext_2->setText(QApplication::translate("MainWindow", "1", 0));
        strPointsTotal_2->setText(QApplication::translate("MainWindow", "0", 0));
        dexPointsTotal_2->setText(QApplication::translate("MainWindow", "0", 0));
        conPointsTotal_2->setText(QApplication::translate("MainWindow", "0", 0));
        intPointsTotal_2->setText(QApplication::translate("MainWindow", "0", 0));
        wisPointsTotal_2->setText(QApplication::translate("MainWindow", "0", 0));
        chaPointsTotal_2->setText(QApplication::translate("MainWindow", "0", 0));
        leftPointsTotal_2->setText(QApplication::translate("MainWindow", "10", 0));
        label_7->setText(QApplication::translate("MainWindow", "Strength", 0));
        label_8->setText(QApplication::translate("MainWindow", "Dexterity", 0));
        label_9->setText(QApplication::translate("MainWindow", "Constitution", 0));
        label_10->setText(QApplication::translate("MainWindow", "Intelligence", 0));
        label_11->setText(QApplication::translate("MainWindow", "Wisdom", 0));
        label_12->setText(QApplication::translate("MainWindow", "Charisma", 0));
        rollDiceButton->setText(QApplication::translate("MainWindow", "Roll the dice!", 0));
        nextButton->setText(QApplication::translate("MainWindow", "Next", 0));
        previousButton->setText(QApplication::translate("MainWindow", "Previous", 0));
        nextButton_2->setText(QApplication::translate("MainWindow", "Next", 0));
        previousButton_2->setText(QApplication::translate("MainWindow", "Previous", 0));
        label_13->setText(QApplication::translate("MainWindow", "Choose a Race", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "Half Orc", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Dwarf", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "Halfling", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "Gnome", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Elf", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "Half-Elf", 0));
        radioButton_7->setText(QApplication::translate("MainWindow", "Human", 0));
        nextButton_3->setText(QApplication::translate("MainWindow", "Next", 0));
        previousButton_3->setText(QApplication::translate("MainWindow", "Previous", 0));
        nextButton_4->setText(QApplication::translate("MainWindow", "Next", 0));
        previousButton_4->setText(QApplication::translate("MainWindow", "Previous", 0));
        nextButton_5->setText(QApplication::translate("MainWindow", "Next", 0));
        previousButton_5->setText(QApplication::translate("MainWindow", "Previous", 0));
        nextButton_6->setText(QApplication::translate("MainWindow", "Next", 0));
        previousButton_6->setText(QApplication::translate("MainWindow", "Previous", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
