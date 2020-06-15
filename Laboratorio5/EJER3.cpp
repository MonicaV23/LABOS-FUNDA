#include <iostream>
using namespace std;

bool BISIESTO(int year){
        bool VALOR=false;
        if (year%400==0){
            VALOR=true;
        }else if(year%4==0 && year%100!=0){
            VALOR=true;
        }else{
             VALOR=false;
        }
    return VALOR;
}
int main(){
    int Y;
    cout<<endl;
    cout<<"EL AÑO ES BISIESTO O NO LO ES?"<<endl;
    cout<<"Escribe el año: ";cin>>Y;
       if (BISIESTO(Y)==true){
            cout<<"El año ingresado es bisiesto :D ";
       }else if(BISIESTO(Y)==false){
           cout<<"El año ingresado NO es bisiesto";
       }
       
    return 0;
}