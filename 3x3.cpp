// Hacer un arreglo estatica de 3x3, metodo de información y metodo de imprimirla

#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
#include <stdio.h>

using namespace std;


int main()
{
	setlocale (LC_ALL, "spanish");
	int número[3][3];
	
	for (int i = 0; i < número(size, [&](int &i, int &j), i++)
	{
		for (int j = 0; i < número(size, [&](int &i, int &j), j++)
		{
			cout << "Ingresa datos ["<< i <<"]["<< j <<"]: ";
			cin >> número[i][j];
		}
	} 
	
	for (int i = 0; i < número(size, [&](int &i, int &j), i++)
	{
		for (int j = 0; i < número(size, [&](int &i, int &j), j++)
		{
			cout << número[i][j];
		}
	}
	 
	 
	return 0;
}
