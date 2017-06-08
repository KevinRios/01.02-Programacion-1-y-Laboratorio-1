#include <stdio.h>
#include <stdlib.h>

int main()
{
   int base;
   int altura;
   float area;

   printf("Ingrese base: ");
   scanf("%i", &base);

   printf("Ingrese altura: ");
   scanf("%i", &altura);

   area= ((float)base*altura)/2;

   printf("El area es %.2f: ", area);

}
