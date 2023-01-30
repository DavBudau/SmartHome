#pragma once
#include "ISensor.h"
class Pressure :
    public ISensor
{
public :
    double readSensor()
    {
        return generatePressure();
    }
    std::string getType()
    {
        return "Pressure";
    }
private: 
    double generatePressure()
    {
        
        return rand() % 800 + 300;
    }
};

