#include "newwindow.h"
#include "ui_newwindow.h"
#include "tshop.h"
#include "tparish.h"
#include <QPixmap>
#include <QPalette>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QStandardItemModel>



NewWindow::NewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewWindow)


{
    ui->setupUi(this);
    QVector<TShop> shopItems;
    QFile file(":/new/prefix2/items.csv");
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QTextStream in(&file);
        while(!in.atEnd())
        {
            QString line = in.readLine();
            QStringList parts = line.split(",");
            if(parts.size()==2)
            {
                QString itemName = parts[0].trimmed();
                double itemCost = parts[1].trimmed().toDouble();
                TShop item(itemName.toStdString(), itemCost);
                shopItems.push_back(item);
            }
        }
        file.close();
    }


    // Dodawanie obiektów TShop do ComboBoxShop
    for (const TShop& item : shopItems) {
        QString itemName = QString::fromStdString(item.getItemName());
        double itemCost = item.getItemCost();

        // Tworzenie formatowanego tekstu z ceną na zielono
        QString itemText = QString("%1 (%2 zł)").arg(itemName).arg(itemCost);
        ui->comboBoxShop->addItem(itemText);
        }
//    //Dodawanie obiektów Tparish do ComboBoxParish
//    for (const TParish& parish : m_diocese->parishes) {
//        QString parishName = QString::fromStdString(parish.getParishName());
//        ui->comboBoxParish->addItem(parishName);
//    }


    ui->LabelComboBox->setText("Choose parish to manage");
    ui->LabelComboBox->setStyleSheet("font-size: 22px; font-family: Calibri;");
    ui->LabelPriests->setText("Priests");
    ui->LabelPriests->setStyleSheet("font-size: 22px; font-family: Calibri;");
    ui->LabelBudget->setStyleSheet("background-color: grey; border: 1px solid black; font-size: 22px; font-family: Calibri;");
    ui->LabelBudget->setText("Budget");
    ui->LabelShop->setText("Diocesian Shop");
    ui->LabelShop->setStyleSheet("font-size: 22px; font-family: Calibri;");
    ui->LabelEQ->setText("Parish Inventory");
    ui->LabelEQ->setStyleSheet("font-size: 22px; font-family: Calibri;");
    QPixmap obrazek2(":/new/prefix1/pictrues/shoplogo.png");
    ui->LabelShopPic->setPixmap(obrazek2.scaled(ui->LabelShopPic->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));
}
void NewWindow::setDiocese(TDiocese* diocese)
{
    m_diocese = diocese; // Ustawienie wskaźnika na obiekt TDiocese
}
NewWindow::~NewWindow()
{
    delete ui;
}
