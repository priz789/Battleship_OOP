#include "Menu.h"
#include<conio.h>

using namespace std;

SubMenu::SubMenu()
{
	choice = 0;
	vecStrOptions.push_back("Exit");
}
void SubMenu::AddOption(string _OptionName)
{
	vector<string>::iterator it;
	it = vecStrOptions.begin();
	vecStrOptions.insert(it, _OptionName);
}
void SubMenu::ShowSubMenu()
{
	system("cls");
	for (int i = 0; i < vecStrOptions.size(); i++)
	{
		cout << "\t" << i + 1 << ". " << vecStrOptions[i] << ".\n";
	}
}

void SubMenu::SetChoice()
{
	do
	{
		choice = _getch();
	} while ((choice < 49 && choice >(49 + vecStrOptions.size())) || choice == 27);
	if (choice != 27)
	{
		choice -= 48; //48 - ascii
	}
}

int SubMenu::GetChoice()
{
	return choice;
}

Menu::Menu()
{
	choice = 0;
	vecStrOptions.push_back("Exit");
	vecSubMenues = {};
}
void Menu::AddOption(string _OptionName)
{
	vector<string>::iterator it;
	it = vecStrOptions.begin();
	vecStrOptions.insert(it, _OptionName);
}
void Menu::AddSubMenu(SubMenu _SubMenu)
{
	vector<SubMenu>::iterator it;
	it = vecSubMenues.begin();
	vecSubMenues.insert(it, _SubMenu);
}
void Menu::ShowMenu()
{
	system("cls");
	for (int i = 0; i < vecStrOptions.size(); i++)
	{
		cout << "\t" << i + 1 << ". " << vecStrOptions[i] << ".\n";
	}
}

//void Menu::RunMenu()
//{
//	this->ShowMenu();
//	this->SetChoice();
//	if (choice != 27 && choice != vecStrOptions.size())
//	{
//		vecSubMenues[choice - 1].RunSubMenu();
//	}
//	else
//	{
//		return;
//	}
//}

void Menu::SetChoice()
{
	do
	{
		choice = _getch();
	} while ((choice < 49 && choice >(49 + vecStrOptions.size())) || choice == 27);
	if (choice != 27)
	{
		choice -= 48; //48 - ascii
	}
}

int Menu::GetChoice()
{
	return choice;
}