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
public:
	Menu();
	void AddOption(string _OptionName);
	void ShowMenu();
	int GetChoice();
};