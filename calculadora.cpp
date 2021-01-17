#include <iostream>

using namespace std;

int main() {
	float x, y, resultado;
	char op;
	int valido = 1;
	

	
	cout << "Ingresa una op: (+, -, *, /) ";
	cin >> op;

	cout << "Ingresa x: ";
	cin >> x;

	cout << "Ingresa y: ";
	cin >> y;
	
	switch (op) {
	case '+':
		resultado = x + y;
		break;
	case '-':
		resultado = x - y;
		break;
	case '*':
		resultado = x * y;
		break;
	case '/':
		resultado = x / y;
		break;

		valido = 0;

	}

	if (valido)
		cout << "El resultado es: " << resultado;
	else
		cout << "Op invalida\n";

	return 0;

}
