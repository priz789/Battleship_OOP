#include "Ship.h"

Ship::Ship(int _decks, int _x, int _y, int _direction) 
{
	decks = _decks;
	activeDecks = decks;
	direction = _direction; // direction 0 = up, 1 = right, 2 = down, 3 = left
	for (int i = 0; i < decks; i++)
	{
		Deck d;
		decksArray.push_back(d);
		decksArray[i].status = 3;// similar to Field class cell status: 0 - available, non-hit; 1 - not-available, non-hit; 2 - not-available, hit; 3 - occupied, non-hit; 4 - occupied, hit 
	}
	PlaceShip(_x, _y, _direction);
	isActive = 1;
}

void Ship::PlaceShip(int _x, int _y, int _direction)
{
	direction = _direction; // direction 0 = up, 1 = right, 2 = down, 3 = left
	switch (direction)
	{
	case'0':
		for (int i = 0; i < decks; i++)
		{
			decksArray[i].x = _x; // Coords
			decksArray[i].y = _y - i; // Coords
		}
		break;
	case'1':
		for (int i = 0; i < decks; i++)
		{
			decksArray[i].x = _x + i;
			decksArray[i].y = _y;
		}
		break;
	case'2':
		for (int i = 0; i < decks; i++)
		{
			decksArray[i].x = _x;
			decksArray[i].y = _y + i;
		}
		break;
	case'3':
		for (int i = 0; i < decks; i++)
		{
			decksArray[i].x = _x - i;
			decksArray[i].y = _y;
		}
		break;
	}
	isPlaced = 1;
}

void Ship::HitShip(int _x, int _y)
{
	for (int i = 0; i < decks; i++)
	{
		if (decksArray[i].x == _x && decksArray[i].y == _y)
		{
			decksArray[i].status = 4; // similar to Field class cell status: 0 - available, non-hit; 1 - not-available, non-hit; 2 - not-available, hit; 3 - occupied, non-hit; 4 - occupied, hit
			break;
		}
	}
	activeDecks--;
}

bool Ship::GetStatus() //ShipStatus: 1 - active, 0 - down
{
	if (activeDecks <= 0)
	{
		isActive = 0;
	}
	return isActive&isPlaced; 
}

int Ship::SetFieldCellStatus(int _deckNum)
{
	return decksArray[_deckNum].status;
}

int Ship::GetX(int _deckNum)
{
	return decksArray[_deckNum].x;
}

int Ship::GetY(int _deckNum)
{
	return decksArray[_deckNum].y;
}

int Ship::GetDirection()
{
	return this->direction;
}