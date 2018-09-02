#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int i;
    int numeroMaximo;
    int numeroMinimo;

    {
        printf("Ingrese el primer numero\n");
        scanf("%d",&numeroUno);
        numeroMinimo=numeroUno;
        numeroMaximo=numeroUno;

        printf("Ingrese el segundo numero\n");
        scanf("%d",&numeroDos);
        if(numeroDos < numeroMinimo)
        {
            numeroMinimo=numeroDos;
        }
        else if(numeroDos > numeroMinimo)
        {
            numeroMaximo=numeroDos;
        }

        printf("Ingrese el tercer numero\n");
        scanf("%d",&numeroTres);
        if(numeroTres < numeroMinimo)
        {
            numeroMinimo=numeroTres;
        }
        else if ( numeroTres > numeroMaximo)
        {
            numeroMaximo=numeroTres;
        }

        printf("Numero minimo: %d \nNumero maximo: %d\n", numeroMinimo, numeroMaximo);

        if(numeroUno > numeroMinimo && numeroUno < numeroMaximo)
        {
            printf("El numero del medio es: %d", numeroUno);
        }
        else if (numeroDos > numeroMinimo && numeroDos < numeroMaximo)
        {
            printf("El numero del medio es: %d", numeroDos);
        }
        else
        {
            printf("El numero del medio es: %d", numeroTres);
        }
    }
    return 0;
}
