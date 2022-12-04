#include <stdio.h>

int i; 
int v1[3], v2[3];
int *ap_v1, *ap_v2;
int tam = 3;

void vector(int vec[], int dim)
{
    for(i = 0; i < dim; i++)
    {
        printf("Dame datos\n");
        scanf("%d", &vec[i]);
    }

    printf("\nImprimiendo direcion...\n");
    for(i = 0; i < dim; i++)
    {
        printf("%p\n", &vec[i]);
    }
}

void apuntador(int *ap1, int *ap2, int vec1[], int vec2[], int dim)
{
    printf("\nDespues del intercambio\n");
    printf("Vector1\n");
    for (i = 0; i < dim; i++)
    {
        //se le asigna las direcciones del vector 2 al apuntador 1
        ap1 = &vec2[i];
        //se le asigna los valores del vector 2 al apuntador 1
        *ap1 = vec2[i];
        //se imprimen los valores contenidos en *ap1 que son los mimso que los del vector 2
        printf("%d\n", *ap1);
    }
    
    printf("\nVector2\n");
    for (i = 0; i < dim; i++)
    {
        //se le asigna las direcciones del vector 1 al apuntador 2
        ap2 = &vec1[i];
        //se le asigna los valores del vector 1 al apuntador 2
        *ap2 = vec1[i];
        //se imprimen los valores contenidos en *ap2 que son los mimso que los del vector 1
        printf("%d\n", *ap2);
    }
}

int main()
{
    vector(v1, tam);
    printf("\n");
    vector(v2, tam);

    apuntador(ap_v1, ap_v2, v1, v2, tam);
}