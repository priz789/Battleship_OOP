#include "Game.h"

using namespace std;

Game::Game()
{
	nowPlay = 0;
	Player p1;
	Player p2;
	Field p1_field;
	Field p2_field;
}
void Game::StartNewGame()
{
	this->p1.SetName();
	this->p2.SetName();
	this->p1_field.PlaceAllShips();
	this->p2_field.PlaceAllShips();
}
//void Game::LoadGame();
//void Game::GameTurn();
//void Game::SaveGame();
//void Game::ExitGame();