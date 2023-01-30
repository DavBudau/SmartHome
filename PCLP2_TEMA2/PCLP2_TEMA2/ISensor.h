#pragma once
#include <ctime>
#include <cstdlib>
#include <string>
class ISensor
{
public:
	virtual double readSensor() = 0;
	virtual std::string getType() = 0;
};

