#include "Field.h"

using std::cout;
using std::endl;

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
void Field::DrawField()
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