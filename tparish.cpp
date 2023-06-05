#include "tparish.h"
#include <string>
TParish::TParish()
    : parishName("")
{
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
    // Puste metody, aplikacja QT będzie obsługiwać wyświetlanie informacji w inny sposób
}

void TParish::printItems() const
{
    // Puste metody, aplikacja QT będzie obsługiwać wyświetlanie informacji w inny sposób
}
