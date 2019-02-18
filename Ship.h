#pragma once
#include<iostream>
#include<string>
#include<vector>

class Ship {
private:
	int decks;
	int activeDecks;
	bool isActive; //status
	bool isPlaced; //status
	int direction; // direction 0 = up, 1 = right, 2 = down, 3 = left
	int** decksArray;
public:
	Ship(int _decks = 1, int _x = 0, int _y = 0, int _direction = 1); 
	void PlaceShip(int _x, int _y, int _direction);
	void HitShip(int _x, int _y);
	bool GetStatus();
};