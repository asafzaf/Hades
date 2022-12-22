// This project made by:
// Asaf Zafrir (205929029)

#include "data.h"

Data::Data() {
	m_roomData = new Room[10];
	m_roomData[0].setName("Fire Room");
	m_roomData[1].setName("Ice Room");
	m_roomData[2].setName("Lava Room");
	m_roomData[3].setName("Rain Room");
	m_roomData[4].setName("Shadow Room");
	m_roomData[5].setName("Electric Room");
	m_roomData[6].setName("Rock Room");
	m_roomData[7].setName("Optic Room");
	m_roomData[8].setName("Cobra Room");
	m_roomData[9].setName("Capara Room");
	
	m_ItemData = new Item[10];
	m_ItemData[0].setName("Sword");
	m_ItemData[1].setName("Blade");
	m_ItemData[2].setName("Bow");
	m_ItemData[3].setName("Potion");
	m_ItemData[4].setName("Rope");
	m_ItemData[5].setName("Scroll");
	m_ItemData[6].setName("Boots");
	m_ItemData[7].setName("Helmet");
	m_ItemData[8].setName("Glasses");
	m_ItemData[9].setName("Pet");

	m_mapsData = nullptr;
}

Data::~Data() {
	if (m_mapsData != nullptr) {
		delete m_mapsData;
	}
	delete[] m_roomData;
	delete[] m_ItemData;
}