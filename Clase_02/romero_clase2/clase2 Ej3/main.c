#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[5];
    int acumulador;
    int i;

    for (i=0;i<5;i++)
    {
        printf("\nNumero %d: ",i+1);
        while(scanf("%d",&numero[i]) != 1)
        {
            printf("\nError - no es un numero %d:",i+1);
            __fpurge(stdin);

        }
        acumulador = acumulador + numero[i];

    }

    printf("El promedio es: %d",acumulador/5);

    printf("La suma es: %d",acumulador);

    return 0;
}
