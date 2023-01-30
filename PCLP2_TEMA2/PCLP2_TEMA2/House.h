#pragma once
#include "Bedroom.h"
#include "Bathroom.h"
#include "Kitchen.h"
#include "Living.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Pressure.h"

class House
{
private: 
	std::vector<IRoom*> rooms;

public:
	void addRoom(IRoom*);
	void removeRoom(int);
	void collectRoomData();
	void viewRoomData();
};

