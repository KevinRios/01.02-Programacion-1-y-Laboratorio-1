#include "Empleados.h"


void mostrarEmpleado(eEmpleado x)
{
    printf("%d\t%s\t%f\t%c\n", x.legajo, x.nombre, x.sueldo, x.eCivil);


}

void mostrarNomina(eEmpleado losEmpleados[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarEmpleado(losEmpleados[i]);
    }

}

