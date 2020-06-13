#include <iostream>
using  namespace std;
    int MCD(int dividendo, int divisor){
int total;
    do {
    total = dividendo % divisor;
        if(total != 0){
        dividendo = divisor;
        divisor = total;
         }
    }
    while(total != 0);{
    cout << "El MCD es: " << divisor;
    cout << endl;
    }
    return total;
}

int main(){
    int dividendo,divisor,Total;
  cout<<"PROGRAMA DEL CALCULO DEL MCD"<<endl<<endl;
  cout<<"Bienvenido! "<<endl;
  cout<<"Ingrese el dividendo(nuemero mayor): ";
  cin>>dividendo;
  cout<<"Ingrese el divisor(numero menor):  ";
  cin>>divisor;
   
    Total = MCD(dividendo, divisor);
  
  return 0;
}