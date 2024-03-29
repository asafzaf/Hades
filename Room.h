// This project made by:
// Asaf Zafrir (205929029)

#pragma once
#include "Item.h"
#include "Monster.h"

//---        Room.h          ---//

enum WindDir {
	North,
	West,
	South,
	East
};

class Room {
private:
	const char* m_name;
	Item* m_item;
	Monster* m_monsters;
	Room* North;
	Room* South;
	Room* East;
	Room* West;
	Room* next;
public:
	Room(const char* name, WindDir dir, Room* nextRoom);
	Room();

	//---      Methods      ---//
	Room* operator+=(Room* room);


	//--- Getters & setters ---//
	const char* getName() { return m_name; }
	void setName(const char* name) { m_name = name; }

	Item* getItem() { return m_item; }
	void setItem(Item* item) { m_item = item; }

	Monster* getMonster() { return m_monsters; }
	void setMonster(Monster* monster) { m_monsters = monster; }

	void setNorth(Room* room) { North = room; }
	void setWest(Room* room) { West = room; }
	void setSouth(Room* room) { South = room; }
	void setEast(Room* room) { East = room; }

};



