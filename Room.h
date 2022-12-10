// This project made by:
// Asaf Zafrir (205929029)

#pragma once
#include "Item.h"
#include "Monster.h"

//---        Room.h          ---//

class Room {
private:
	char* m_name;
	Item* m_item;
	Monster* m_monsters;
	Room* North;
	Room* South;
	Room* East;
	Room* West;

public:

	//---      Methods      ---//



	//--- Getters & setters ---//
	char* getName() { return m_name; }
	void setName(char* name) { m_name = name; }

	Item* getItem() { return m_item; }
	void setItem(Item* item) { m_item = item; }

	Monster* getMonster() { return m_monsters; }
	void setMonster(Monster* monster) { m_monsters = monster; }
};



