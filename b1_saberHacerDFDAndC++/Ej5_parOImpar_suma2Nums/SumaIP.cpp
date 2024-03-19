#include <iostream>
using namespace std;

int main() {
  int a, b, sum;
  cout << "--------------------------------------------------------------------------------\nEste es un programa que suma dos números enteros y determina si es numero par o impar\n--------------------------------------------------------------------------------\n"; 
  cout << "Ingresa el valor de a: ";
  cin >> a;
  cout << "Ingresa el valor de b: ";
  cin >> b;

  sum = a+b;

  if (sum%2 == 0) {
    cout << "El resultado de la suma es un numero par: " << endl;
  }
  else
    cout << "El resultado de la sumaes un numero impar: " << endl;
  
}