// This project made by:
// Asaf Zafrir (205929029)

#pragma once
#include "Map.h"
#include "Room.h"

//---        Dish.h          ---//

class Data {
private:
	Map* m_mapsData;
	Room* m_roomData;
	
public:
	//---      Methods      ---//
	Data(Room* RoomData);
	~Data();

	void addMap(Map* mapData); // Add new Map.
	bool mapNameCheck(Map* mapData); // Checking if there is a Map with same Name.

	//--- Getters & setters ---//
	Map* getMapData() { return m_mapsData; }
	void setMapDate(Map* mapdata) { m_mapsData = mapdata; }

	Room* getRoomData() { return m_roomData; }
	void setRoomData(Room* roomdata) { m_roomData; }
};