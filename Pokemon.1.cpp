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
	string repetir = "si";
	string estaListo;
	string movimiento;
	string respuesta;

	while (repetir == "si"){
	
	
	    cout << "Elige un Pokemon (Tepig, Snivy � Oshawott)"<<endl;
		cin >> pokemon;
		
		cout<<"El pokemon que Elegiste es: "<<pokemon<<endl; 
		
		cout << "�Estas listo para tu primera batalla pokemon? (si/no)"<<endl;
		cin >> estaListo;

		if (estaListo == "si") {
			cout << "Preparate para los problemas mas vale que temas..." << endl;
		} else {
			cout << "Pues aunque no est�s listo, aqu� vamos" << endl;
		}
        
            cout << "Elige tu primer movimiento, (ara�azo � intimidaci�n)" << endl;
            cin >> movimiento;
            
        if (movimiento == "ara�azo") {
            cout << "Bajaste 10 puntos de 50 a tu rival" << endl; 
		} else {
			cout << "Bajaste 10 puntos de 50 a tu rival" << endl;
		}
		
		    cout << "Elige tu segundo movimiento, (corte o imagen)" << endl;
		    cin >> movimiento;
		    
	   	if (movimiento == "corte"){
		        cout << "Bajaste 10 puntos m�s a tu rival" << endl;
		} else { 
		        cout << "Bajaste 10 puntos m�s a a tu rival" << endl;
	    }
		    
		    cout << "Elige tu tercer movimiento, (placaje � derribo)" << endl;
		    cin >> movimiento;
		    
		if (movimiento == "derribo"){
			    cout << "Bajaste 510 puntos m�s a tu rival" << endl;
	   } else {
			    cout << "Bajaste 10 puntos m�s a tu rival" << endl;
		}
		
		    cout << "Elige tu cuarto movimiento, (fuerza � antojo)" << endl;
		    cin >> movimiento;
		    
		if (movimiento == "fuerza"){
			    cout << "Bajaste 10 puntos m�s a tu rival" << endl;
		} else {
			    cout << "Bajaste 10 puntos m�s a tu rival" << endl;
			    
		}
		    cout << "Elige tu quinto y �ltimo movimiento, (magnitud � pataleta)" << endl;
		    cin >> movimiento;
		    
		if (movimiento == "magnitud"){
			    cout << "Derrotaste a tu rival" << endl;
		} else {
			    cout << "Derrotaste a rival" << endl;
		}
		
		    cout << "Has ganado la batalla, Toma tu recompensa, (3 pokebolas, 2 posiones, 1 revivir)" << endl;
		    
 
	     cout << "�Te gustar�a volver a pelear? (si/no)" << endl;
		 cin >> repetir;
		 
		 if (repetir == "si"){
		 	    cout << "Aqu� vamos una vez m�s" << endl;
		 	}else {
		 		cout << "Nos veremos muy pronto" << endl;
			 }
	
    }
   
	    return 0;
}







 
