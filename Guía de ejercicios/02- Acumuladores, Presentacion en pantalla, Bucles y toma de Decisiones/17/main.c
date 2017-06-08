#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Ingresar un numero: ");
    scanf("%i", &numero);


    if(numero%2==0)
    {
       printf("Numero Par");
    }
    else
    {
        printf("Numero impar");
    }



}
