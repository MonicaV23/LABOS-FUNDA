#include <iostream> 
#include <math.h>
using  namespace  std;
int main(){

    double num1;
    double num2;
    double num3;
    cout<<"Inserte datos:"<<endl;
    cout<<"Valor de a:";
    cin>>num1;
    cout<<"Valor de b:";
    cin>>num2;
    cout<<"Valor de c:";
    cin>>num3;

        double operacion1= ((-num2)+(sqrt(pow(num2,2)-4*num1*num3)))/(2*num1) ;
        cout<<"X1="<<operacion1<<endl;

        double operacion2= ((-num2)-(sqrt(pow(num2,2)-4*num1*num3)))/(2*num1);
        cout<<"X2="<<operacion2<<endl;

    return 0;
}