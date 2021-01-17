// Matriz: ciclos anidados que muestran la informacion de X & Y
// Componenetes - Posición - Tamaña - valor

#include <iostream>
#include <locale>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "spanish");
	// Declarar una matriz con tamaño
	int matriz [5][5];
	int contador;
	
	for (int x = 0; x < 5; x++){
		
		for (int y = 0; y < 5; y++){
			
			matriz[x][y] = contador;
			contador++;
		}
	}
	
	// Para impirmir la matriz necesitamos recorrerla
	
	for (int i = 0; i < 5; i++){
		
		for (int i2 = 0; i2<5; i++){
			
			cout << "La posicion de la matriz es: " (* << i << "," << i2 << *) y el valor de esa posicion es: " << matriz [i][i2] << endl;
			
		}
	}
}

