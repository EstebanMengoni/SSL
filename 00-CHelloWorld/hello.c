#include <stdio.h>

int main ()
{
    FILE * archivo;
    archivo = fopen ("output.txt","wt");

    fprintf(archivo,"%s","Hello World");

    fclose (archivo);
    return 0;
}