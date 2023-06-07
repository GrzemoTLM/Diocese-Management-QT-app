/********************************************************************************
** Form generated from reading UI file 'newwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWINDOW_H
#define UI_NEWWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewWindow
{
public:
    QAction *actionDodaj_Parafie;
    QWidget *centralwidget;
    QLabel *LabelComboBox;
    QComboBox *comboBox;
    QListView *listView;
    QLabel *LabelPriests;
    QPushButton *ButtonAddPriest;
    QPushButton *ButtonDeletePriest;
    QPushButton *ButtonChangeParish;
    QListView *listView_2;
    QLabel *LabelParishName;
    QLabel *LabelEQ;
    QLabel *label;
    QLabel *LabelBudget;
    QLabel *LabelShop;
    QComboBox *comboBox_2;
    QPushButton *ButtonBuy;
    QLabel *LabelMoney;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *NewWindow)
    {
        if (NewWindow->objectName().isEmpty())
            NewWindow->setObjectName("NewWindow");
        NewWindow->resize(950, 744);
        actionDodaj_Parafie = new QAction(NewWindow);
        actionDodaj_Parafie->setObjectName("actionDodaj_Parafie");
        centralwidget = new QWidget(NewWindow);
        centralwidget->setObjectName("centralwidget");
        LabelComboBox = new QLabel(centralwidget);
        LabelComboBox->setObjectName("LabelComboBox");
        LabelComboBox->setGeometry(QRect(110, 20, 251, 41));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(390, 30, 191, 27));
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(20, 290, 351, 291));
        LabelPriests = new QLabel(centralwidget);
        LabelPriests->setObjectName("LabelPriests");
        LabelPriests->setGeometry(QRect(160, 240, 56, 19));
        ButtonAddPriest = new QPushButton(centralwidget);
        ButtonAddPriest->setObjectName("ButtonAddPriest");
        ButtonAddPriest->setGeometry(QRect(20, 600, 101, 27));
        ButtonDeletePriest = new QPushButton(centralwidget);
        ButtonDeletePriest->setObjectName("ButtonDeletePriest");
        ButtonDeletePriest->setGeometry(QRect(140, 600, 101, 27));
        ButtonChangeParish = new QPushButton(centralwidget);
        ButtonChangeParish->setObjectName("ButtonChangeParish");
        ButtonChangeParish->setGeometry(QRect(260, 600, 101, 27));
        listView_2 = new QListView(centralwidget);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(400, 390, 256, 192));
        LabelParishName = new QLabel(centralwidget);
        LabelParishName->setObjectName("LabelParishName");
        LabelParishName->setGeometry(QRect(210, 120, 141, 19));
        LabelEQ = new QLabel(centralwidget);
        LabelEQ->setObjectName("LabelEQ");
        LabelEQ->setGeometry(QRect(500, 350, 56, 19));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(620, 60, 291, 241));
        LabelBudget = new QLabel(centralwidget);
        LabelBudget->setObjectName("LabelBudget");
        LabelBudget->setGeometry(QRect(660, 610, 91, 41));
        LabelShop = new QLabel(centralwidget);
        LabelShop->setObjectName("LabelShop");
        LabelShop->setGeometry(QRect(720, 320, 151, 51));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(670, 390, 261, 27));
        ButtonBuy = new QPushButton(centralwidget);
        ButtonBuy->setObjectName("ButtonBuy");
        ButtonBuy->setGeometry(QRect(750, 550, 80, 27));
        LabelMoney = new QLabel(centralwidget);
        LabelMoney->setObjectName("LabelMoney");
        LabelMoney->setGeometry(QRect(780, 620, 56, 19));
        NewWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(NewWindow);
        statusbar->setObjectName("statusbar");
        NewWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(NewWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 950, 24));
        NewWindow->setMenuBar(menuBar);

        retranslateUi(NewWindow);

        QMetaObject::connectSlotsByName(NewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NewWindow)
    {
        NewWindow->setWindowTitle(QCoreApplication::translate("NewWindow", "MainWindow", nullptr));
        actionDodaj_Parafie->setText(QCoreApplication::translate("NewWindow", "Create New Parish", nullptr));
        LabelComboBox->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        LabelPriests->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        ButtonAddPriest->setText(QCoreApplication::translate("NewWindow", "Add Priest", nullptr));
        ButtonDeletePriest->setText(QCoreApplication::translate("NewWindow", "Delete Priest", nullptr));
        ButtonChangeParish->setText(QCoreApplication::translate("NewWindow", "Change Parish", nullptr));
        LabelParishName->setText(QCoreApplication::translate("NewWindow", "Nazwa Parafii", nullptr));
        LabelEQ->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("NewWindow", "Losowe Zdjecie", nullptr));
        LabelBudget->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        LabelShop->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        ButtonBuy->setText(QCoreApplication::translate("NewWindow", "BUY", nullptr));
        LabelMoney->setText(QCoreApplication::translate("NewWindow", "$", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWindow: public Ui_NewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOW_H
