#include <iostream>
using  namespace  std;

int main(){

    cout<<"Ingrese los datos"<<endl;
    int num1;
    int num2;

    cout<<"Numero Mayor:";
    cin>>num1;
    cout<<"Numero Menor:";
    cin>>num2;
    
    if (num1%num2==0){
        cout<<"Si es divisor :) " ;
    }
    else{cout<<"No es divisor :( ";
    }
    return 0;
    
}