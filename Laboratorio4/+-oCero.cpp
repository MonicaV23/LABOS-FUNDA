#include <iostream>
using  namespace  std;
int main(){

    int numero1;
    cout<<"Numero:";
    cin>>numero1;
    if(numero1<0){
        cout<<"Negativo";
    }
    else if(numero1>0){
        cout<<"Positivo";
    }
    else{
        cout<<"Cero";
    }
    return 0;
}