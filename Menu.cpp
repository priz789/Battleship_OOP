#include "Menu.h"
#include "Functions.h"

using namespace std;

Menu::Menu() 
{
	choice = 0;
	numberOfOptions = 4;
}

void Menu::RunMenu()
{
	this->Draw();
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
	setChoice(choice);
}

void Menu::Draw() 
{
	system("cls");
	cout << "Main menu.\n\n";
	cout << "\t1. New game.\n";
	cout << "\t2. Load game.\n";
	cout << "\t3. Show scoreboard.\n";
	cout << "\t4. Exit game.\n";
}

int Menu::getChoice()
{
	return choice;
}

void Menu::setChoice(int _choice)
{
	choice = _choice;
}