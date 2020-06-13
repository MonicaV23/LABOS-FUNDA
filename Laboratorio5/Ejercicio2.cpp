 #include <iostream>
 #include <time.h>
 using namespace std;
int main(){
    int hora,minutos,segundos;
    cout<<endl;
    cout<<"LECTOR DE HORA ACTUAL"<<endl<<endl;
    cout<<"Escriba la hora: ";
    cin>>hora;
    cout<<"Escriba los minutos: ";
    cin>>minutos;
    cout<<"Escriba los segundos: ";
    cin>>segundos;
    
    cout<<endl<<endl;
    
        if(hora>12&&segundos==59&&minutos==59){
        segundos++,minutos++,hora++;
        cout<<"Son las "<<hora<<" horas con 00 minutos y 00 segundos";
        }
        else if(segundos<59&&minutos<59){
        minutos++,segundos++;
        cout<<"Son las "<<hora<<" horas "<<" con "<<minutos<<" minutos y "<<segundos<<" segundos.";
        }
        else if(hora<=12&&segundos==59&&minutos==59){
        segundos++,minutos++,hora++;
        cout<<"Son las "<<hora<<" horas con 00 minutos y 00 segundos.";
        }
        else if(segundos==59&&minutos<59){
        minutos++;
        cout<<"Son las "<<hora<<" horas con "<<minutos<<" minutos y 00 segundos.";
        }
        else if(hora==23&&minutos==59&&segundos==59){
            cout<<" Son las 00 horas con 00 minutos con 00 segundos.";
        }

    return 0;
}