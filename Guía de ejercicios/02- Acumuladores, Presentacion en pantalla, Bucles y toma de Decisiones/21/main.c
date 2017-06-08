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
       if(iterador%3==0)
       {
          printf("%i \n", iterador);
       }
    }

}
