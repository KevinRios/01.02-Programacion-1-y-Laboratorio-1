#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int iterador=0;
    int suma=0;

    printf("Ingresar un numero:");
    scanf("%i", &numero);

    for(iterador;iterador<=numero;iterador++)
    {
       suma=suma+iterador;
    }

    printf("%i \n", suma);

}
