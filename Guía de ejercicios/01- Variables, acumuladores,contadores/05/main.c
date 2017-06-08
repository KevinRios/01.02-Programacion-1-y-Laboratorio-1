#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int cuadrado;

    printf("Ingresar un numero: ");
    scanf("%i", &numero);
    while(numero<0)
    {
        printf("ERROR, el numero debe ser mayor que cero, Reingrese un numero: ");
        scanf("%i", &numero);
    }

    cuadrado=numero*numero;

    printf("%i", cuadrado);
}
