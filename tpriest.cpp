#include "tpriest.h"
#include <iostream>
#include <string>

TPriest::TPriest()
    : firstName(""), lastName(""), position("")
{
}

TPriest::TPriest(const std::string& firstName, const std::string& lastName, const std::string& position)
    : firstName(firstName), lastName(lastName), position(position)
{
}

std::string TPriest::getFirstName() const
{
    return firstName;
}

std::string TPriest::getLastName() const
{
    return lastName;
}

std::string TPriest::getPosition() const
{
    return position;
}
