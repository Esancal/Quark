/*
Se ingresan tres notas de un alumno, si el promedio es mayor o
igual a siete mostrar un mensaje "Promocionado".
*/

#include <iostream>

using namespace std;

int main()
{
  int nota1, nota2, nota3, promedio, nota_aprobado;

  nota_aprobado = 7;

  cout << "Ingrese la primera nota: ";
  cin >> nota1;
  cout << "Ingrese la segunda nota: ";
  cin >> nota2;
  cout << "Ingrese la tercera nota: ";
  cin >> nota3;

  cout << "\n";

  promedio = (nota1 + nota2 + nota3) / 3;

  if (promedio > nota_aprobado)
  {
    cout << "Promocionado";
  }
  else
  {
    cout << "No promocionado";
  }

  cout << "\n\n";
  system("pause");
  return 0;
}