#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contador=0;
    int suma=0;
    int producto=1;

    while(contador<10)
    {
        printf("Ingresar numero: ");
        scanf("%i", &numero);
        while(numero==0)
        {
          printf("Error, Ingresar numero distinto a cero: ");
          scanf("%i", &numero);
        }

        if(numero>0)
        {
            suma=suma+numero;
        }
        else
        {
            producto=producto*numero;
        }

        contador++;
    }

    printf("Positivos suma: %i \n",suma);
    printf("Negativos producto: %i \n", producto);
}
