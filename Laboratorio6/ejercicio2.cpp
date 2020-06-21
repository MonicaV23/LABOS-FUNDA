#include <iostream>
using namespace std;

/*Escriba un programa que, dado un arreglo y un número entero, cuente cuantas veces
se repite dicho número en el arreglo.*/
void llenar(int x[],int T){
  int i;
  int num;
  cout<<"Ingresa la cantidad de numeros: ";cin>>num;
    for (i = 0; i < T; i++)
    {
        cout << "Ingresa los " << T << " elementos del arreglo :" << endl;
        cin >> x[i];
    }
}
void Numero(int x[],int T){
  int Num, i;
  int cont = 0;
   cout << "Escribe el numero que deseas saber: ";
    cin >> Num;
  for (i = 0; i < T ; i++)
  {
    if (Num== x[i])
      cont++;
  }
  cout << "El numero " << Num << " se repite " << cont << "de veces.";
}
int main()
{
  cout << endl;
  int i, NumeroABuscar;
  int tam;
  int Arreglo[tam];
  llenar(Arreglo,tam);
  Numero(Arreglo,tam);
  return 0;
  /*Tuve un inconveniente a la hora de correr el programa, por alguna razon me lanzaba 
 el mensaje de que el programa tenia un error y que windows lo cerraria.Espero eso no afecte mucho
 mi calificacion :( */
}