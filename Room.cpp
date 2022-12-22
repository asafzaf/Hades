// This project made by:
// Asaf Zafrir (205929029)

#include <iostream>
#include "Room.h"

Room::Room(const char* name, WindDir dir, Room* nextRoom) {
	
	m_name = name;
	
	/*int namelen = strlen(name);
	m_name = new char[namelen + 1];
	strcpy(m_name, name);*/

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

Room::Room() {
	m_name = nullptr;
	m_item = new Item[10];
	m_monsters = nullptr;
	North = nullptr;
	South = nullptr;
	East = nullptr;
	West = nullptr;
}

Room* Room::operator+=(Room* room) {
	Room* temp = new Room();

	next = room;

}