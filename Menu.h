#pragma once
#include<iostream>
#include<conio.h>

class Menu {
private:
	int choice;
	int numberOfOptions;
public:
	Menu();
	void RunMenu();
	void Draw();
	void setChoice(int);
	int getChoice();
};