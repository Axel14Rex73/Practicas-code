// Matrices_Practica8

#include <iostream>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "spanish");
	int numeros [10][10], filas, columnas;
	                                                                                
	cout << "Ingresa el n�mero de filas: " << endl;
	cin >> filas;
	
	cout << "Ingresa el n�mero de columnas: " <<endl;
	cin >> columnas;
	
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			
			cout << "Ingresa un n�mero ["<< i << "]["<< j <<"]: ";
			cin >> numeros[i][j];
			
		}
	}
	
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			
			cout << numeros[i][j];
			
		}
		
		cout << endl;
		
	}
	
	return 0;
}
