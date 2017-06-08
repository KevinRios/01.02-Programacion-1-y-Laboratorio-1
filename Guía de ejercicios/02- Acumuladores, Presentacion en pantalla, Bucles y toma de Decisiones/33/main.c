#include <stdio.h>
#include <stdlib.h>

int main()
{
    float factura;
    int opcion;
    char seguir='s';

    float acumuladorMozo1=0;
    int contadorMozo1=0;

    float acumuladorMozo2=0;
    int contadorMozo2=0;

    do
    {
        printf("Ingresar numero de mozo[1/2] o 0 para finalizar: ");
        scanf("%i", &opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingresar importe de la factura: ");
                scanf("%f", &factura);
                acumuladorMozo1=acumuladorMozo1+factura;
                contadorMozo1++;
                break;

            case 2:
                printf("Ingresar importe de la factura: ");
                scanf("%f", &factura);
                acumuladorMozo2=acumuladorMozo2+factura;
                contadorMozo2++;
                break;

            case 0:
                seguir='n';
                break;

            default:
                printf("Opcion incorrecta, ingresar [1/2/0]:");
                scanf("%i", &opcion);
                break;
        }

    }while(seguir=='s');


    //calculo de ganancia extra

    if(contadorMozo1>contadorMozo2)
    {
        acumuladorMozo1=acumuladorMozo1*1.33;
    }

    if(contadorMozo2>contadorMozo1)
    {
        acumuladorMozo2=acumuladorMozo2*1.33;
    }


    printf("Ganancia mozo 1: %.2f, atendio %i \n", acumuladorMozo1, contadorMozo1);
    printf("Ganancia mozo 2: %.2f, atendio %i \n", acumuladorMozo2, contadorMozo2);



    return 0;
}
