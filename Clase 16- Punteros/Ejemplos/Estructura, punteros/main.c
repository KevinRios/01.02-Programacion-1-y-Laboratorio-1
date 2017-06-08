#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int legajo;
    char nombre[50];
}eAlumno;


int main()
{
    int i;
    eAlumno miAlumno[10],*p;
    p=&miAlumno;

    //(*p).legajo=7;
    //printf("%s",p);


    p->legajo=7


    for(i=0;i<10;i++)
    {
        (*(p+i))->legajo=0;
    }


    return 0;
}
