#include <iostream>
using namespace std;
#include <string>

int main() {
  int Num1, Num2; // Num1 es menor que Num2
  cout <<"Escribe el valor de Num1\n";
  cin >> Num1;
  cout <<"Escribe el valor de Num2\n";
  cin >> Num2;
  if (Num1 == Num2){
    cout<< "Error" << endl;
  }  
  else if (Num2>Num1){
    cout << "Num1 es menor que Num2" << endl;
  } else {
      cout << "Num1 es mayor que Num2" << endl;

  }
}
