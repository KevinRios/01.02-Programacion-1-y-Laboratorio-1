#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nombre[70];
    char apellido[70];
    char completo[140];


    printf("Ingrese el nombre:");
    gets(nombre);


    printf("Ingrese el apellido:");
    gets(apellido);


    strcpy(completo,apellido);
    strcat(completo,", ");
    strcat(completo,nombre);
    printf("%s",completo);
    getch();
    return 0;
}
