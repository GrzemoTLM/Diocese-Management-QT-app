/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *titleLabel;
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditName;
    QLineEdit *lineEditSurename;
    QLineEdit *lineEditRole;
    QWidget *page_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(469, 393);
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 0, 441, 381));
        page = new QWidget();
        page->setObjectName("page");
        titleLabel = new QLabel(page);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(130, 20, 181, 81));
        titleLabel->setStyleSheet(QString::fromUtf8("font: 26pt \"Impact\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.495 rgba(255, 255, 255, 255), stop:0.505 rgba(255, 0, 0, 255), stop:1 rgba(255, 0, 0, 255));"));
        buttonBox = new QDialogButtonBox(page);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(140, 260, 166, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEditName = new QLineEdit(page);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(110, 120, 211, 31));
        lineEditSurename = new QLineEdit(page);
        lineEditSurename->setObjectName("lineEditSurename");
        lineEditSurename->setGeometry(QRect(110, 200, 211, 31));
        lineEditRole = new QLineEdit(page);
        lineEditRole->setObjectName("lineEditRole");
        lineEditRole->setGeometry(QRect(110, 160, 211, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(Dialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("Dialog", "ADD PRIEST", nullptr));
        lineEditName->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
        lineEditSurename->setText(QCoreApplication::translate("Dialog", "Role", nullptr));
        lineEditRole->setText(QCoreApplication::translate("Dialog", "Surname", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
