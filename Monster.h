// This project made by:
// Asaf Zafrir (205929029)

#pragma once

//---        Monster.h          ---//

class Monster {
private:
	char* m_name;
	int m_level;

public:
	Monster(char* name);
	~Monster();

	//---      Methods      ---//
	Monster* operator+=(Monster& monster); // Connect between Monsters?
	Monster& operator++(); // ++Monster (level up).

	//--- Getters & setters ---//
	char* getName() { return m_name; }
	void setName(char* name) { m_name = name; }

	int getLevel() { return m_level; }
	void setLevel(int level) { m_level = level; }
};