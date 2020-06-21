#include <iostream>
using namespace std;
void DesplegarArreglo(int suma[], int A)
{
    int i;
    for (i = 0; i < A; i++)
    {
        cout << "La suma de los elementos del arreglo es: " << suma[i] << endl;
    }
}
void Suma(int x[], int y[], int A, int suma[])
{
    int i;
    for (i = 0; i < A; i++)
    {
        suma[i] = x[i] + y[i];
    }
    DesplegarArreglo(suma, A);
}
void LeerArreglo(int x[], int A)
{
    int i;
    int y[A];
    int suma[A];

    for (i = 0; i < A; i++)
    {
        cout << "Ingresa los " << A << " elementos del arreglo 1:" << endl;
        cin >> x[i];
    }
    for (i = 0; i < A; i++)
    {
        cout << "Ingresa los " << A << " elementos del arreglo 2:" << endl;
        cin >> y[i];
    }
    Suma(x,y, A, suma);
};
int main()
{
    int n;
    int longitudA;
    cout << "Hola :D" << endl;
    cout << "Cuantos elementos desea introducir? ";cin>>n;
    cout<<"Ingrese los "<<n<<" elementos del arreglo :"<<endl;
    cin >> longitudA;
    int arreglo_1[longitudA];
    LeerArreglo(arreglo_1, longitudA);
    return 0;
 /*Tuve un inconveniente a la hora de correr el programa, por alguna razon me lanzaba 
 el mensaje de que el programa tenia un error y que windows lo cerraria. Le escribi
 el dia sabado 20 a Danniela y ella estuvo ayudandome a tratar de ver como resolverlo.
 Por alguna razon a ella si le corrio el programa y a mi no, espero eso no afecte mucho
 mi calificacion :( */   
}