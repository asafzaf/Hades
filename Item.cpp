// This project made by:
// Asaf Zafrir (205929029)

#include <iostream>
#include "Item.h"

Item::Item() {
	m_name = nullptr;
	m_rarity = Common;
}

Item::Item(const char* name, rarity rarity) { // Constractor
	m_name = name;
	m_rarity = rarity;
};

Item::~Item() { // Distractor
	delete m_name;
}


//Item Item::operator+ (const Item& item) const {
//	return Item()
//}



Item& Item::operator=(const Item& item) {
	this->setName(item.m_name);
	this->setRarity(item.m_rarity);
	return *this;
}

Item& Item::operator++ () {
	this->setRarity((rarity)((int)this->getRarity() + 1));
	return *this;
}

Item& Item::operator++ (int) {
	Item temp;
	temp.setName(this->getName());
	temp.setRarity((rarity)((int)this->getRarity()));
	this->setRarity((rarity)((int)(this->getRarity()) + 1));
	return temp;
}

