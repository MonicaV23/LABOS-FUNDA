#include <iostream>
#include <math.h>
using  namespace  std;
int main(){

    double num1;
    cout<<"EScriba el radio del circulo:";
    cin>>num1;
    

     double area= (3.1416)*pow(num1,2); 
        cout<<"Area="<<area<<endl;

    double perimetro=2*(3.1416)*num1;
        cout<<"Perimetro="<<perimetro<<endl;
    
    return 0;
}