// This project made by:
// Asaf Zafrir (205929029)

#include <iostream>
#include "Map.h"

Map::Map() {
	char* buff = new char[20];
	std::cout << "Please enter Map name: ";
	std::cin >> buff;
	int len = strlen(buff);
	m_name = new char[len + 1];
	strncpy(m_name, buff, len);

	m_numberOfRooms = 0;
	m_rooms = nullptr;

	std::cout << "**********************" << std::endl
		<< "Map " << m_name << " has been created!" << std::endl
		<< "**********************" << std::endl
		<< std::endl;

}

Map::~Map() {
	delete m_name;
	delete m_rooms;
}

Map Map::operator+(Map& map) {
	Map* temp = new Map();

	return
}

Map& Map::operator=(Map* map) { // assigment for room
	char* tempname = map->getName();
	int len = strlen(tempname);
	if (m_name != nullptr) {
		delete m_name;
	}
	m_name = new char[len+1];


	m_rooms = map->getRoom();
	m_numberOfRooms = map->getNumberOfRooms();

}

bool Map::checkRoomOnlist(const Room& room) { // Check if there is the room on list.
	Room* temp_ptr = m_rooms;
	while (temp_ptr != nullptr) {
		if (! (strcmp( m_rooms->getName(), temp_ptr->getName() ) ) ) {
			return true;
		}
		temp_ptr++;
	}
	return false;
}