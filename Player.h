#pragma once
#include<iostream>
#include<string>

using std::string;

class Player {
private:
	string name;
	int score;
public:
	Player();
	void SetName();
	string GetName();
	void SetScore(int _score);
	int GetScore();
};