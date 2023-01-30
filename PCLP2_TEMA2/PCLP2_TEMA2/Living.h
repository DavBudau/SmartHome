#pragma once
#include "IRoom.h"
class Living :
	public IRoom
{
public:
	void createRoom()
	{
		std::ofstream out("Living.txt");
		std::cout << "\n+    Fisier Living.txt creat\n";
	}
	void deleteRoom()
	{
		if (remove("Living.txt") != 0) std::cout << "Eroare la stergere Living.txt\n";
		else std::cout << "\nX    Fisier Bedroom.txt sters\n";
	}
	void readRoom()
	{
		std::ifstream in("Living.txt");
		std::string tip;
		double val;
		std::cout << "\nIstoric senzori Living:\n";
		while (in >> tip >> val)
		{
			std::cout << tip << " = " << val;
			if (tip == "Temperature") std::cout << " *C" << "\n";
			else if (tip == "Pressure") std::cout << " hPa" << "\n";
			else if (tip == "Humidity") std::cout << " %" << "\n";
		}
	}

	void updateRoom()
	{
		std::ofstream out("Living.txt");
		srand(time(NULL));
		for (int i = 0; i < sensors.size(); i++)
		{

			
			out << sensors.at(i)->getType() << " " << sensors.at(i)->readSensor() << "\n";

		}
	}
	void addSensor(ISensor* sensor)
	{
		sensors.push_back(sensor);
	}
private:
	std::vector<ISensor*> sensors;
};

