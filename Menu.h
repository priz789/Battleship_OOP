#pragma once
#include<iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;

class SubMenu {
private:
	int choice;
	vector<string>vecStrOptions;
public:
	SubMenu();
	void AddOption(string _OptionName);
	void ShowSubMenu();
	/*void RunSubMenu();*/
	void SetChoice();
	int GetChoice();
};

class Menu {
private:
	int choice;
	vector<string>vecStrOptions;
	vector<SubMenu>vecSubMenues;
public:
	Menu();
	void AddOption(string _OptionName);
	void AddSubMenu(SubMenu _SubMenu);
	void ShowMenu();
	void SetChoice();
	/*void RunMenu();*/
	int GetChoice();
};