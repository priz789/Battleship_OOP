#pragma once
#include<iostream>

const int FIELD_SIZE_Glob = 10;

class Field {
private:
	int cells[FIELD_SIZE_Glob][FIELD_SIZE_Glob];
public:
	Field();
	void DrawField();
};
