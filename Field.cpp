#include "Field.h"

using namespace std;

Field::Field()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cells[i][j] = 0;
		}
	}
}
void Field::Draw()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << cells[i][j];
		}
		cout << endl;
	}
}