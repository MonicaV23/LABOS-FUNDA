#include  <iostream>
using  namespace  std;
int main(){
    int n;
    cout<<"Bienvenido a la ruleta de la fortuna!"<<endl<<endl;
    cout<<"Escoje entre los siguientes colores: "<<endl;
    cout<<"1.Rojo"<<endl<<"2.Amarillo"<<endl<<"3.Verde"<<endl<<"4.Azul"<<endl<<"5.Morado"<<endl<<endl;
    cout<<"Escribe el numero del color que elegiste:";
    cin>>n;
    if (n==1){
        cout<<"Felicidades! Has ganado $50 dolares :)"<<endl<<"Gracias por participar";
    }
    else if(n==2){
        cout<<"Felicidades! Has ganado $30 dolares :)"<<endl<<"Gracias por participar";
    }
    else if(n==3){
        cout<<"Felicidades, has conseguido el premio mayor! Has ganado $500 dolares :)"<<endl<<"Gracias por participar";  
    }
    else if(n==4){    
        cout<<"Felicidades! Has ganado $5 dolares :)"<<endl<<"Gracias por participar";
    }
    else if(n==5){    
        cout<<"Felicidades! Has ganado $60 dolares :)"<<endl<<"Gracias por participar";
    }   
    return 0;
}