#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5]= {3,5,7,2,1};
    int i;
    int *punteroVector;

    punteroVector= vector;

    for(i=0; i<5; i++)
    {
//        printf(" %d \n", *(punteroVector+i));

    }



//    printf("%p", punteroVector);


    return 0;
}
