#include <iostream>
using namespace std;
bool BISIESTO(int year){
        bool VALOR=false;
        if (year%400==0){
            VALOR=true;
        }else if(year%4==0 && year%100!=0){
            VALOR=true;
        }else{
             VALOR=false;
        }
    return VALOR;
}

int main(){
    int dia;
    int YEAR;
    int mes;
  cout<<"HOLA! :D "<<endl;
  cout<<"Ingresa los siguientes datos :D"<<endl;
  cout<<"Dia: ";cin>>dia;cout<<endl;
  cout<<"Mes: ";cin>>mes;cout<<endl;
  cout<<"Año: ";cin>>YEAR;cout<<endl;
   
   if (BISIESTO(YEAR)==true){
            if (dia<30&&mes<12){
             dia++;
             cout<<" La fecha es: "<<dia<<" del mes "<<mes<<" del año  "<<YEAR<<endl;
             cout<<"El año ingresado es bisiesto :D ";
         }else if(dia==31&&mes==1||3||5||7||8||10){
             mes++;
             cout<<" La fecha es: 1 del mes "<<mes<<" del año "<<YEAR<<endl;
             cout<<"El año ingresado es bisiesto :D ";
         }else if(dia==30&&mes==2||4||6||9||11){
             mes++;
             cout<<"La fecha es: 1 del mes "<<mes<<" del año "<<YEAR<<endl;
             cout<<"El año ingresado es bisiesto :D ";
         }else if(dia==31&&mes==12){
            YEAR++;
                cout<<"La fecha es: 1 del mes 1 del año "<<YEAR<<endl;
                cout<<"El año ingresado es bisiesto :D ";
        }
            
       }else if(BISIESTO(YEAR)==false){
            if (dia<30&&mes<12){
             dia++;
             cout<<" La fecha es: "<<dia<<" del mes "<<mes<<" del año  "<<YEAR<<endl;
             cout<<"El año ingresado NO es bisiesto";
         }else if(dia==31&&mes==1||3||5||7||8||10){
             mes++;
             cout<<" La fecha es: 1 del mes "<<mes<<" del año "<<YEAR<<endl;
             cout<<"El año ingresado NO es bisiesto";
         }else if(dia==30&&mes==2||4||6||9||11){
             mes++;
             cout<<"La fecha es: 1 del mes "<<mes<<" del año "<<YEAR<<endl;
             cout<<"El año ingresado NO es bisiesto";
         }else if(dia==31&&mes==12){
            YEAR++;
                cout<<"La fecha es: 1 del mes 1 del año "<<YEAR<<endl;
                cout<<"El año ingresado NO es bisiesto";
        }
           
       }
    
    return 0;
}