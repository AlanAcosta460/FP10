#include <stdio.h>

int main()
{
    int i, j, matriz[3][4];

    printf("Ingresa los datos: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

    int temp[12], aux = 0, k = 0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            temp[k] = matriz[i][j];
            k = k + 1;
        }
    }

    for ( i = 0; i < 12; i++)
    {
        for ( k = 0; k < 12; k++)
        {
            if (temp[k] < temp[k + 1])
            {
                aux = temp[k];
                temp[k] = temp[k + 1];
                temp[k + 1] = aux;
            }
        }  
    }
    
    k = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            matriz[i][j] = temp[k];
            k = k + 1;
        }
    }    

    printf("\n");
    printf("Ordenados de manera decendente: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

}