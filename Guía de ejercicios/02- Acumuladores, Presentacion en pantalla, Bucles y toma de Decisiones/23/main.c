#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;

    printf("Ingresa un numero: ");
    scanf("%d",&numero1);

    printf("Ingresa otro numero: ");
    scanf("%d",&numero2);

    printf("Ingresa otro numero: ");
    scanf("%d",&numero3);

    if(numero1 > numero2 && numero1 > numero3)
    {
        printf("El numero mayor es: %d",numero1);
    }
    else
    {
        if(numero2 > numero1 && numero2 > numero3)
        {
            printf("El numero mayor es: %d",numero2);
        }
        else
        {
            printf("El numero mayor es: %d",numero3);
        }
    }


    return 0;
}
