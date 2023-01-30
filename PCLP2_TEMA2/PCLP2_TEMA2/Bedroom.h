#pragma once
#include "IRoom.h"
class Bedroom :
    public IRoom
{
public:
    void createRoom()
    {
        std::ofstream out("Bedroom.txt");
        std::cout << "\n+    Fisier Bedroom.txt creat\n";
    }
    void deleteRoom()
    {
        if (remove("Bedroom.txt") != 0) std::cout << "Eroare la stergere Bedroom.txt\n";
        else std::cout << "\nX    Fisier Bedroom.txt sters\n";
    }
    void readRoom()
    {
        std::ifstream in("Bedroom.txt");
        std::string tip;
        double val;
        std::cout << "\nIstoric senzori Bedroom:\n";
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
        std::ofstream out("Bedroom.txt");
        srand(time(NULL));
        for (int i = 0; i < sensors.size(); i++)
        {
            
            out << sensors.at(i)->getType() << " " << sensors.at(i)->readSensor() << "\n";
        }
    }

    void addSensor(ISensor *sensor)
    {
        sensors.push_back(sensor);
    }
private:
    std::vector<ISensor*> sensors;
};

