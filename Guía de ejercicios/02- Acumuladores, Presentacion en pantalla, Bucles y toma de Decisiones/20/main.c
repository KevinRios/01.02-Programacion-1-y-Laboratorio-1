#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int iterador=1;


    printf("Ingresar un numero:");
    scanf("%i", &numero);

    for(iterador;iterador<numero;iterador++)
    {
        printf("%i \n", iterador);
    }

    return 0;
}
