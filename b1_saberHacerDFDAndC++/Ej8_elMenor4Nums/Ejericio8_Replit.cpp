#include <iostream>
using namespace std;

int main() {
  bool s; // declaración booleana
  float a, b, c, d; // Para que sean numeros decimales

  
  cout << "Este programa te dice que numero es el menor en un grupo de 4 numeros\n";

  do  {
  cout << "Ingresa el primer numero\n"; // ingresar variables
  cin >> a;
  
  cout << "Ingresa el segundo numero\n"; 
  cin >> b;
  
  cout << "Ingresa el tercer numero\n";
  cin >> c;

  cout << "Ingresa el cuarto numero\n"; 
  cin >> d;

  s= (a!=b) && (a!=c) && (a!=d) && (b!=c) && (b!=d) && (c!=d); // T o F

    if (!s) {cout << "Uno o mas numeros del conjunto son iguales, pruebe otra vez utilizando numeros diferentes\n"<< "\n"; } // fin if1
  } // fin do
    while (!s); // do/while mientras s es falso

  float m; // declaracion de variable m
  m= a;  

  if (m>b) {m=b;} // fin if 2
  if (m>c) {m=c;}
  if (m>d) {m=d;}

  cout << "\nEl numero menor del conjunto es: " << m;
}
