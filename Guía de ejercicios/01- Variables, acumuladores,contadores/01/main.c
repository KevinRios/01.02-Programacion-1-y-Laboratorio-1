#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;
   int contador=0;
   int acumulador=0;
   float promedio;

   while(contador<5)
   {

       printf("Ingrese un numero: ");
       scanf("%i", &numero);

       acumulador=acumulador+numero;
       contador++;
   }

   promedio=(float)acumulador/contador;

   printf("%.2f \n", promedio);

   return 0;
}
