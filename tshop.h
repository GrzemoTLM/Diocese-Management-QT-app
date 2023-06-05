#ifndef TSHOP_H
#define TSHOP_H

#include <iostream>
#include <string>

class TShop
{
public:
    TShop();
    TShop(const std::string& itemName, double itemCost);
    std::string getItemName() const;
    double getItemCost() const;

private:
    std::string itemName;
    double itemCost;
};

#endif // TSHOP_H
