#include <iostream>
using namespace std;
int main() {
  int dd;
  int mm;
  int aa;

  cout << "Ingrese el dia: ";
  cin >> dd;
  cout << "Ingrese el mes: ";
  cin >> mm;
  cout << "Ingrese el año: ";
  cin >> aa;

  

  cout << "\n-----------------\n|\tAnalizando\t|\n-----------------";

  if (aa > 0) {

    switch(mm){
      case 1:
        if (dd >= 1 && dd <= 31){
          cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
        }else{
          cout << "\nEl dia ingresado es incorrecto";
          }
        break;
      case 2:
      if (aa % 4 == 0){
        if (dd >= 1 && dd <= 29){
          cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
        }else{
          cout << "\nEl dia ingresado es incorrecto";
          }
      }else
        if (dd >= 1 && dd <= 28){
          cout<<"\nDia " << dd << " del mes " << mm << " del año " << aa;
        }else{
          cout << "\nEl dia ingresado es incorrecto";
        }
       
      break;
      case 3:
      if (dd >= 1 && dd <= 31){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      case 4:
      if (dd >= 1 && dd <= 30){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      case 5:
      if (dd >= 1 && dd <= 31){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      case 6:
      if (dd >= 1 && dd <= 30){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      case 7:
      if (dd >= 1 && dd <= 31){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      case 8:
      if (dd >= 1 && dd <= 31){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      case 9:
      if (dd >= 1 && dd <= 30){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      case 10:
      if (dd >= 1 && dd <= 31){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      case 11:
      if (dd >= 1 && dd <= 30){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      case 12:
      if (dd >= 1 && dd <= 31){
        cout << "\nDia " << dd << " del mes " << mm << " del año " << aa;
      }else{
        cout << "\nEl dia ingresado es incorrecto";
        }
      break;
      default:  cout << "\nEl mes ingresado es incorrecto";
    }
  }else{
    cout << "\nEl año ingresado es invalido";
  }
}