#pragma once
#include "ISensor.h"
class Temperature : public ISensor
{
public:
    double readSensor()
    {
        return generateTemperature();
    }
    std::string getType()
    {
        return "Temperature";
    }
private:
    double generateTemperature()
    {
        
        return rand() % 120 - 40;
    }
};

