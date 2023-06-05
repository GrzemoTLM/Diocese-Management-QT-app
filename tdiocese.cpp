#include "tdiocese.h"
#include <iostream>
#include <string>

TDiocese::TDiocese(std::string DioceseName, int faithfuls, int parishesAmount, int priestsAmount, float moneyAmount)
{
    this -> DioceseName = DioceseName;
    this -> faithfuls = faithfuls;
    this -> parishesAmount = parishesAmount;
    this -> prietsAmount = priestsAmount;
    this -> moneyAmount = moneyAmount;
}

