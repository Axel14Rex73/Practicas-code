// Libreria_Compleja_1 

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <Windows.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "spanish");
	string respuesta[5];
	string autores[5];
	int tm_year[5];
	
for (int i = 0; i < 5; i++){

	cout << "Bienvenido al registro de libros", i + 1;
	cout << endl;
	cout << "LLego el momento de que me digas tú libro favorito, adelante nadie te va a juzgar aquí";
	cout << endl;
    
    cout << "Ingresa el título del libro: " << endl;
    cin >> respuesta[i];
    
    
    cout << "Ingresa el Autor del libro: " << endl;
    cin >> respuesta[i];
    
    cout << "Ingresa el Año de publicación: " << endl;
    cin >> tm_year[i];
    
    cout << "=====================================================================" << endl;
}
    
   
    
}


	
	

