#include  <iostream>
using  namespace  std;

int main(){

    string nombre;
    double num1;
    double num2;
    
    cout<<"Nombre del producto:";
    cin>>nombre;
    cout<<"Precio:$";
    cin>>num1;
    cout<<"Cantidad comprada:";
    cin>>num2;

    double total= num1*num2;
    cout<<"Total=$"<<total;

    return 0;
}