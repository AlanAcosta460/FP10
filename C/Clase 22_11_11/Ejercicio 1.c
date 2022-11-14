#include <stdio.h>
int main()
{
    int matriz1[2][3], matriz2[2][3], suma[2][3], i, j;

    printf("Ingresa los datos de matriz 1: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &matriz1[i][j]);
        }
        printf("\n");
    }

    printf("Ingresa los datos de matriz 2: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &matriz2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
        printf("\n");
    }

    printf("La suma de la matiriz 1 + la matriz 2 es: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i\t", suma[i][j]);
        }
        printf("\n");
    }


}