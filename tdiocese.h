#ifndef TDI0CESE_H
#define TDI0CESE_H
#include "tparish.h"
#include <iostream>
#include <string>

class TDiocese
{
public:
    TDiocese(const std::string& name);
    ~TDiocese();
    void addParish(const std::string& parishName);
    void addFaithful(int numFaithful);
    int getTotalFaithful() const;
    std::string getDioceseName() const;

private:
    std::string dioceseName; // Nazwa diecezji
    TParish** parishes; // Tablica wskaźników na parafie
    int numParishes; // Liczba parafii
    int capacity; // Pojemność tablicy
    int faithfulls;
    void resizeParishes(); // Funkcja do zwiększania pojemności tablicy parafii, gdy jest pełna
};

#endif // TDI0CESE_H
