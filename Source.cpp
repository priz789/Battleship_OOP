#include "Field.h"
#include "Functions.h"
#include<iostream>

using namespace std;

void ClearBuffer();

int main()
{
	//setlocale(LC_ALL, "Russian"); //Подключение русских символов
	Menu MainMenu;
	MainMenu.RunMenu();
	cout << MainMenu.getChoice() << endl;
	/*Field F1;
	Field F2;
	F1.Draw();
	cout << endl;
	F2.Draw();*/
}

#pragma once
#include<iostream>


class Menu {
private:
	int choice;
	int numberOfOptions;
public:
	Menu();
	
	void DrawMainMenu();
	void setChoice(int);
	void NewGame();
	void DrawNGMenu();
	int getChoice();
};

Menu::Menu()
{
	choice = 0;
	numberOfOptions = 4;
}

void Menu::RunMenu()
{
	this->DrawMainMenu();
	int choice = 0;
	choice = PlayerChoice();
	setChoice(choice);
}

void Menu::DrawMainMenu()
{
	system("cls");
	cout << "Main menu.\n\n";
	cout << "\t1. New game.\n";
	cout << "\t2. Load game.\n";
	cout << "\t3. Show scoreboard.\n";
	cout << "\t4. Exit game.\n";
}

void Menu::NGMenu()
{
	system("cls");
	cout << "New game!\n\n";
	cout << "\tSelect game mode(1: PVP, 2: PVE): ";
	if (true)
	{

	}
}


void Menu::setChoice(int _choice)
{
	choice = _choice;
}

