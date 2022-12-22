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
	const char* m_name;
	enum rarity m_rarity;

public:
	Item();
	Item(const char* name, rarity rarity);
	~Item();

	//---      Methods      ---//
	Item& operator+= (Item* item);
	Item  operator+  (const Item& item) const;
	Item& operator=  (Item* item);
	Item& operator++ ();
	Item& operator++ (int);

	//--- Getters & setters ---//
	const char* getName() { return m_name; }
	void setName(const char* name) { m_name = name; }

	 rarity getRarity() { return m_rarity; }
	 void setRarity(rarity rar) { m_rarity = rar; }
};