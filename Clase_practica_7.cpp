#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "spanish");
    
    // tipo de dato, nombre de variable
	char libro_1[10];
	int libro_2 [50];
	bool libro_3 [60];
	string libro_4 [1000];
	float libro_5 [2];
	
	string libro_4 = {"ArrebatosCarnales, HornosdeHitler, GuiaEscencialPokemón, ReadyPlayerOne, Nada"};
	int libro_1[] = {1,2,3,4,5,6,};
	
	cout << "El libro_1 tiene a: " << libro_1 [0] << "?" << endl;
	cout << "El libro_1 tiene en su posición 0 a: " << libro_1 [0] << "?" << endl;
	
	libro_1 [0] =  "ArrebatosCarnales";
	
	cout << libro_1 [0];
	
	for (int i = 0; i<= 4; i++)
	{
	    cout << "El libro_1 tiene a: " << libro_1 [i] << "En la posición" << i << "y es el elemento" << i+1 << endl;
			
	}
		
}


	
