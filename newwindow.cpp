#include "newwindow.h"
#include "qstandarditemmodel.h"
#include "ui_newwindow.h"
#include "tshop.h"
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

        shopItems = {
        TShop("Organy barokowe", 5000.0),
        TShop("Organy współczesne", 10000.0),
        TShop("Zestaw ornatów rzymskich", 2000.0),
        TShop("Zestaw ornatów gotyckich", 1800.0),
        TShop("Lniana bielizna kielichowa", 500.0),
        TShop("Dębowe ławki", 1500.0),
        TShop("Cedrowe konfesjonały", 2500.0),
        TShop("Kryształowy żyrandol", 3000.0),
        TShop("Nowy zestaw ksiąg liturgicznych", 4000.0),
        TShop("Mszał z roku 1922", 1000.0)
    };

    // Dodawanie obiektów TShop do ComboBoxShop
    for (const TShop& item : shopItems) {
        QString itemName = QString::fromStdString(item.getItemName());
        double itemCost = item.getItemCost();

        // Tworzenie formatowanego tekstu z ceną na zielono
        QString itemText = QString("%1 (%2 zł)").arg(itemName).arg(itemCost);
        ui->comboBoxShop->addItem(itemText);
    }


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

NewWindow::~NewWindow()
{
    delete ui;
}
