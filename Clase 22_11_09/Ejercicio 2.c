#include <stdio.h>
int main()
{
    int i, j, matriz[2][3];

    printf("Ingresa los datos: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

}
