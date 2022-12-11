#include "data.h"

Data::Data(Room* RoomData) {
	m_roomData = RoomData;
	m_mapsData = nullptr;
}

Data::~Data() {
	delete m_mapsData;
	delete m_roomData;
}