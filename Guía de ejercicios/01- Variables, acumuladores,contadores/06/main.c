#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int contadorGeneral=0;
    int contadorMayor0=0;
    int contadorMenor0=0;

    for(contadorGeneral=0;contadorGeneral<10;contadorGeneral++)
    {
        printf("Ingresar numero: ");
        scanf("%i", &numero);

        if(numero>0)
        {
            contadorMayor0++;
        }
        else
        {
            contadorMenor0++;
        }
    }

    printf("Numeros mayores a cero: %i \n", contadorMayor0);
    printf("Numeros menores a cero: %i", contadorMenor0);

}
