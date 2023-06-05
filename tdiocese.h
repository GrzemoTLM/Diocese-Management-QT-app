#ifndef TDIOCESE_H
#define TDIOCESE_H
#include<iostream>
#include<string>

class TDiocese
{
public:
    TDiocese(std::string DioceseName, int faithfuls, int parishesAmount, int priestsAmount, float moneyAmount);


protected:

private:
    std::string DioceseName;
    int faithfuls;
    int parishesAmount;
    int prietsAmount;
    float moneyAmount;


};

#endif // TDIOCESE_H
