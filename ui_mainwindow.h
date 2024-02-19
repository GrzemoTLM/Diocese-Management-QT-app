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
#include <QtWidgets/QRadioButton>
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
    QRadioButton *radioButton;
    QLabel *LabelNote;
    QLabel *welcomelabel_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(952, 649);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        welcomelabel = new QLabel(centralwidget);
        welcomelabel->setObjectName("welcomelabel");
        welcomelabel->setGeometry(QRect(110, 40, 731, 161));
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
        buttonBegin->setGeometry(QRect(640, 320, 191, 81));
        buttonBegin->setStyleSheet(QString::fromUtf8("font: 26pt;"));
        buttonStats = new QPushButton(centralwidget);
        buttonStats->setObjectName("buttonStats");
        buttonStats->setGeometry(QRect(640, 430, 191, 61));
        buttonStats->setStyleSheet(QString::fromUtf8("font: 24pt;"));
        buttonCredits = new QPushButton(centralwidget);
        buttonCredits->setObjectName("buttonCredits");
        buttonCredits->setGeometry(QRect(640, 500, 191, 51));
        buttonCredits->setStyleSheet(QString::fromUtf8("font: 26pt"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(180, 550, 161, 31));
        radioButton->setStyleSheet(QString::fromUtf8(""));
        LabelNote = new QLabel(centralwidget);
        LabelNote->setObjectName("LabelNote");
        LabelNote->setGeometry(QRect(340, 540, 61, 51));
        welcomelabel_2 = new QLabel(centralwidget);
        welcomelabel_2->setObjectName("welcomelabel_2");
        welcomelabel_2->setGeometry(QRect(110, 40, 731, 161));
        welcomelabel_2->setTextFormat(Qt::MarkdownText);
        welcomelabel_2->setScaledContents(false);
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
        radioButton->setText(QCoreApplication::translate("MainWindow", "Gregorian Chant", nullptr));
        LabelNote->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        welcomelabel_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
