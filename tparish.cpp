#include "tparish.h"
#include <QDebug>//>
#include "tshop.h"
TParish::TParish(std::string parishname, int am)
{
    this ->parishName = parishname;
    this ->faithful = am;
}

TParish::~TParish()
{
    // Nie ma potrzeby ręcznego zwalniania pamięci, vector automatycznie zarządza pamięcią
}

void TParish::addPriest(const TPriest& priest)
{
    priests.push_back(priest);
}

std::string TParish::getParishName() const {
    return parishName;
}
void TParish::addItem(const TShop& shopItem)
{
    items.push_back(shopItem);
}

std::vector<TPriest> TParish::getPriests() const
{
    return priests;
}


std::vector<TShop> TParish::getItems() const
{
    return items;
}
void TParish::clearItems()
{
    items.clear();
}
double TParish::getBudget() const
{
    return parishBudget;
}
void TParish::setBudget(double budget)
{
    parishBudget = budget;
}
int TParish::getFaithful() const
{
    int totalFaithful = 0;
    // Przeiterowanie przez wszystkich wiernych i zsumowanie ich liczby
    // ...

    return totalFaithful;
}
