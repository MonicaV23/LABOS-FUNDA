#include  <iostream>
using  namespace  std;
int main(){

    int N;
    
cout<<"Hola Bienvenido"<<endl;
cout<<"Seleccione un color:"<<endl;
cout<<"1.Negro"<<endl<<"2.Rojo"<<endl;
cout<<"Escriba el numero del color que ha seleccionado:";
cin>>N;
if(N==1){
    cout<<"Ha ganado $45 dollares";
}  
else if(N==2){
 cout<<"Ha ganado $5 dolares";
}
    return 0;
}