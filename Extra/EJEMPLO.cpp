#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
   printf("\n  **PROGRAMA DEL TEOREMA DE EUCLIDES**\n\n");
    printf("  Hola. Aqui podras calculas el MCD (Maximo Comun Divisor) de dos numeros.\n\n  Por favor, introduzca su Dividendo:  ");
    int Dividendo;
    scanf (" %d", &Dividendo);
    printf("\n  Ahora, introduzca el Divisor:  ");
    int Divisor;
    scanf (" %d", &Divisor);
    int Resto = Dividendo%Divisor;
    if(Resto == 0){
       printf("\n\n  El MCD es %d", Divisor);
       }
    while(!Resto == 0)
    {
     Dividendo = Divisor;
     Divisor = Resto;
     Resto = Dividendo%Divisor;
     if(Dividendo%Divisor == 0){
        printf("\n\n  El MCD es %d", Divisor);
        break;
     }
    }
 return 0;
}