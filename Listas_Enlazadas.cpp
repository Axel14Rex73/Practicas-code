#include <string>
#include <iostream>
#include <locale>
#include <windows.h>
#include <stdlib.h>

using namespace std;

class battleroyale {
	
public:
	string nombre;
	string fuerza;
	string inteligencia;
	string flexibilidad;
	string velocidad;
	string agilidad;
	
};

void imprimir_datos(battleroyale*)
{
	while (n != NULL)
	{
		cout << "nombre: " << n-> nombre << "fuerza: " << n-> fuerza << "inteligencia: " << n-> inteligencia << "flexibilidad: " << n-> flexibilidad << "velocidad: " << n-> velocidad << "agilidad: " << n-> agilidad << endl;
		n = n-> next;
	}
}

int main ()
{
	setlocale (LC_ALL, "spanish");
	
	battleroyale* Gerardo;
	battleroyale* Leonardo;
	battleroyale* Aldo;
	battleroyale* Edson;
	battleroyale* Axel;
	battleroyale* Cesar;
	battleroyale* Angel;
	battleroyale* Jp;
	battleroyale* Gerson;
	battleroyale* Martin;
	battleroyale* Fer;
	
	Gerardo = new battleroyal();
	Leonardo = new battleroyale();
	Aldo = new battleroyale();
	Edson = new battleroyale();
	Axel = new battleroyale();
	Cesar = new battleroyale();
	Angel = new battleroyale();
	Jp = new battleroyale();
	Gerson = new battleroyale();
	Martin = new battleroyale();
	Fer = new battleroyale();
	
	Gerardo->nombre = 1;
	Gerardo->fuerza = 2;
	Gerardo->inteligencia = 3;
	Gerardo->flexibilidad = 4;
	Gerardo->velocidad = 5;
	Gerardo->agilidad = 6;
	Gerardo->next = Leonardo;
	
	Leonardo->nombre = 1;
	Leonardo->fuerza = 2;
	Leonardo->inteligencia = 3;
	Leonardo->flexibilidad = 4;
	Leonardo->velocidad = 5;
	Leonardo->agilidad = 6;
	Leonardo->next = Aldo;
	
	Aldo->nombre = 1;
	Aldo->fuerza = 2;
	Aldo->inteligencia = 3;
	Aldo->flexibilidad = 4;
	Aldo->velocidad = 5;
	Aldo->agilidad = 6;
	Aldo->next = Edson;
	
	Edson->nombre = 1;
	Edson->fuerza = 2;
	Edson->inteligencia = 3;
	Edson->flexibilidad = 4;
	Edson->velocidad = 5;
	Edson->agilidad = 6;
	Edson->next = Axel;
	
	Axel->nombre = 1;
	Axel->fuerza = 2;
	Axel->inteligencia = 3;
	Axel->flexibilidad = 4;
	Axel->velocidad = 5;
	Axel->agilidad = 6;
	Axel->next = Cesar;
	
	Cesar->nombre = 1;
	Cesar->fuerza = 2;
	Cesar->inteligencia = 3;
	Cesar->flexibilidad = 4;
	Cesar->velocidad = 5;
	Cesar->agilidad = 6;
	Cesar->next = Angel;
	
	Angel->nombre = 1;
	Angel->fuerza = 2;
	Angel->inteligencia = 3;
	Angel->flexibilidad = 4;
	Angel->velocidad = 5;
	Angel->agilidad = 6;
	Angel->next = Jp
	
	Jp->nombre = 1;
	Jp->fuerza = 2;
	Jp->inteligencia = 3;
	Jp->flexibilidad = 4;
	Jp->velocidad = 5;
	Jp->agilidad = 6;
	Jp->next = Gerson;
	
	Gerson->nombre = 1;
	Gerson->fuerza = 2;
	Gerson->inteligencia = 3;
	Gerson->flexibilidad = 4;
	Gerson->velocidad = 5;
	Gerson->agilidad = 6;
	Gerson->next = Martín;
	
	Martín->nombre = 1;
	Martín->fuerza = 2;
	Martín->inteligencia = 3;
	Martín->flexibilidad = 4;
	Martín->velocidad = 5;
	Martín->agilidad = 6;
	Martín->next = Fer;
	
	Fer->nombre = 1;
	Fer->fuerza = 2;
	Fer->inteligencia = 3;
	Fer->flexibilidad = 4;
	Fer->velocidad = 5;
	Fer->agilidad = 6;
	Fer->next = NULL;
	
	imprimir_dato(Gerardo);
	
	delete Gerardo;
	Gerardo = NULL;
	delete Leonardo;
	Leonardo = NULL;
	delete Aldo;
	Aldo = NULL;
	delete Edson;
	Edson = NULL;
	delete Axel;
	Axel = NULL;
	delete Cesar;
	Cesar = NULL;
	delete Angel;
	Angel = NULL;
	
	
	return 0;
}

