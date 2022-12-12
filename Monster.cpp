#include <iostream>
#include "Monster.h"

Monster::Monster(char* name) {
	int namelen = strlen(name);
	m_name = new char[namelen + 1];
	strcpy(m_name, name);

}

Monster::~Monster() {
	delete m_name;
}

Monster* Monster::operator+=(Monster& monster) {

}

Monster& Monster::operator++() { // ++Monster (level up).
	this->setLevel(this->getLevel() + 1);
	return *this;
}