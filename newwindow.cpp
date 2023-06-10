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
#include <QStringListModel>


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
    //syngał odpowiedzialny za aktualizowanie list przemdiotów dla wybranej parafii
    connect(ui->comboBoxParish, SIGNAL(currentIndexChanged(int)), this, SLOT(updateItemView(int)));
    //
}
void NewWindow::setDiocese(TDiocese* diocese)
{
    mdiocese = diocese; // Ustawienie wskaźnika na obiekt TDiocese

       for (const TParish& parish : mdiocese->parishes) {
       QString parishName = QString::fromStdString(parish.getParishName());
        ui->comboBoxParish->addItem(parishName);
     }

}
void loadItemsFromFile(TParish& parish, const QString& fileName)
{
     QFile file(fileName);
     if (file.open(QIODevice::ReadOnly | QIODevice::Text))
     {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString itemName = in.readLine().trimmed();
            if (!itemName.isEmpty())
            {
                TShop item(itemName.toStdString(), 0.0);  // Ustawienie ceny na 0.0 lub dowolną inną wartość
                parish.addItem(item);
            }
        }
        file.close();
     }
}

void NewWindow::on_ButtonBuy_clicked()
{

     // Pobranie aktualnie wybranego przedmiotu
     QString selectedItem = ui->comboBoxShop->currentText();

     // Pobranie aktualnie wybranej parafii
     QString selectedParish = ui->comboBoxParish->currentText();

     // Wyszukanie obiektu parafii na podstawie wybranej nazwy
     TParish* parish = nullptr;
     for (TParish& p : mdiocese->parishes) {
        if (p.getParishName() == selectedParish.toStdString()) {
            parish = &p;
            break;
        }
     }
     selectedItem = ui->comboBoxShop->currentText();
     QStringList partsXD = selectedItem.split('(');
     QString WhatASpagetti = partsXD.first();
     // Jeśli znaleziono parafię, dodaj przedmiot do jej wektora przedmiotów
     if (parish) {
        // Tworzenie nowego obiektu TShop na podstawie wybranego przedmiotu
        TShop newItem(WhatASpagetti.toStdString(), 0.0);  // Zakładam, że cena zostanie ustawiona na 0

        // Dodawanie nowego przedmiotu do wektora przedmiotów parafii
        parish->addItem(newItem);

        qDebug() << "Added item" << selectedItem << "to parish" << selectedParish;
     } else {
        qDebug() << "Parish not found!";
     }
     // Pobranie indeksu wybranej parafii
     int parishIndex = ui->comboBoxParish->currentIndex();

     // Inkrementacja indeksu, aby uzyskać numer porządkowy parafii (indeks + 1)
     int parishNumber = parishIndex + 1;

     // Utworzenie nazwy pliku dla danej parafii
     QString fileName = QString("parish%1Items.txt").arg(parishNumber);

     // Otwarcie pliku w trybie dopisywania
     QFile outputFile(fileName);
     if (outputFile.open(QIODevice::Append | QIODevice::Text)) {
        QString selectedItem = ui->comboBoxShop->currentText();
        QStringList parts = selectedItem.split('(');

        if (!parts.isEmpty()) {
            QString itemName = parts.first();

            QTextStream out(&outputFile);
            out << itemName << "\n";

            qDebug() << "Added item" << itemName << "to" << fileName;
        } else {
            qDebug() << "Invalid selected item format";
        }

        outputFile.close();
     } else {
        qDebug() << "Failed to open file" << fileName;
     }
     updateItemView(ui->comboBoxParish->currentIndex());
}
void NewWindow::updateItemView(int index)
{
     TParish* parish = nullptr;
     parish = &mdiocese->parishes[index];
     std::vector<TShop> items = parish->getItems();
     QStringList itemList;
     QStringListModel* model = new QStringListModel(this);
     for(const TShop &item: items)
     {
        itemList<< QString::fromStdString(item.getItemName());
     }
     model->setStringList(itemList);
     ui->listViewItems->setModel(model);
}
NewWindow::~NewWindow()
{
    delete ui;
}





