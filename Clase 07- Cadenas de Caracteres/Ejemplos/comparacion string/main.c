#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{

    char nombre[50];

} ENombre;



int main()
{
    ENombre listaNombres;

    int i;
    char auxNombre[50];

    printf("ALTA\n");
    printf("Ingresar Nombre:\n");
    fflush(stdin);
    gets(listaNombres.nombre);


    printf("BAJA\n");
    printf("Ingresar Nombre para borrar:\n");
    fflush(stdin);
    gets(auxNombre);

    if (strcmp(auxNombre,listaNombres.nombre) == 0)
    {
        printf("Entered strings are equal.\n");
    }
    else
    {
        printf("Entered strings are not equal.\n");

    }

    return 0;
}
