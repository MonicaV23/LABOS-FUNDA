#include <iostream>
using  namespace  std;

int main(){
    int num1;
    int num2;
    int num3;

    cin>>num1;
    cin>>num2; 
    cin>>num3;

    int suma= num1+num2+num3;
    cout <<"Total="<<suma<<endl;

    float promedio= suma/3.0;
    cout <<"Promemdio="<<promedio;

    return 0;
}