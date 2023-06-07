#include "tdiocese.h"
#include <string>

TDiocese::TDiocese(const std::string& name)
    : dioceseName(name), parishes(nullptr), numParishes(0), capacity(0), faithfulls(0)
{
}
std::string TDiocese::getDioceseName() const
{
    return dioceseName;
}
TDiocese::~TDiocese()
{
    // Zwolnienie pamięci przy usuwaniu obiektu TDiocese
    for (int i = 0; i < numParishes; i++)
    {
        delete parishes[i];
    }
    delete[] parishes;
}

void TDiocese::addParish(const std::string& parishName)
{
    if (numParishes == capacity)
    {
        resizeParishes();
    }

    TParish* parish = new TParish(parishName);
    parishes[numParishes] = parish;
    numParishes++;
}

void TDiocese::addFaithful(int numFaithful)
{
    int totalFaithful = 0;
    for (int i = 0; i < numParishes; i++)
    {
        TParish* parish = parishes[i];
        totalFaithful += parish->getFaithful();
    }

    totalFaithful += numFaithful;

    this -> faithfulls = totalFaithful;
}


int TDiocese::getTotalFaithful() const
{
    int totalFaithful = 0;
    for (int i = 0; i < numParishes; i++)
    {
        TParish* parish = parishes[i];
        totalFaithful += parish->getFaithful();
    }
    return totalFaithful;
}

void TDiocese::resizeParishes()
{
    int newCapacity = capacity * 2 + 1;
    TParish** newParishes = new TParish*[newCapacity];
    for (int i = 0; i < numParishes; i++)
    {
        newParishes[i] = parishes[i];
    }
    delete[] parishes;
    parishes = newParishes;
    capacity = newCapacity;
}
