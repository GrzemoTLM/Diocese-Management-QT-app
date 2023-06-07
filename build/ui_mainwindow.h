/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *welcomelabel;
    QLabel *welcomelabel2;
    QLabel *welcomelabel3;
    QPushButton *buttonBegin;
    QPushButton *buttonStats;
    QPushButton *buttonCredits;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(952, 623);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        welcomelabel = new QLabel(centralwidget);
        welcomelabel->setObjectName("welcomelabel");
        welcomelabel->setGeometry(QRect(240, 40, 561, 161));
        welcomelabel->setTextFormat(Qt::MarkdownText);
        welcomelabel->setScaledContents(false);
        welcomelabel2 = new QLabel(centralwidget);
        welcomelabel2->setObjectName("welcomelabel2");
        welcomelabel2->setGeometry(QRect(90, 180, 341, 381));
        welcomelabel3 = new QLabel(centralwidget);
        welcomelabel3->setObjectName("welcomelabel3");
        welcomelabel3->setGeometry(QRect(630, 280, 351, 41));
        buttonBegin = new QPushButton(centralwidget);
        buttonBegin->setObjectName("buttonBegin");
        buttonBegin->setGeometry(QRect(660, 370, 161, 41));
        buttonStats = new QPushButton(centralwidget);
        buttonStats->setObjectName("buttonStats");
        buttonStats->setGeometry(QRect(660, 430, 161, 41));
        buttonCredits = new QPushButton(centralwidget);
        buttonCredits->setObjectName("buttonCredits");
        buttonCredits->setGeometry(QRect(660, 490, 161, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 952, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        welcomelabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        welcomelabel2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        welcomelabel3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        buttonBegin->setText(QCoreApplication::translate("MainWindow", "Begin", nullptr));
        buttonStats->setText(QCoreApplication::translate("MainWindow", "Statistics", nullptr));
        buttonCredits->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
