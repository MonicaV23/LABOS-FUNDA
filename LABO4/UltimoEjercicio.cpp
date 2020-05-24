#include <iostream>
#include <string.h>
using  namespace  std;
int main(){

    cout<<"Bienvenido al programa que verifica si la palabra inicia y termina con la misma letra  :)"<<endl<<endl;
    cout<<"Porfavor escribe la palara en minusculas :)"<<endl;
    string palabra;
    cout<<"Escribe la palabra:"<<endl;
    cin>>palabra;
    int posicion=palabra.length();
    char posicion1= palabra[0];
    cout<<"La primera letra es "<<posicion1<<endl<<endl;
    char posicion2=palabra[posicion-1];
    cout<<"La ultima letra es "<<posicion2<<endl<<endl;
     
    if(posicion1==posicion2){
        cout<<"Por lo que a letra con la que inicia y termina la palabra es la misma";
    }
    else{
        cout<<"Por lo tanto,NO comienza ni termina con la misma letra.";
    }
    return 0;
}