#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    for(numero=0; numero<=100; numero++)
    {

        if((numero%5==0)&&(numero%7==0))
        {
            printf("%i\n", numero);
        }

    }

    return 0;
}
