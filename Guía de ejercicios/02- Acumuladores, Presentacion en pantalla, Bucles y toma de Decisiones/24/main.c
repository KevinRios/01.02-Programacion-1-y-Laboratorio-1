#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seguir='1';
    int peso;
    int contador80=0;
    int contadorMas80=0;

    do
    {
        printf("Ingresar peso: ");
        scanf("%i", &peso);
        if(peso>=80)
        {
            contadorMas80++;
        }
        else
        {
            contador80++;
        }

        printf("Ingresar 1 para seguir/ 0 para salir:  [1/0] \n");
        scanf("%i", &seguir);
        while((seguir!=1) && (seguir!=0))
        {
            printf("Error Ingresar 1 para seguir/ 0 para salir:  [1/0]\n");
            scanf("%i", &seguir);
        }



    }while(seguir==1);



    return 0;
}
