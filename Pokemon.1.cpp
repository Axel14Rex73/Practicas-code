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
	
	
	    cout << "Elige un Pokemon (Tepig, Snivy ó Oshawott)"<<endl;
		cin >> pokemon;
		
		cout<<"El pokemon que Elegiste es: "<<pokemon<<endl; 
		
		cout << "¿Estas listo para tu primera batalla pokemon? (si/no)"<<endl;
		cin >> estaListo;

		if (estaListo == "si") {
			cout << "Preparate para los problemas mas vale que temas..." << endl;
		} else {
			cout << "Pues aunque no estés listo, aquí vamos" << endl;
		}
        
            cout << "Elige tu primer movimiento, (arañazo ó intimidación)" << endl;
            cin >> movimiento;
            
        if (movimiento == "arañazo") {
            cout << "Bajaste 10 puntos de 50 a tu rival" << endl; 
		} else {
			cout << "Bajaste 10 puntos de 50 a tu rival" << endl;
		}
		
		    cout << "Elige tu segundo movimiento, (corte o imagen)" << endl;
		    cin >> movimiento;
		    
	   	if (movimiento == "corte"){
		        cout << "Bajaste 10 puntos más a tu rival" << endl;
		} else { 
		        cout << "Bajaste 10 puntos más a a tu rival" << endl;
	    }
		    
		    cout << "Elige tu tercer movimiento, (placaje ó derribo)" << endl;
		    cin >> movimiento;
		    
		if (movimiento == "derribo"){
			    cout << "Bajaste 510 puntos más a tu rival" << endl;
	   } else {
			    cout << "Bajaste 10 puntos más a tu rival" << endl;
		}
		
		    cout << "Elige tu cuarto movimiento, (fuerza ó antojo)" << endl;
		    cin >> movimiento;
		    
		if (movimiento == "fuerza"){
			    cout << "Bajaste 10 puntos más a tu rival" << endl;
		} else {
			    cout << "Bajaste 10 puntos más a tu rival" << endl;
			    
		}
		    cout << "Elige tu quinto y último movimiento, (magnitud ó pataleta)" << endl;
		    cin >> movimiento;
		    
		if (movimiento == "magnitud"){
			    cout << "Derrotaste a tu rival" << endl;
		} else {
			    cout << "Derrotaste a rival" << endl;
		}
		
		    cout << "Has ganado la batalla, Toma tu recompensa, (3 pokebolas, 2 posiones, 1 revivir)" << endl;
		    
 
	     cout << "¿Te gustaría volver a pelear? (si/no)" << endl;
		 cin >> repetir;
		 
		 if (repetir == "si"){
		 	    cout << "Aquí vamos una vez más" << endl;
		 	}else {
		 		cout << "Nos veremos muy pronto" << endl;
			 }
	
    }
   
	    return 0;
}







 
