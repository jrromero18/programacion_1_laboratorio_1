/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un número tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los máximos y mínimos
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numeroAux;
    int numeroMax;
    int numeroMin;
    int acumulador;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroAux);
    numeroMin = numeroAux;
    numeroMax = numeroAux;
    acumulador = numeroAux;



    for (i=0;i<4;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeroAux);
        acumulador = acumulador + numeroAux;

        if (numeroAux<numeroMin)
        {
            numeroMin = numeroAux;
        }
        if (numeroAux>numeroMax)
        {
            numeroMax = numeroAux;
        }


    }

    printf("El maximo es: %d\n",numeroMax);
    printf("El minimo es: %d\n",numeroMin);
    printf("El promedio es: %i\n",acumulador/5);
    printf("la suma es: %d\n",acumulador);

    return 0;

}
