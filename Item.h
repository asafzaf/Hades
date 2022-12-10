// This project made by:
// Asaf Zafrir (205929029)

#pragma once

//---        Item.h          ---//

enum rarity {
	Common,
	Uncommon,
	Epic,
	Legendary
};

class Item {
private:
	char* m_name;
	enum rarity m_rarity;

public:
	//---      Methods      ---//
	Item& operator+= (Item* item);
	Item  operator+  (Item* item);
	Item& operator=  (Item* item);
	Item& operator++ ();
	Item  operator++ (int);

	//--- Getters & setters ---//
	char* getName() { return m_name; }
	void setName(char* name) { m_name = name; }

	 rarity getRarity() { return m_rarity; }
	 void setRarity(rarity rar) { m_rarity = rar; }
};