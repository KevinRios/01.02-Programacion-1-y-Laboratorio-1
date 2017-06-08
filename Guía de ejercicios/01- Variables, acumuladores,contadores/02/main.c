#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int suma;

    printf("Ingresar un numero: ");
    scanf("%i", &numero1);

    printf("Ingresar otro numero: ");
    scanf("%i", &numero2);

    suma=numero1+numero2;

    printf("%i + %i = %i", numero1,numero2,suma);



}
