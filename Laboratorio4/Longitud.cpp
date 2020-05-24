#include <iostream>
#include <string.h>
using  namespace  std;
int main(){
    cout<<"Quieres saber la longitud de una palabra?"<<endl<<endl;
    cout<<"Escribe la palabra:";

    char palabra[205] ;
    cin>>palabra;
    int longitud=strlen(palabra);
    cout<<"La palabra ingresada tiene una longitud de "<<longitud<< " caracteres."<<endl;
    int num1=2;
    
    if(longitud%num1==0){
        cout<<"La longitud es par";
    }
    else{
        cout<<"La longitud es impar";
    }
    return 0;
}