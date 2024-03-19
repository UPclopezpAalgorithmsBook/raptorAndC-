#include <iostream>
using namespace std;
int main() {
int n1,n2,n3,a,c,b,h,k,j,t;
cout<<"Este programa encuentra el número menor\n";
  cout<<"Ingresa 3 números\n";
  cin>>n1;
  cin>>n2;
  cin>>n3;  
  a=n1<n2&&n1<n3;
  b=n2<n1&&n2<n3;
  c=n3<n1&&n3<n2;
  h=n1==n2&&n1==n3&&n2==n3;
  k=n1==n2&&n1<n3;
  j=n1==n3&&n1<n2;
  t=n3==n2&&n3<n1;
  if (a){
     cout<<"El número menor es:\n"<<n1;}
  else if (b){
    cout<<"El número menor es:\n"<<n2;
  }
  else if(c){
    cout<<"El número menor es:\n"<<n3;
    }
  else if (h) {
    cout<<"Los numeros son iguales,no existe uno menor\n";}
  else if (k){
    cout<<"Hay dos números iguales menores\n"<<n1<<"\n"<<n2;
  }
  else if(j){ 
    cout<<"Hay dos números iguales menores\n"<<n1<<"\n"<<n3;
  }
  else if (t){
    cout<<"Hay dos números iguales menores\n"<<n3<<"\n"<<n2;
             }
}