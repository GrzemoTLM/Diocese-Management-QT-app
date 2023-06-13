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
    QListView *listView;
    QLabel *LabelPriests;
    QPushButton *ButtonAddPriest;
    QPushButton *ButtonDeletePriest;
    QPushButton *ButtonChangeParish;
    QListView *listViewItems;
    QLabel *LabelParishName;
    QLabel *LabelEQ;
    QLabel *label;
    QLabel *LabelBudget;
    QLabel *LabelShop;
    QPushButton *ButtonBuy;
    QLabel *LabelMoney;
    QLabel *LabelShopPic;
    QLabel *label_2;
    QComboBox *comboBoxShop;
    QComboBox *comboBoxParish;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *NewWindow)
    {
        if (NewWindow->objectName().isEmpty())
            NewWindow->setObjectName("NewWindow");
        NewWindow->resize(936, 720);
        actionDodaj_Parafie = new QAction(NewWindow);
        actionDodaj_Parafie->setObjectName("actionDodaj_Parafie");
        centralwidget = new QWidget(NewWindow);
        centralwidget->setObjectName("centralwidget");
        LabelComboBox = new QLabel(centralwidget);
        LabelComboBox->setObjectName("LabelComboBox");
        LabelComboBox->setGeometry(QRect(110, 20, 251, 41));
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
        listViewItems = new QListView(centralwidget);
        listViewItems->setObjectName("listViewItems");
        listViewItems->setGeometry(QRect(400, 390, 256, 192));
        LabelParishName = new QLabel(centralwidget);
        LabelParishName->setObjectName("LabelParishName");
        LabelParishName->setGeometry(QRect(210, 120, 141, 19));
        LabelEQ = new QLabel(centralwidget);
        LabelEQ->setObjectName("LabelEQ");
        LabelEQ->setGeometry(QRect(450, 340, 161, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(620, 60, 291, 241));
        LabelBudget = new QLabel(centralwidget);
        LabelBudget->setObjectName("LabelBudget");
        LabelBudget->setGeometry(QRect(660, 580, 91, 41));
        LabelShop = new QLabel(centralwidget);
        LabelShop->setObjectName("LabelShop");
        LabelShop->setGeometry(QRect(660, 320, 181, 51));
        ButtonBuy = new QPushButton(centralwidget);
        ButtonBuy->setObjectName("ButtonBuy");
        ButtonBuy->setGeometry(QRect(760, 420, 80, 27));
        LabelMoney = new QLabel(centralwidget);
        LabelMoney->setObjectName("LabelMoney");
        LabelMoney->setGeometry(QRect(820, 590, 101, 41));
        LabelShopPic = new QLabel(centralwidget);
        LabelShopPic->setObjectName("LabelShopPic");
        LabelShopPic->setGeometry(QRect(830, 280, 101, 101));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(610, 250, 56, 19));
        comboBoxShop = new QComboBox(centralwidget);
        comboBoxShop->setObjectName("comboBoxShop");
        comboBoxShop->setGeometry(QRect(680, 390, 241, 27));
        comboBoxParish = new QComboBox(centralwidget);
        comboBoxParish->setObjectName("comboBoxParish");
        comboBoxParish->setGeometry(QRect(410, 30, 281, 24));
        NewWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(NewWindow);
        statusbar->setObjectName("statusbar");
        NewWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(NewWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 936, 24));
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
        LabelShopPic->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("NewWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewWindow: public Ui_NewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOW_H
