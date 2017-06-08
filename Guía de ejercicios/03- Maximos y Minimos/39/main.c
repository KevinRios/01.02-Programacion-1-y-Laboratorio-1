#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    int numero4;

    printf("Ingresar primer numero: ");
    scanf("%i", &numero1);

    printf("Ingresar segundo numero: ");
    scanf("%i", &numero2);

    printf("Ingresar tercer numero: ");
    scanf("%i", &numero3);

    printf("Ingresar cuarto numero: ");
    scanf("%i", &numero4);

    if(numero1>numero2 && numero1>numero3 &&numero1>numero4)
    {
        printf("el mayor numero es el primero: %i", numero1) ;
    }

    if(numero2>numero1 && numero2>numero3 &&numero2>numero4)
    {
        printf("el mayor numero es el segundo: %i", numero2) ;

    }

    if(numero3>numero1 && numero3>numero2 &&numero3>numero4)
    {
        printf("el mayor numero es el tercero: %i", numero3) ;
    }
    if(numero4>numero1 && numero4>numero2 &&numero4>numero3)
    {
        printf("el mayor numero es el cuarto: %i", numero4) ;
    }

    return 0;
}
