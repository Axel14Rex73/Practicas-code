//Arreglos Dinamicos o memoria dinamica

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <Windows.h>

using namespace std;

//procedimiento
int imprimir(string* titulos, string* autores, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "El titulo del libro número " << i + 1 << " es " << endl;
        cout << titulos[i] << endl;

        cout << "El autor del libro " << titulos[i] << " es " << endl;
        cout << autores[i] << endl;
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL,"spanish");

    string* titulos = NULL;// Se inicializa el puntero en NULL
    string* autores = NULL;

    int size;
    cout << " ¿Cuántos elementos quieres registrar? " << endl;
    cin >> size;

    titulos = new string[size];
    autores = new string[size];

    cout << "Comencemos a capturar " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Ingresa el titulo del libro número " << i + 1 << "\n";
        if (i == 0)
        {
            cin.ignore();
        }
        getline(cin, titulos[i]); //Darle la capacidad de recibir espacios.
        cout << "Ingresa el autor del libro " << titulos[i] << endl;
        getline(cin, autores[i]);
        system("CLS");
    }

    imprimir(titulos, autores, size);
    cout << "-----------------------Vuelva pronto--------------------" << endl;

    delete[] titulos;
    delete[] autores;
    titulos = NULL;
    autores = NULL;

    return 0;
}
