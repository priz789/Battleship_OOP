#include<iostream>
#include "Field.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //����������� ������� ��������
	Field F1;
	Field F2;
	F1.Draw();
	cout << endl;
	F2.Draw();
}