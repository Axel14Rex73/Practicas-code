#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>

using namespace std;

int main(){
	
	int filas = 0;
	int columnas = 0;
	
	cout << "filas" << endl;
	cin >> filas;
	
	cout << "columnas" << endl;
	cin >> columnas;
	
	// Creacion de matriz dinamica
	
	int** matriz = new int* [filas];
	for(int i = 0; i < filas; i++){
		
		matriz[i] = new int [columnas];
	}
	
	cout << "Vamos a ver la matriz: " <<  matriz << endl; 
	
	// Relleno de la matriz
	int cnt = 1;
	for (int i = 0; i < filas; i++){
		
		for (int i2 = 0; i2 < columnas; i2++){
			
			matriz[i][i2] = cnt;
			cout << "|" << matriz [i][i2] << "|";
			cnt ++
		}
		
		cout << endl;
	}
	
	delete[] matriz;
	matriz = NULL;
	cout << "Vamos a ver la matriz: " <<  matriz << endl; 
	
	return 0; 
}
