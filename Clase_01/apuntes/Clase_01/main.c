#include <stdio.h>
#include <stdlib.h>

int main()
{


    int NumeroUno;
    int NumeroDos;
    int NumeroTres;
    printf("Ingrese el 1er numero.");
    scanf("%d",&NumeroUno);
    printf("Ingrese el 2do numero.");
    scanf("%d",&NumeroDos);
    printf("Ingrese el 3ro numero.");
    scanf("%d",&NumeroTres);

    if (NumeroUno>NumeroDos && NumeroUno<NumeroTres || NumeroUno<NumeroDos && NumeroUno>NumeroTres)
    {
        printf("el numero del medio es: %d",NumeroUno);
    }else if (NumeroDos>NumeroUno && NumeroDos<NumeroTres || NumeroDos<NumeroUno && NumeroDos>NumeroTres)
    {
        printf("el numero del medio es: %d",NumeroDos);
    }
    else if (NumeroTres>NumeroDos && NumeroTres<NumeroUno || NumeroTres<NumeroDos && NumeroTres>NumeroUno)
    {
        printf("el numero del medio es: %d",NumeroTres);
    }
    else
    {
    printf("No hay numero medio ");
    }
}




