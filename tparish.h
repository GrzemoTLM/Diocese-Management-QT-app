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
    void addPriest(const std::string& firstName, const std::string& lastName, const std::string& position);
    void addItem(const TShop& shopItem);
    void printPriests() const;
    void printItems() const;
    int getFaithful() const;

protected:

private:
    std::string parishName;
    int faithful;
    std::vector<TPriest> priests; // Kontener na księży
    std::vector<TShop> items; // Kontener na przedmioty
};

#endif // TPARISH_H
