#include  <iostream>
using  namespace  std;
int main(){

    int P1;
    double Total;
    double Precio;
    float IVA;
    cout<<"Bienvenidos"<<endl<<endl;
    cout<<"Escriba el precio:$";
    cin>>Precio;
    cout<<"Pais de procedencia:"<<endl;
    cout<<"1.El Salavador"<<endl<<"2.Guatemala"<<endl<<"3.Honduras"<<endl<<"4.Espana"<<endl<<endl;
    cout<<"Escriba el numero del pais de procedencia:";
    cin>>P1;
    if (P1==1){
        cout<<"IVA correspondiente al pais : 13% "<<endl;
        IVA=Precio*0.13;
        cout<<"El IVA es:$ "<<IVA<<endl;
        Total=Precio+IVA;
        cout<<"El total a pagar es:$ "<<Total;
    }
    else if(P1==2){            
        cout<<"IVA correspondiente al pais : 9% "<<endl;
        IVA=Precio*0.09;
        cout<<"El IVA es:$ "<<IVA<<endl;
        Total=Precio+IVA;
        cout<<"El total a pagar es:$ "<<Total;
    }
    else if(P1==3){     
        cout<<"IVA correspondiente al pais : 15%"<<endl;
        Total=Precio*0.15;
        cout<<"El IVA es:$ "<<IVA<<endl;
        Total=Precio+IVA;
        cout<<"El total a pagar es:$ "<<Total;
    }
    else if(P1==4){     
        cout<<"IVA correspondiente al pais : 20% "<<endl;
        IVA=Precio*0.20;
        cout<<"El IVA es:$ "<<IVA<<endl;
        Total=Precio+IVA;
        cout<<"El total a pagar es:$ "<<Total;
    }

    return 0;
}