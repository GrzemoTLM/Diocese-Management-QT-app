#include "tparish.h"

TParish::TParish(std::string parishname)
{
    this ->parishName = parishname;
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
