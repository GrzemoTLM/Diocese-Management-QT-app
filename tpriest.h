#ifndef TPRIEST_H
#define TPRIEST_H

#include <iostream>
#include <string>
#include <vector>

class TPriest
{
public:
    friend class TParish; // Deklaracja przyjaźni z klasą TParish
    TPriest();
    TPriest(const std::string& firstName, const std::string& lastName, const std::string& position);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getposition() const;


private:
    std::string firstName;
    std::string lastName;
    std::string position;

};

#endif // TPRIEST_H
