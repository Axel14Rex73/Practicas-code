#include <iostream>
#include<string>
#include<locale.h>
#include<locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "spanish");

  int matriz[5][5];
  int contador = 0;

  for(int x = 0; x < 5; x++)
  {
    for(int y = 0; y < 5; y ++)
    {
      matriz[x][y] = contador;
      contador++;
    }
  }

  for(int i = 0; i < 5; i++)
  {
    for(int i2 = 0; i2 < 5; i2++)
    {
      cout << "La posición de la matriz es (" << i << "," << i2 << ") y el valor de esta posición es: " << matriz[i][i2] << endl;
    }
  }

  return 0;
}
