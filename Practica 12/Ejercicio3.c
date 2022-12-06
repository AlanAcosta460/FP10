#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *archivo;
    char nombre[100] = "", posicion[100] = "", estado[100] = "", repetir[1];
    int op;

    rep:
    archivo = fopen("jugadores.txt", "a");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }

    printf("Escribe el nombre del jugador -> ");
    scanf("%s", nombre);
    printf("Escribe la posicion del jugador -> ");
    scanf("%s", posicion);

    printf("1. Excelente \n2. Buena \n3. Regular \n4. Pesima \n");
    printf("Selecciona el estado de salud del jugador -> ");
    scanf("%i", &op);
    switch (op)
    {
    case 1:
        strcpy(estado, "Excelente");
        break;
    case 2:
        strcpy(estado, "Buena");
        break;
    case 3:
        strcpy(estado, "Regular");
        break;
    case 4:
        strcpy(estado, "Pesima");
        break;
    default:
        printf("Opcion no valida");
        break;
    }
    fprintf(archivo, "%s %s %s\n", nombre, posicion, estado);
    fclose(archivo);

    printf("\nDesea insertar otro jugador? (s/n) -> ");
    scanf("%s", repetir);

    if (strcmp(repetir, "s") == 0)
    {
        goto rep;
    }
    else
    {
        printf("\nGracias por usar el programa :)");
    }
    
    return 0;
}