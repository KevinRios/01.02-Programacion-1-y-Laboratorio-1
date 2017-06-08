#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorHora;
    char nombre[20];
    int antiguedad;
    int horasTrabajadas;
    float sueldoBruto=0;

    float sueldoNeto;
    float totalDescuentos;

    printf("Ingrese valor hora: ");
    scanf("%f", &valorHora);

    printf("Ingrese Nombre Empleado: ");
    scanf("%s", &nombre);

    printf("Ingrese antiguedad: ");
    scanf("%i", &antiguedad);

    printf("Ingrese horas trabajadas: ");
    scanf("%i", &horasTrabajadas);


    //calculo de sueldo bruto y descuentos
    sueldoBruto=valorHora*horasTrabajadas+(antiguedad*30);

    //operaciones para determinar el sueldo:
    sueldoNeto=sueldoBruto*0.87;

    totalDescuentos=sueldoBruto-sueldoNeto;


    printf("Resumen: \n");
   // printf("Ingrese horas trabajadas: \n");
    printf("Antiguedad: %i \n", antiguedad);
    printf("Nombre: %s \n", nombre);
    printf("Valor hora: $%.2f\n", valorHora);
    printf("Sueldo Bruto: $%.2f\n", sueldoBruto);
    printf("Total Descuentos: $%.2f\n", totalDescuentos);
    printf("Sueldo Neto: $%.2f\n", sueldoNeto);


    return 0;
}
