// Enum_Class_29_11_20

#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
#include <stdio.h>
#include <time.h>

using namespace std;

class developers
{
public:
    string nombre;
	int belleza;
	int fuerza;
	int agilidad;
	int defensa;
	developers* next;	
};

string to_string (developers* n); // convierte un valor númerico a una cadena
void build_developers (developers*& build, developers* build1); // build_: es para compilar un programa
void to_string_all (developers* d);
int suma (developers* a);
developers* ganador(developers* b);

int main()
{
	setlocale(LC_ALL, "Spanish");
	
	developers* axel;
	developers* gerardo;
	developers* aldo;
	developers* leo;
	developers* martin;
	developers* jp;
	developers* cesar;
	developers* angel;
	developers* gerson;
	developers* edson; 
	developers* brenda;
	
	axel = new developers();
	gerardo = new developers();
	aldo = new developers();
	leo = new developers();
	martin = new developers();
	jp = new developers();
	cesar = new developers();
	angel = new developers();
	gerson = new developers();
	edson = new developers();
	brenda = new developers();
	
	build_developers(axel, gerardo);
	build_developers(aldo, leo);
	build_developers(martin, jp);
	build_developers(cesar, angel);
	build_developers(gerson, edson);
	build_developers(brenda, NULL);
	
	to_string_all (axel);
	
	cout << "El ganador es: " << endl;
	cout << to_string (ganador(axel));
	
	
}

void build_developers (developers*& build, developers* build1)
{
	srand(time(NULL));
	build->belleza = rand() %10;
	build->fuerza = rand() %10;
	build->agilidad = rand() %10;
	build->defensa = rand() %10;
	build->next = build1;
	
	cout << "Ingresa un nombre: ";
	
	getline(cin, build->nombre);
}

void to_string_all(developers* n)
{
	while (n != NULL)
	{
		cout << to_string(n);
		n = n->next;
	}
}

string to_string (developers* d)
{
	string resultado;
	
    resultado += d->nombre + "\n";
    resultado += "Obtiene: " + to_string(d->belleza) + "Score de belleza: " + "\n";
    resultado += "Obtiene: " + to_string(d->fuerza) + "Score de fuerza: " + "\n";
    resultado += "Obtiene: " + to_string(d->agilidad) + "Score de agilidad: " + "\n";
    resultado += "Obtiene: " + to_string(d->defensa) + "Score de defensa: " + "\n";
    
    return resultado;

}

int suma(developers* a)
{
	if (a==NULL)
	{
	    return 0;	
	}
	int resultado = s->belleza + s->fuerza + s->agilidad + s->defensa;
	return resultado;
}

developers* ganador(developers* b)
{
	developers* ganador = b;
	while (b != NULL)
	{
		if (!(suma(ganador)>suma(d->next)))
		{
		    ganador = d->next;
		}
		d = d->next;
	}
	return ganador;
}
