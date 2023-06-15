#ifndef TPARISH_H
#define TPARISH_H

#include "tpriest.h"
#include "tshop.h"
#include <iostream>
#include <string>
#include <vector>

class TParish
{
public:
    TParish(std::string parishname, int faithful);
    ~TParish();
    void addPriest(const TPriest& priest);
    void addItem(const TShop& shopItem);
    std::string getParishName() const;
    std::vector<TPriest> getPriests() const;
    std::vector<TShop> getItems() const;
    int getFaithful() const;
    double getBudget() const;
    void setBudget(double budget);
    void clearItems();

protected:

private:
    std::string parishName;
    int faithful;
    double parishBudget;
    std::vector<TPriest> priests; // Kontener na księży
    std::vector<TShop> items; // Kontener na przedmioty
};

#endif // TPARISH_H
