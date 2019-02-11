#include "Field.h"

using namespace std;

Field::Field()
{
	for (int i = 0; i < FIELD_SIZE_Glob; i++)
	{
		for (int j = 0; j < FIELD_SIZE_Glob; j++)
		{
			cells[i][j] = 0;
		}
	}
}
void Field::DrawField()
{
	for (int i = 0; i < FIELD_SIZE_Glob; i++)
	{
		for (int j = 0; j < FIELD_SIZE_Glob; j++)
		{
			cout << cells[i][j];
		}
		cout << endl;
	}
}