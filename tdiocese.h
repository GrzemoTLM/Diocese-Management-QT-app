#ifndef TDI0CESE_H
#define TDI0CESE_H
#include "tparish.h"
#include <iostream>
#include <string>


class TDiocese
{
public:
    TDiocese();
    ~TDiocese();
    void addParish(const std::string& parishName);
    void addFaithful(int numFaithful);
    int getTotalFaithful() const;

private:
    TParish** parishes; // Tablica wskaźników na parafie
    int numParishes; // Liczba parafii
    int capacity; // Pojemność tablicy
    int faithfulls;
    void resizeParishes(); // Funkcja do zwiększania pojemności tablicy parafii, gdy jest pełna
};

#endif // TDI0CESE_H
