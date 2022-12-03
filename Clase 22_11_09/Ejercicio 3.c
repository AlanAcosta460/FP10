#include <stdio.h>
int main()
{
    int i, j, matriz[2][3];
    float suma = 0, prom = 0;

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

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            suma = suma + matriz[i][j];
        }
        
    }
    
    printf("\nLa suma de los datos es: -> %.0f", suma);

    prom = suma/6;
    printf("\n");
    printf("\nEl promedio es: -> %.2f", prom);
    printf("\n");
}
