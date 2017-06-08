#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numeroAuxiliar;


    printf("Ingrese un numero: ");
    scanf("%i", &numero1);

    printf("Ingrese otro numero: ");
    scanf("%i", &numero2);

    numeroAuxiliar=numero1;
    numero1=numero2;
    numero2=numeroAuxiliar;


    printf("cambio: %i ---- %i", numero1, numero2);

}

