#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main () {
	setlocale(LC_ALL, "spanish");

	char Tepig;
	char Snivy;
	char Oshawott;
	string pokemon;
	string si;
	string no;
	string repetir = "si";
	string estaListo;
	string mov;

	
		cout << "Elige un Pokemon (Tepig, Snivy � Oshawott)"<<endl;
		cin >> pokemon;
		
		cout<<"El pokemon que Elegiste es: "<<pokemon<<endl; 
		
		cout << "�Estas listo para tu primera batalla pokemon? (si/no)"<<endl;
		cin >> estaListo;

		if (estaListo == "si") {
			cout << "COMENCEMOS!" << endl;
		} else {
			cout << "Pues aunque no est�s listo, aqu� vamos" << endl;
		}
        
            cout << "Elige tu primer movimiento, (ara�azo � intimidaci�n)" << endl;
            cin >> mov;
            
        
		
	

	return 0;
}







 // while (repetir == "si") {
	 // cout << "�Te gustar�a volver a pelear? (si/no)" << endl;
		// cin >> repetir;
