#include <stdio.h>

int main()
{
    int tamanio = 0, numero = 0;

    printf("Ingresa el tamaño del arreglo : \t");
    scanf("%d",&tamanio);
    printf("Ingresa ahora el número base: \t");
    scanf("%d",&numero);


    int arreglo[tamanio];

    for(int i=0; i<tamanio; i++){
        arreglo[i] = numero * (i+1);
    }

    printf("[ ");
    for(int i=0; i<tamanio; i++){
        printf("  %d  ",arreglo[i]);
    }
    printf(" ]\n");

        return 0;
}