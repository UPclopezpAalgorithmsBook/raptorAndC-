#include <iostream>
using namespace std;
#include <string>

int main() {
    // Declaración de variables
    int numero1, numero2;

    // Solicitar al usuario que introduzca dos números
    
  cout << "Introduce el primer número: ";
  cin >> numero1;
  cout << "Introduce el segundo número: ";
  cin >> numero2;

  // Verificar cuál es mayor y cuál es menor
  if (numero1 > numero2) {
      cout << "Los números en orden mayor a menor son: " << numero1 << " , " << numero2;
  } else if (numero2 > numero1) {
       cout << "Los números en orden mayor a menor son: " << numero2 << " , " << numero1;
  } else {
      cout << "Los números son iguales: " << numero1 << " y " << numero2 << " son iguales";
    }
}
