#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Ingresar un numero:");
    scanf("%i", &numero);

    if(numero>0)
    {
       printf("Numero Positivo");
    }
    else
    {
        printf("Numero negativo");
    }


    return 0;
}
