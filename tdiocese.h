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
   // void addParish(const std::string& parishName);
  //  void addFaithful(int numFaithful);
   // int getTotalFaithful() const;
    void loadParishesFromFile(const std::string& fileName);
    std::string getDioceseName() const;
    std::string dioceseName; // Nazwa diecezji
    std::vector<TParish> parishes;// Tablica wskaźników na parafie
    int faithfulls;

private:
//    std::string dioceseName; // Nazwa diecezji
//    std::vector<TParish> parishes;// Tablica wskaźników na parafie
    int numParishes; // Liczba parafii
    int capacity; // Pojemność tablicy
//    int faithfulls;
    void resizeParishes(); // Funkcja do zwiększania pojemności tablicy parafii, gdy jest pełna
};

#endif // TDI0CESE_H
