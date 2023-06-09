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
            if (parts.size() == 2)
            {
                QString parishName = parts[0].trimmed();
                int faithful = parts[1].trimmed().toInt();
                // Tworzenie obiektu TParish i dodawanie go do wektora parishes
                TParish parish(parishName.toStdString(), faithful);
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

TDiocese::~TDiocese()
{
//    // Zwolnienie pamięci przy usuwaniu obiektu TDiocese
//    for (int i = 0; i < numParishes; i++)
//    {
//        delete parishes[i];
//    }
//    delete[] parishes;
}

//void TDiocese::addParish(const std::string& parishName)
//{
//    if (numParishes == capacity)
//    {
//        resizeParishes();
//    }

//    TParish* parish = new TParish(parishName,faithfulls);
//    parishes[numParishes] = parish;
//    numParishes++;
//}

//void TDiocese::addFaithful(int numFaithful)
//{
//    int totalFaithful = 0;
//    for (int i = 0; i < numParishes; i++)
//    {
//        TParish* parish = parishes[i];
//        totalFaithful += parish->getFaithful();
//    }

//    totalFaithful += numFaithful;

//    this -> faithfulls = totalFaithful;
//}


//int TDiocese::getTotalFaithful() const
//{
//    int totalFaithful = 0;
//    for (int i = 0; i < numParishes; i++)
//    {
//        TParish* parish = parishes[i];
//        totalFaithful += parish->getFaithful();
//    }
//    return totalFaithful;
//}

//void TDiocese::resizeParishes()
//{
//    int newCapacity = capacity * 2 + 1;
//    TParish** newParishes = new TParish*[newCapacity];
//    for (int i = 0; i < numParishes; i++)
//    {
//        newParishes[i] = parishes[i];
//    }
//    delete[] parishes;
//    parishes = newParishes;
//    capacity = newCapacity;
//}
