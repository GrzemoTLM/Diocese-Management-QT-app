#include "tdiocese.h"
#include <string>
#include <vector>
#include "tparish.h"
#include <fstream>
#include <QString>
#include <QFile>
#include <QVector>
#include <QTextStream>
#include <QDebug>


TDiocese::TDiocese(const std::string& name)
    : dioceseName(name)
{
}
std::string TDiocese::getDioceseName() const
{
    return dioceseName;
}
void TDiocese::loadParishesFromFile(const std::string& fileName)
{
    QFile file(QString::fromStdString(fileName));
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList parts = line.split(',');
            if (parts.size() == 3) // Dodatkowy warunek dla trzech części (nazwa parafii, wierni, budżet)
            {
                QString parishName = parts[0].trimmed();
                int faithful = parts[1].trimmed().toInt();
                double budget = parts[2].trimmed().toDouble(); // Wczytanie budżetu jako trzeciej części

                // Tworzenie obiektu TParish i dodawanie go do wektora parishes
                TParish parish(parishName.toStdString(), faithful);
                parish.setBudget(budget); // Ustawienie wczytanego budżetu

                parishes.push_back(parish);
            }
        }

        file.close();
    }
    else
    {
        // Obsługa błędu otwarcia pliku
        qDebug() << "Nie można otworzyć pliku:" << QString::fromStdString(fileName);
    }
}

void TDiocese::changeBudget(double price)
{
    DioceseBudget-=price;
}
double TDiocese::getDioceseBudget() const
{
    return DioceseBudget;
}
TDiocese::~TDiocese()
{

}
