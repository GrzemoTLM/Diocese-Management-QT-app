#include "tshop.h"
#include <string>

TShop::TShop()
    : itemName("xd"), itemCost(0.0)
{
}

TShop::TShop(const std::string& itemName, double itemCost)
    : itemName(itemName), itemCost(itemCost)
{
}

std::string TShop::getItemName() const
{
    return itemName;
}

double TShop::getItemCost() const
{
    return itemCost;
}
