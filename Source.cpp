#include "Field.h"
#include "Menu.h"
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	//setlocale(LC_ALL, "Russian"); //Подключение русских символов
	int choice = 0;
	Menu MainMenu;
	MainMenu.AddOption("Show scoreboard");
	MainMenu.AddOption("Load Game");
	MainMenu.AddOption("New Game");
	Menu NewGameMenu;
	NewGameMenu.AddOption("Two players");
	NewGameMenu.AddOption("One player");
	Menu LoadGameMenu;
	LoadGameMenu.AddOption("Enter game name");
	Menu ScoreMenu;
	ScoreMenu.AddOption("wounderland");
	ScoreMenu.AddOption("a");
	ScoreMenu.AddOption("in");
	ScoreMenu.AddOption("alice");
	 
	// TODO: create scoretable from file and to file

	MainMenu.ShowMenu();
	choice = MainMenu.GetChoice();
	/*cout << "\nchoice is " << choice << endl;*/

	/*do {
		switch (choice)
		{
		case(49):
			NewGameMenu.ShowMenu();
			choice = NewGameMenu.GetChoice();
			switch (choice)
			{
			case(49):
				break;
			case(50):
				break;
			case(51):
				break;
			}
				break;
		case(50):
			LoadGameMenu.ShowMenu();
			break;
		case(51):
			ScoreMenu.ShowMenu();
			break;
		case(52):
			break;
		case(27):
			break;
		}
	} while (choice == 27);*/

	//TODO: create submenu system in a class Menu

	/*Field F1;
	Field F2;
	F1.DrawField();
	cout << endl;
	F2.DrawField();*/
}

