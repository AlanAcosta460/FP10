#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo;
    char caracter;
    archivo = fopen("plan.txt", "r");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    while ((caracter = fgetc(archivo)) != EOF)
    {
        printf("%c", caracter);
    }
    fclose(archivo);
}