#pragma once
#include<iostream>
#include "Ship.h"

const int FIELD_SIZE_Glob = 10;
const int FOUR_DECKS_Max = 1;
const int THREE_DECKS_Max = 2;
const int TWO_DECKS_Max = 3;
const int ONE_DECKS_Max = 4;
const int MAX_SHIPS = 10;

class Field {
private:
	int cells[FIELD_SIZE_Glob][FIELD_SIZE_Glob];
	Ship arrayOfShips[MAX_SHIPS];
	int fourDecks;
	int threeDecks;
	int twoDecks;
	int oneDecks;
public:
	Field();
	void DrawField();
	void PlaceAllShips();
	void PlaceShip(int _decks, int _counter);
	void UpdateShipStatus(int _decks, int _counter);
};
