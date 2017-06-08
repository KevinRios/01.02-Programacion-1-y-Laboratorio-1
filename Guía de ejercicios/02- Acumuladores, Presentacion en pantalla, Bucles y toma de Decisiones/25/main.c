#include <stdio.h>
#include <stdlib.h>

int main()
{
    char seguir='s';
    int opcion;

    int acumuladorVendedor1=0;
    float ganancias1;

    int acumuladorVendedor2=0;
    float ganancias2;

    int acumuladorVendedor3=0;
    float ganancias3;

    float importe;

    do
    {
        printf("Ingresar Vendedor: [1/2/3] o 0 para finalizar: ");
        scanf("%i", &opcion);



        switch(opcion)
        {
            case 1:
                printf("Ingresar Importe: ");
                scanf("%f", &importe);
                acumuladorVendedor1=acumuladorVendedor1+importe;
                break;
            case 2:
                printf("Ingresar Importe: ");
                scanf("%f", &importe);
                acumuladorVendedor2=acumuladorVendedor2+importe;
                break;

            case 3:
                printf("Ingresar Importe: ");
                scanf("%f", &importe);
                acumuladorVendedor3=acumuladorVendedor3+importe;
                break;

            case 0:
                seguir = 'n';
                break;

            default:
                printf("Error Ingresar opcion valida [1/2/3/0]\n");
                scanf("%i", &opcion);
                break;
        }



    }
    while(seguir=='s');


    //ganancias de cada vendedor
    ganancias1=acumuladorVendedor1 * 0.05;
    ganancias2=acumuladorVendedor2 * 0.05;
    ganancias3=acumuladorVendedor3 * 0.05;

    printf("El vendedor 1 gano: %.2f \n", ganancias1);
    printf("El vendedor 2 gano: %.2f \n", ganancias2);
    printf("El vendedor 3 gano: %.2f \n", ganancias3);

    return 0;
}
