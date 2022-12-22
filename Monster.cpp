// This project made by:
// Asaf Zafrir (205929029)

#include <iostream>
#include "Monster.h"

Monster::Monster(char* name) {
	int namelen = strlen(name);
	m_name = new char[namelen + 1];
	strcpy(m_name, name);
	m_level = 1;
}

Monster::~Monster() {
	delete m_name;
}

Monster& Monster::operator+=(Monster& monster) {
	if (strcmp(m_name, monster.getName()) == 0) {
		if (m_level + monster.getLevel() > 5) {
			Monster temp(m_name);
			return temp;
		}
		else m_level += monster.getLevel();
		return *this;
	}
	else {
		std::cout << "Not the same monster!" << std::endl;
		return *this;
	}
}

Monster& Monster::operator=(const Monster& monster) {
	int namelen = strlen(monster.m_name);
	m_name = new char[namelen + 1];
	strcpy(m_name, monster.m_name);
	m_level = monster.m_level;
	return *this;
}

Monster& Monster::operator++() { // ++Monster (level up).
	this->setLevel(this->getLevel() + 1);
	return *this;
}