#include "Menu.h"
#include "Game.h"
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	//setlocale(LC_ALL, "Russian"); //Подключение русских символов
	Menu MainMenu;
	MainMenu.AddOption("Show scoreboard");
	MainMenu.AddOption("Load Game");
	MainMenu.AddOption("New Game");
	SubMenu NewGameMenu;
	NewGameMenu.AddOption("Two players");
	NewGameMenu.AddOption("One player");
	SubMenu LoadGameMenu;
	LoadGameMenu.AddOption("Enter game name");
	SubMenu ScoreMenu;
	ScoreMenu.AddOption("wounderland");
	ScoreMenu.AddOption("a");
	ScoreMenu.AddOption("in");
	ScoreMenu.AddOption("alice");
	 
	// TODO: create scoretable from file and to file
	
	Game MainGame;

	//debug tests

	MainGame.StartNewGame();

	//TODO: Hardcode menu!

	/*
	int choice = 0;
	int choice2 = 0;
	MainMenu.ShowMenu();
	MainMenu.SetChoice();
	choice = MainMenu.GetChoice();
	cout << "\nchoice is " << choice << endl;*/
	
	/*do {
		switch (choice)
		{
		case(1):
			NewGameMenu.ShowSubMenu();
			NewGameMenu.SetChoice();
			choice2 = NewGameMenu.GetChoice();
			switch (choice2)
			{
			case(1):
				MainGame.StartNewGame();
				break;
			case(2):
				MainGame.StartNewGame();
				break;
			default:
				break;
			}
		case(2):
			LoadGameMenu.ShowSubMenu();
			break;
		case(3):
			ScoreMenu.ShowSubMenu();
			break;
		case(4):
			break;
		case(27):
			break;
		}
	} while (choice == 27);*/

	//TODO: create submenu system in a class Menu
}

