#include <iostream>
using namespace std;
int main(){
    
    int num1;
    int num2=2;
    cout<<"Ingresa el numero:";
    cin>>num1;

    if( num1%num2==0){
        cout<<"Es par";
    }
    else{
        cout<<"Es impar";
    }
    return 0;

}