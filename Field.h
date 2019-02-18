#pragma once
#include<iostream>
#include "Ship.h"

const int FIELD_SIZE_Glob = 10;

class Field {
private:
	int cells[FIELD_SIZE_Glob][FIELD_SIZE_Glob];
	Ship arrayOfShips[10];
public:
	Field();
	void DrawField();
};
