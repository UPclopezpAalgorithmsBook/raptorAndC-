#include <iostream>
using namespace std;
int main() {
  string nombre;
  string apellido1;
  string apellido2;
  cout<< "Introduce tu nombre:\n";
  cin>> nombre;
  cout<< "Introduce tu apellido paterno:\n";
  cin>> apellido1;
  cout<< "Introduce tu apellido materno: \n";
  cin>> apellido2;
  cout<< "Tu nombre completo es: \n" <<nombre<< " " <<apellido1<< " " <<apellido2;
}