#include <iostream>
#include <string>
using namespace std;

int main() {
  int caso;
  float pesos, dolares;
  cout << "Ingrese el caso que se desea calcular\n\n1: Pesos a dolares\n2: Dolares a Pesos\n\nCaso: ";
  //Validacion de caso
  do{
    cin >> caso;
    if(caso != 1 && caso != 2){
      cout << "Ingrese un caso valido\n\nCaso: ";
    }
  }while (caso != 1 && caso != 2);
  
  //Valor de 1 dolar en pesos
  const float con = 16.7997;

  switch(caso){
    case 1:
      cout << "\nIngrese la cantidad de pesos que desea convertir:\n\nPesos: ";
      cin >> pesos;
      //Conversion
      dolares = pesos / con;
      cout << "\n" << pesos << " pesos equivalen a " << dolares <<" dolares";
      break;
    case 2:
      cout << "\nIngrese la cantidad de dolares que desea convertir:\n\nDolares: ";
      cin >> dolares;
      //Conversion
      pesos = dolares * con;
      cout << "\n" <<dolares << " dolares equivalen a " << pesos <<" pesos";
      break;
    default:
      cout << "ERROR";
      break;
  }
  
}