#include <stdio.h>
#include <stdlib.h>

int main()
{



int numeroUno;
int numeroDos;
int numeroTres;
int numeroMax;
int numeroMin;
int i;

printf("Ingrese el 1er valor");
scanf("%d",&numeroUno);
numeroMin = numeroUno;
numeroMax = numeroUno;
printf("Ingrese el 2do valor");
scanf("%d",&numeroDos);
if (numeroDos>numeroMax)
{
    numeroMax = numeroDos;
}else if (numeroDos<numeroMin)
{
    numeroMin = numeroDos;
}
printf("Ingrese el 2do valor");
scanf("%d",&numeroTres);
if (numeroTres>numeroMax)
{
    numeroMax = numeroTres;
}else if (numeroTres<numeroMin)
{
    numeroMin = numeroTres;
}
printf("El max es: %d - El min es: %d",numeroMax,numeroMin);

if(numeroUno<numeroMax && numeroUno>numeroMin)
{
    printf("El numero del medio es: %d",numeroUno);
}
else if(numeroDos<numeroMax && numeroDos>numeroMin)
{
    printf("El numero del medio es: %d",numeroDos);
}
else if(numeroTres<numeroMax && numeroTres>numeroMin)
{
    printf("El numero del medio es: %d",numeroTres);
}
else
{
    printf("no hay numero medio");
}
   return 0;
}
