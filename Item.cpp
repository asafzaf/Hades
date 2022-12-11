#include <iostream>
#include "Item.h"

Item::Item(char* name, rarity rarity) { // Constractor
	int namelen = strlen(name);
	m_name = new char[namelen + 1];
	strcpy(m_name, name);
	m_rarity = rarity;
};

Item::~Item() { // Distractor
	delete m_name;
}


Item Item::operator+ (Item& item) {

}