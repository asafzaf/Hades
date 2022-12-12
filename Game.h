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
	bool checkRoomExistence(Room* room); // Checking if there is a Room with the same Name.
	bool FreeSpaceForRoom(); // Check if there is a space in a speciffic wind direction.
	bool FreeSpace(); // Checking if there any free space in all wind directions.

	//--- Getters & setters ---//
	Map* getCurrentMap() { return m_currentMap; }
	void setCurrentMap(Map* map) { m_currentMap = map; }

	Data getData() { return m_data; }
	void setData(Data data) { m_data = data; }
};