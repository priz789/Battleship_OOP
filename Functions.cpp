#include "Functions.h"

using namespace std;

void ClearBuffer()
{
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
}

int NumberChoice(int numberOfOptions)
{
	int choice = 0;
	do
	{
		ClearBuffer();
		choice = _getch();
	} while ((choice <= 48 || choice > 48 + numberOfOptions) && choice != 27); // 27 - esc
	if (choice != 27)
	{
		choice -= 48; // 48 - ascii code before '1'
	}
	return choice;
}

void RunMainMenu()
{
	int choice = 0;
	int numberOfOptions = 4;
	system("cls");
	cout << "Main menu.\n\n";
	cout << "\t1. New game.\n";
	cout << "\t2. Load game.\n";
	cout << "\t3. Show scoreboard.\n";
	cout << "\t4. Exit game.\n";
	choice = NumberChoice(numberOfOptions);
	switch(choice)
	{
	case 1:
		NewGame();
		break;
	case 2:
		LoadGame();
	case 3:
		ShowScoreBoard();
	case 4:
		break;
	default:
		break;
	}
}

void NewGame(){}

void LoadGame(){}

void ShowScoreBoard(){}