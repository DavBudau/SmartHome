#pragma once
#include "ISensor.h"
class Humidity :
    public ISensor
{
public:
    double readSensor()
    {
        return generateHumidity();
    }
    std::string getType() 
    { 
        return "Humidity"; 
    }
private:
    double generateHumidity()
    {
        
        return rand() % 100;
    }
};

