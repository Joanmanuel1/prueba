#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosPositivos=0;
    int numerosNegativos=0;
    int i;
    int numeroIngresado;

    for( i=0; i<=10; i++)

    {
        printf("Ingrese un numero:\n");
        scanf("%d",&numeroIngresado);


        if (numeroIngresado <0)
        {
            numerosNegativos++;
        }
        if (numeroIngresado >=0)
        {
            numerosPositivos++;;
        }
    }
    printf("Los numeros positivos son: %d \nLos numeros negativos son: %d \n", numerosPositivos, numerosNegativos);
    return 0;
}


