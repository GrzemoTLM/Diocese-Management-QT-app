#ifndef TDI0CESE_H
#define TDI0CESE_H
#include "tparish.h"
#include <iostream>
#include <string>
#include <fstream>
#include <QString>
#include <QFile>
#include <QVector>
#include <QTextStream>
class TDiocese
{
public:
    TDiocese(const std::string& name);
    ~TDiocese();
    std::vector<TParish> parishes;// Tablica wskaźników na parafie
    void loadParishesFromFile(const std::string& fileName);
    std::string getDioceseName() const;
    int faithfulls;

private:

    int numParishes; // Liczba parafii
    void resizeParishes(); // Funkcja do zwiększania pojemności tablicy parafii, gdy jest pełna
    std::string dioceseName; // Nazwa diecezji

};

#endif // TDI0CESE_H
