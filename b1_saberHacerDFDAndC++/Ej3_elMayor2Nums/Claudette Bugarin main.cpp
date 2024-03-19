#include <iostream>
#include <string>
using namespace std;
int main() {
  int Num1, Num2; // Num2 es Mayor que Num17
  cout << "Escribe el valor de Num1\n";
  cin >> Num1;
  cout << "Escribe el valor de Num2\n";
  cin >> Num2;
  if (Num2>Num1)
  cout << "Num2 es mayor que Num1\n";
  else if (Num2<Num1)
    cout << "Num1 es mayor que Num2";
else if (Num2==Num1)
  cout << "Error";
}