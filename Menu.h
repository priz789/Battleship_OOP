#pragma once
#include<iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;

class Menu {
private:
	int numberOfOptions;
	int choice;
	vector<string>vecStrOptions;
	vector<SubMenu*>vecSubMenues;
public:
	Menu();
	void AddOption(string _OptionName);
	void AddMenu(const SubMenu* _SubMenu);
	void ShowMenu();
	int GetChoice();
};

class SubMenu {
private:
	int numberOfOptions;
	int choice;
	vector<string>vecStrOptions;
public:
	SubMenu();
	void AddOption(string _OptionName);
	void ShowSubMenu();
	int GetChoice();
};