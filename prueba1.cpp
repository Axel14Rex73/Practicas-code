#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <time.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Spanish");

	int respuesta = 1;
	int arma = 1; 
	int armar = 1;
	char juego = 'G'; 
	char proto = 'A'; 
	char refugio = 'M';
	

	cout << "Hola mi nombre es Mike y hoy nos divertiremos mucho en este juego" << endl, Sleep(3000);
	cout << "Primero que nada me gustaria saber con que juego quieres iniciar primero" << endl, Sleep(3000);
	cout << "Para poder elegir un juego escribe el número y la letra" << endl, Sleep(3000);
	cout << "1. (G)" << endl, Sleep(3000);
	cout << "2. (S)" << endl, Sleep(3000);
	cin >> respuesta, juego;
	

	if (arma == 1 && proto == 'A') {
		cout << "Has elegido un juego de Guerra supongo que eres agil con las estrategias" << endl, Sleep(3000);
		cout << ".-.-.-.-.-.-.-.-..-.-.-." << endl, Sleep(3000);
		cout << "Bienvenido a la base militar 253 sector 27" << endl, Sleep(3000);
		cout << "Te podemos brindar un arma nivel 5 con un arma nivel 1 solo que es al azar" << endl, Sleep(3000);
		cout << "Para poder elegir un arma escribe el número y la letra" << endl, Sleep(3000);
		cout << "1. (A)" << endl, Sleep(3000);
		cout << "2. (B)" << endl, Sleep(3000);
		cin >> arma, proto;

		if (armar == 1 && refugio == 'M') {
			cout << "Te ha tocado una AP - 74A1C con 50 balas, más un machete Z - hunter" << endl, Sleep(3000);
			cout << "Ahora tu misión es construir un refugio" << endl, Sleep(3000);
			cout << "Te brindaremos materiales pero solo contamos con dos diferentes los cuales tambien serán al azar" << endl, Sleep(3000);
			cout << "¿Cuál es el material con el que deseas trabajar?" << endl, Sleep(3000);
			cout << "Para poder elegir un material escribre el número y la letra" << endl, Sleep(3000);
			cout << "1. (M)" << endl, Sleep(3000);
			cout << "2. (P)" << endl, Sleep(3000);
			cin >> armar, refugio;

		}
		else {
			cout << "Te ha tocado una Type - 89 CQB mas un Cuchillo SmittyBilt" << endl, Sleep(3000);
			cout << "Ahora tu misión sera construir un refugio" << endl, Sleep(3000);
			cout << "Te brindaremos materiales pero solo contamos con dos diferentes, los cuales tambien serán al azar" << endl, Sleep(3000);
			cout << "¿Cuál es el material con el que deseas trabajar?" << endl, Sleep(3000);
			cout << "Para poder elegir un material escribe el número y la letra" << endl, Sleep(3000);
			cout << "1. (M)" << endl, Sleep(3000);
			cout << "2. (P)" << endl, Sleep(3000);
			cin >> armar, refugio;

 		}

	}
	else {
		cout << "Has elegido un juego de supervivencia, supongo que eres agil para administrar recursos" << endl, Sleep(3000);
		cout << ".-.-.-.-.-.-.-.-.--.-.-." << endl, Sleep(3000);
		cout << "Bienvenido a la isla crawler espero que sepas sobrevir" << endl, Sleep(3000);
		cout << "Te podemos brindar algunas herramientas basicas pero son aleatorias" << endl, Sleep(3000);
		cout << "1. (A)" << endl, Sleep(3000);
		cout << "2. (B)" << endl, Sleep(3000);
		cin >> arma, proto;
	}


}
