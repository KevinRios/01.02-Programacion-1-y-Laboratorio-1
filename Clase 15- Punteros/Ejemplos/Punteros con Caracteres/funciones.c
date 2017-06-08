


int contarVocales(char*)
{

    int n_vocals=0, i;
    printf("Introdueix una cadena de caracters: ");
    gets(cadena);
    i=0;
    while (cadena[i]!='\0')
    {
        if ((cadena[i]=='a') ||(cadena[i]=='e') ||(cadena[i]=='i') ||(cadena[i]=='o') ||(cadena[i]=='u') ||
                (cadena[i]=='A') ||(cadena[i]=='E') ||(cadena[i]=='I') ||(cadena[i]=='O') ||(cadena[i]=='U'))
            n_vocals++;
        i++;
    }
    printf("El nombre de vocals a la cadena es: %d\n", n_vocals);
}
