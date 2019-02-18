#include "Player.h"

using namespace std;

Player::Player()
{
	name.resize(20,0);
}

void Player::SetName()
{
	cout << "\nEnter player name: ";
	getline(cin, name);
	cout << endl;
}

string Player::GetName()
{
	return this->name;
}

void Player::SetScore(int _score)
{
	score = _score;
}

int Player::GetScore()
{
	return score;
}
