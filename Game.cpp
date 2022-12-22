// This project made by:
// Asaf Zafrir (205929029)

#include <iostream>
#include "Game.h"

Game::Game() : m_data() {
	m_currentMap = nullptr;
}

void Game::addRoom() {
	if (m_currentMap == nullptr) {
		std::cout << "*** Creating First Room ***" << std::endl;
	}
	else {
		std::cout << "*** Adding Room ***" << std::endl;
	}
	std::cout	<< std::endl
		<< "**********************" << std::endl
		<< std::endl
		<< "Please Select room: " << std::endl;
	printMapsData();


	Room* tempPtrRoom = m_currentMap->getRoom();
	
	m_currentMap->setRoom(tempPtrRoom);
}

void Game::printMapsData() {
	Room* tempRoomData = getData().getRoomData();
	for (int i = 0; i < 10; i++) {
		std::cout << i + 1 << " | "
			<< tempRoomData[i].getName() << std::endl;
	}
}

void Game::printItemsData() {
	Item* tempItemData = getData().getItemData();
	for (int i = 0; i < 10; i++) {
		std::cout << i + 1 << " | "
			<< tempItemData[i].getName() << std::endl;
	}
}

Game::~Game() {
	delete m_currentMap;
}