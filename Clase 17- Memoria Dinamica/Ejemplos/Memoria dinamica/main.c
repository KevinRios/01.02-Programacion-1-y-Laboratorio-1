#include <stdio.h>
#include <stdlib.h>

#define T 5

typedef struct
{
    int aInt;
    float aFloat;
    char cadena[30];
} eTipo;

eTipo* newTipo();
eTipo* newTipoParam(int, float, char[]);
void mostrarEtipo(eTipo*);

int main()
{

    eTipo* vector[T];
    eTipo* p;
    int i;
    int entero;
    float flotante;

    char cadena[30];

    for(i=0; i<T;i++)
    {
        printf("Ingrese entero: ");
        scanf("%d", &entero);
        printf("Ingrese flotante: ");
        scanf("%f", &flotante);
        printf("Ingrese cadena: ");
        fflush(stdin);
        gets(cadena);

        p=newTipoParam(entero, flotante, cadena);

        vector[i] = p;


    }


for(i=0; i<T;i++)
{
    mostrarEtipo(vector[i]);
}





    return 0;
}
eTipo* newTipo()//constructor por defecto
{
    eTipo* p;
    p = (eTipo*) malloc(sizeof(eTipo));
    return p;

}

eTipo* newTipoParam(int datoInt, float datoFloat, char cadena[])
{
    eTipo* p;
    p = newTipo();
    p->aInt = datoInt;
    p->aFloat = datoFloat;
    strcpy(p->cadena,cadena);
    return p;

}

void mostrarEtipo(eTipo* this)
{
     printf("%d--%f--%s\n", this->aInt, this->aFloat, this->cadena);
}
