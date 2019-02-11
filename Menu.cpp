#include "Menu.h"
#include<conio.h>

using namespace std;

Menu::Menu()
{
	choice = 0;
	vecStrOptions.push_back("Exit");
	numberOfOptions = vecStrOptions.size();
}
void Menu::AddOption(string _OptionName)
{
	vector<string>::iterator it;
	it = vecStrOptions.begin();
	vecStrOptions.insert(it, _OptionName);
	numberOfOptions = vecStrOptions.size();
}
void Menu::ShowMenu()
{
	system("cls");
	for (int i = 0; i < numberOfOptions; i++)
	{
		cout << "\t" << i + 1 << ". " << vecStrOptions[i] << ".\n";
	}
}

int Menu::GetChoice()
{
	do
	{
		choice = _getch();
	} while ((choice < 49 && choice > (49+numberOfOptions))||choice == 27);
	return choice;
}