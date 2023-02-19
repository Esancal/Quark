/*
Se debe desarrollar un programa que pida el ingreso del precio de un artículo
y la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador. 
*/

#include <iostream>

using namespace std;

int main()
{
  int precio, cantidad, total;

  cout << "Ingrese precio: ";
  cin >> precio;
  cout << "Ingrese cantidad: ";
  cin >> cantidad;

  total = precio * cantidad;

  cout << "El total de los articulos es: ";
  cout << total;

  cout << "\n";
  system("pause");
  return 0;
}