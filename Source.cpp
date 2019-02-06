#include "Field.h"
#include "Menu.h"
#include "Functions.h"

using namespace std;

void ClearBuffer();

int main()
{
	setlocale(LC_ALL, "Russian"); //Подключение русских символов
	Menu MainMenu;
	MainMenu.RunMenu();
	cout << MainMenu.getChoice() << endl;
	/*Field F1;
	Field F2;
	F1.Draw();
	cout << endl;
	F2.Draw();*/
}

void ClearBuffer()
{
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
}