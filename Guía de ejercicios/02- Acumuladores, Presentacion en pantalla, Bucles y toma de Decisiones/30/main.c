#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;

    printf("Ingresar PRIMER numero: ");
    scanf("%i", &numero1);

    printf("Ingresar SEGUNDO numero: ");
    scanf("%i", &numero2);

    printf("Ingresar TERCER numero: ");
    scanf("%i", &numero3);

    if(numero3>=numero1 && numero3<=numero2)
    {
        printf("%i PERTENECE al intervalo comprendido entre %i y %i", numero3, numero1, numero2);
    }
    else
    {
        printf("%i NO PERTENECE al intervalo comprendido entre %i y %i", numero3, numero1, numero2);
    }


    return 0;
}
