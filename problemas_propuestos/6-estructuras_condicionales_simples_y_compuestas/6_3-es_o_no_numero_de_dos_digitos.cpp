/*
Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) 
mostrar un mensaje indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)
*/

#include <iostream>

using namespace std;

int main()
{
  int num;

  cout << "Ingrese un numero (1-99): ";
  cin >> num;

  cout << "\n";

  if (num >= 10 && num < 100)
  {
    cout << "Numero de 2 digitos";
  }
  else if (num > 0 && num < 10)
  {
    cout << "Numero de 1 digito";
  }
  else {
    cout << "Numero fuera de la escala";
  }

  cout << "\n\n";
  system("pause");
  return 0;
}