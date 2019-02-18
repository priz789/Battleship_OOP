#pragma once
#include "Field.h"
#include "Player.h"

class Game {
private:
	bool nowPlay;
	Player p1;
	Player p2;
	Field p1_field;
	Field p2_field;
public:
	Game();
	void StartNewGame();
	void LoadGame();
	void GameTurn();
	void SaveGame();
	void ExitGame();
};