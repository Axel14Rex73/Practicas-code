// Hacer un arreglo estatica de 3x3, metodo de informaci�n y metodo de imprimirla

#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
#include <stdio.h>

using namespace std;


int main()
{
	setlocale (LC_ALL, "spanish");
	int n�mero[3][3];
	
	for (int i = 0; i < n�mero(size, [&](int &i, int &j), i++)
	{
		for (int j = 0; i < n�mero(size, [&](int &i, int &j), j++)
		{
			cout << "Ingresa datos ["<< i <<"]["<< j <<"]: ";
			cin >> n�mero[i][j];
		}
	} 
	
	for (int i = 0; i < n�mero(size, [&](int &i, int &j), i++)
	{
		for (int j = 0; i < n�mero(size, [&](int &i, int &j), j++)
		{
			cout << n�mero[i][j];
		}
	}
	 
	 
	return 0;
}
