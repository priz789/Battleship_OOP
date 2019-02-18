#include "Ship.h"

Ship::Ship(int _decks = 1, int _x = 0, int _y = 0, int _direction = 2) 
{
	decks = _decks;
	activeDecks = decks;
	direction = _direction; // direction 0 = up, 1 = right, 2 = down, 3 = left
	decksArray = new int*[decks];
	for (int i = 0; i < decks; i++)
	{
		decksArray[i] = new int[3];
		decksArray[i][2] = 1; //Status 1 - active, 0 - down
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
			decksArray[i][0] = _x;
			decksArray[i][1] = _y - i;
		}
		break;
	case'1':
		for (int i = 0; i < decks; i++)
		{
			decksArray[i][0] = _x + i;
			decksArray[i][1] = _y;
		}
		break;
	case'2':
		for (int i = 0; i < decks; i++)
		{
			decksArray[i][0] = _x;
			decksArray[i][1] = _y + i;
		}
		break;
	case'3':
		for (int i = 0; i < decks; i++)
		{
			decksArray[i][0] = _x - i;
			decksArray[i][1] = _y;
		}
		break;
	}
	isPlaced = 1;
}

void Ship::HitShip(int _x, int _y)
{
	for (int i = 0; i < decks; i++)
	{
		if (decksArray[i][0] == _x && decksArray[i][1] == _y)
		{
			decksArray[i][2] = 0; //Status 1 - active, 0 - down
			break;
		}
	}
	activeDecks--;
}

bool Ship::GetStatus() //Status 1 - active, 0 - down
{
	if (activeDecks <= 0)
	{
		isActive = 0;
	}
	return isActive + isPlaced; 
}