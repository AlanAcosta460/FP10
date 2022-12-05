#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[100], posicion[100], estado[100];
    FILE *archivo;
    int op, opr;
    archivo = fopen("jugadores.txt", "a");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    
    menu:
    printf("Escribe el nombre del jugador -> ");
    scanf("%s", nombre);
    printf("\nEscribe la posicion del jugador -> ");
    scanf("%s", posicion);

    printf("\nSelecciona el estado de salud del jugador\n");
    printf("1. Excelente \n2. Buena \n3. Regular \n4. Pesima\n ");

    scanf("%d", &op);
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
    fprintf(archivo, "%s \t\t%s \t\t%s", nombre, posicion, estado);
    fclose(archivo);

    printf("\nDesea insertar otro jugador? \n1. Si \n2. No\n");
    scanf("%d", &opr);
    if (opr == 1)
        goto menu;
    else
    {
        printf("\nGracias por usar el programa :)\n");
    }

    return 0;
}