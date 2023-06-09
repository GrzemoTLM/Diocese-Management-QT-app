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

}
