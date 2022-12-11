// This project made by:
// Asaf Zafrir (205929029)

#pragma once
#include "Data.h"

//---        Game.h          ---//

class Game {
private:
	Map* m_currentMap;
	Data m_data;

public:
	Game(Room* RoomData);
	~Game();

	//---      Methods      ---//
	void addData(); // ?
	void getMapName();
	bool checkRoomExistence(Room* room); // בדיקה האם החדר כבר קיים במפה
	bool FreeSpaceForRoom(); // בודק האם יש מקום פנוי לחדר מבחינת כיווני אוויר
	bool FreeSpace(); // בודק האם בכלל יש מקום פנוי מסביב
	//--- Getters & setters ---//
	Map* getCurrentMap() { return m_currentMap; }
	void setCurrentMap(Map* map) { m_currentMap = map; }

	Data getData() { return m_data; }
	void setData(Data data) { m_data = data; }
};