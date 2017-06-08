#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int resta;

    printf("Ingresar un numero: ");
    scanf("%i", &numero1);

    printf("Ingresar otro numero: ");
    scanf("%i", &numero2);

    resta=numero1-numero2;
    printf("%i - %i = %i \n", numero1, numero2, resta);

    if(resta<0)
    {
         printf("Resultado negativo");
    }
    else
    {
        printf("Resultado Positivo");
    }
}


