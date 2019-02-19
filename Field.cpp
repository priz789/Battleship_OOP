#include "Field.h"

using namespace std;

Field::Field()
{
	int fourDecks = 0;
	int threeDecks = 0;
	int twoDecks = 0;
	int oneDecks = 0;
	for (int i = 0; i < FIELD_SIZE_Glob; i++)
	{
		for (int j = 0; j < FIELD_SIZE_Glob; j++)
		{
			cells[i][j] = 0; //0 - aveliable, non-hit; 1 - not-aveliable, non-hit; 2 - not-aveliable, hit; 3 - occupied, non-hit; 4 - occupied, hit 
		}
	}
}

void Field::DrawField()
{
	for (int i = 0; i < FIELD_SIZE_Glob + 1; i++)
	{
		for (int j = 0; j < FIELD_SIZE_Glob + 2; j++)
		{
			if(i < 1 || j < 2)
			{
				if (i == 0 && j < 2)
				{
					cout << ' ';
				}
				else if (i == 0 && j > 1)
				{
					cout << char(j + 63);
				}
				/*if (i == 1)
				{
					cout << ' ';
				}*/
				else if (i > 0 && j == 0)
				{
					cout << i;
				}
				else if (i > 0 && j == 1 && i != 10)
				{
					cout << ' ';
				}
			}
			else
			{
				cout << cells[i-1][j-2];
			}
		}
		cout << endl;
	}
}

void Field::PlaceAllShips()
{
	for (int i = 0; i < MAX_SHIPS; i++)
	{
		DrawField();
		if (i == 0)
		{
			PlaceShip(4,i);
		}
		else if (i > 0 && i < 3)
		{
			PlaceShip(3,i);
		}
		else if (i > 2 && i < 6)
		{
			PlaceShip(2,i);
		}
		else
		{
			PlaceShip(1,i);
		}
	}
}

void Field::PlaceShip(int _decks, int _counter)
{
	cout << "\n Place "<< _decks <<"-deck ship(enter coords, a0): ";
	string coords;
	coords.resize(3);
	getline(cin, coords);
	int x = int(coords[0]) - 97;
	int y = int(coords[1]) - 48;
	string direction;
	direction.resize(2);
	cout << "\n Choose direction for your ship(0 = up, 1 = right, 2 = down, 3 = left): ";
	getline(cin,direction);
	int iDirection = int(direction[0]) - 48;
	Ship tempShip(_decks,x,y,iDirection);
	arrayOfShips[_counter] = tempShip;
	UpdateShipStatus(_decks, _counter);
}

void Field::UpdateShipStatus(int _decks, int _counter)
{
	for (int i = 0; i < _decks; i++)
	{
		int x = arrayOfShips[_counter].GetX();
		int y = arrayOfShips[_counter].GetY();
		if (arrayOfShips[_counter].GetDirection() == 0) // direction 0 = up, 1 = right, 2 = down, 3 = left
		{
			this->cells[x][y-i] = arrayOfShips[_counter].GetFieldCellStatus(i);
		}
		else if (arrayOfShips[_counter].GetDirection() == 1)
		{
			this->cells[x + i][y] = arrayOfShips[_counter].GetFieldCellStatus(i);
		}
		else if (arrayOfShips[_counter].GetDirection() == 2)
		{
			this->cells[x][y+i] = arrayOfShips[_counter].GetFieldCellStatus(i);
		}
		else if (arrayOfShips[_counter].GetDirection() == 3)
		{
			this->cells[x - i][y] = arrayOfShips[_counter].GetFieldCellStatus(i);
		}
	}
}