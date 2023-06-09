#include "tparish.h"

TParish::TParish(std::string parishname, int am)
{
    this ->parishName = parishname;
    this ->faithful = am;
}

TParish::~TParish()
{
    // Nie ma potrzeby ręcznego zwalniania pamięci, vector automatycznie zarządza pamięcią
}

void TParish::addPriest(const std::string& firstName, const std::string& lastName, const std::string& position)
{
    TPriest priest(firstName, lastName, position);
    priests.push_back(priest);
}
std::string TParish::getParishName() const {
    return parishName;
}
void TParish::addItem(const TShop& shopItem)
{
    items.push_back(shopItem);
}

void TParish::printPriests() const
{
    // Wypisanie księży
}

void TParish::printItems() const
{
    // Wypisanie przedmiotów
}

int TParish::getFaithful() const
{
    int totalFaithful = 0;
    // Przeiterowanie przez wszystkich wiernych i zsumowanie ich liczby
    // ...

    return totalFaithful;
}
