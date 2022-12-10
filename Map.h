// This project made by:
// Asaf Zafrir (205929029)

#pragma once
#include "Room.h"

//---        Map.h          ---//

class Map {
private:
	char* m_name;
	Room* m_rooms;
	int m_numberOfRooms;

public:
	//---      Methods      ---//


	//--- Getters & setters ---//
	char* getName() { return m_name; }
	void setName(char* name) { m_name = name; }

	Room* getRoom() { return m_rooms; }
	void setRoom(Room* room) { m_rooms = room; }

	int getNumberOfRooms() { return m_numberOfRooms; }
	void setNumberOfRooms(int num) { m_numberOfRooms = num; }
};