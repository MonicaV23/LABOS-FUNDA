
#include <iostream>
using namespace std;

/*Escriba un programa que, dado un arreglo y un número entero, cuente cuantas veces
se repite dicho número en el arreglo.*/
void llenar(int x[],int T){

    for (int i = 0; i<T;i++)
    {
        cout << "Ingresa los " << T << " elementos del arreglo : ";cin >> x[i];
    }
}
void Numero(int x[],int T,int NumeroABuscar){
  int cont = 0;
  cout << "Escribe el numero que deseas saber: ";cin >> NumeroABuscar;
  for (int i = 0; i<T;i++){
      if (x[i] == NumeroABuscar){
          cont++;
      }
    }
  cout << "El numero  se repite " << cont << " de veces.";
}
int main()
{
  int T, NumeroABuscar,x[100];
  cout<<"Cuantos numeros tendra tu arreglo: ";cin>>T;

  llenar(x,T);
  Numero(x,T,NumeroABuscar);

  return 0;
}