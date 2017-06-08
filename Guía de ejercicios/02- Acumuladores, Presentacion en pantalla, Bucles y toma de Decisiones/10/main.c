#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0;
    int contadorPar=0;
    int contadorImpar=0;

    while(numero<100)
    {
        if(numero%2==0)
        {
            contadorPar++;
        }
        else
        {
            contadorImpar++;
        }

        numero++;

    }

    printf("hay en total %i numeros par\n", contadorPar);
    printf("hay en total %i numeros Impar", contadorImpar);

    return 0;

}
