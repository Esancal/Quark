/*
Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo 
(El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)
Pueden crear por ejemplo un proyecto llamado PerimetroCuadrado.
*/

#include <iostream>

using namespace std;

int main()
{
  int lado, perimetro;
  cout << "Ingrese el lado: ";
  cin >> lado;
  perimetro = lado * 4;
  cout << "El perimetro del cuadrado es: ";
  cout << perimetro;
  cout << "\n";
  system("pause");
  return 0;
}