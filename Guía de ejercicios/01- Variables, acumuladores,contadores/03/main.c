#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("cls");

    int numero1;
    int numero2;
    int producto;
    int cuadrado;

    printf("Ingresar un numero: ");
    scanf("%i", &numero1);
    while(numero1<=0)
    {
       printf("Error, Ingresar un numero mayor a cero: ");
       scanf("%i", &numero1);
    }


     printf("Ingresar otro numero: ");
     scanf("%i", &numero2);
     while(numero2<=0)
     {
       printf("Error, Ingresar un numero mayor a cero: ");
       scanf("%i", &numero2);
     }



    producto=numero1*numero2;
    printf("%i * %i = %i\n",numero1,numero2,producto);

    cuadrado=numero1*numero1;
    printf("El cuadrado de %i es %i ",numero1,cuadrado);


}
