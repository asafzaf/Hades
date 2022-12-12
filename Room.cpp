#include <iostream>
#include "Room.h"

Room::Room(char* name, WindDir dir, Room* nextRoom) {
	int namelen = strlen(name);
	m_name = new char[namelen + 1];
	strcpy(m_name, name);

	switch (dir)
	{
	case 0:
		South = nextRoom;
		East = nullptr;
		North = nullptr;
		West = nullptr;
		nextRoom->setNorth(this);
		break;
	case 1:
		South = nullptr;
		East = nextRoom;
		North = nullptr;
		West = nullptr;
		nextRoom->setWest(this);
		break;
	case 2:
		South = nullptr;
		East = nullptr;
		North = nextRoom;
		West = nullptr;
		nextRoom->setSouth(this);
		break;
	case 3:
		South = nullptr;
		East = nullptr;
		North = nullptr;
		West = nextRoom;
		nextRoom->setEast(this);
		break;
	default:
		std::cout << "Error!" << std::endl;
	}
}