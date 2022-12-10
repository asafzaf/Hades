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


	//---      Methods      ---//


	//--- Getters & setters ---//
	Map* getCurrentMap() { return m_currentMap; }
	void setCurrentMap(Map* map) { m_currentMap = map; }

	Data getData() { return m_data; }
	void setData(Data data) { m_data = data; }
};