#include "House.h"

void House::addRoom(IRoom *camera)
{
	rooms.push_back(camera);
	rooms.at(rooms.size()-1)->createRoom();
}

void House::removeRoom(int id)
{
	rooms.at(id)->deleteRoom();
	rooms.erase(rooms.begin()+id);
}

void House::collectRoomData()
{
	for (int i = 0; i < rooms.size(); i++)
		rooms.at(i)->updateRoom();
}

void House::viewRoomData()
{
	for (int i = 0; i < rooms.size(); i++)
		rooms.at(i)->readRoom();

}