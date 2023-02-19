/*
Realizar un programa que solicite la carga por teclado de dos números,
si el primero es mayor al segundo informar su suma y diferencia,
en caso contrario informar el producto y la división del primero respecto al segundo.
*/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2, suma, diferencia, producto, division;

  cout << "Ingrese primer valor: ";
  cin >> num1;
  cout << "Ingrese segundo valor: ";
  cin >> num2;

  cout << "\n";

  if (num1 > num2)
  {
    suma = num1 + num2;
    diferencia = num1 - num2;

    cout << "El primer numero es mayor al segundo \npor lo tanto se realiza: \n";
    cout << "suma: ";
    cout << suma;
    cout << "\ndiferencia: ";
    cout << diferencia;
  }
  else
  {
    producto = num1 * num2;
    division = num1 / num2;

    cout << "El primer numero es menor que el segundo \npor lo tanto se realiza: \n";
    cout << "producto: ";
    cout << producto;
    cout << "\ndivision: ";
    cout << division;
  }

  cout << "\n\n";
  system("pause");
  return 0;
}