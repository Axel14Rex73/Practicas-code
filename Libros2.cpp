// Realizar un inventario de biblioteca

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <Windows.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "spanish");
	
	string libros[10];
	int añoPublicación[5];
	string autor[10];
	
	for (int i = 0; i < 5; i++){
		
		cout << "Ingresa el titulo del 1er Libro: " << i + 1 << endl;
		cin >> libros;
	}
	
	return 0;
}
