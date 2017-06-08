#include <stdio.h>
#include <stdlib.h>
#define A 2

#include "Empleados.h"

int main()
{


    eEmpleado misEmpleados[A], auxEmpleado;
    int i, j;

    for(i=0; i<A; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &misEmpleados[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(misEmpleados[i].nombre);
        printf("Ingrese sueldo: ");
        scanf("%f", &misEmpleados[i].sueldo);
        printf("Ingrese estado civil: ");
        misEmpleados[i].eCivil = getche();

    }

    printf("\n");

    for(i=0; i<A-1; i++)
    {
        for(j=i+1; j<A; j++)
        {
            if(strcmp(misEmpleados[i].nombre, misEmpleados[j].nombre)>0)
            {
                auxEmpleado = misEmpleados[i];
                misEmpleados[i]=misEmpleados[j];
                misEmpleados[j] = auxEmpleado;
            }
        }
    }


    mostrarNomina(misEmpleados, A);

    return 0;
}


/*eEmpleado unEmpleado;
eEmpleado otroEmpleado = {58, "luis", 7600, 'c'};
*/
/*unEmpleado.legajo = 80;
unEmpleado.sueldo = 7800.85;
unEmpleado.eCivil = 's';
strcpy(unEmpleado.nombre , "jose");*/

