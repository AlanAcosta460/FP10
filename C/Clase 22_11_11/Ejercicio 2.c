#include <stdio.h>
int main()
{
    int i, j, n, m, traza = 0;
    printf("Cantidad de filas -> ");
    scanf("%i", &n);

    printf("\nCantidad de columnas > ");
    scanf("%i", &m);

    int matriz[n][m];

    printf("\nIngresa los datos de matriz: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j)
            {
                traza += matriz[i][j];
            }
        }
    }
    
    printf("La traza de la matriz es: %i\n", traza);


}