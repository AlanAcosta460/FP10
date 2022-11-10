#include <stdio.h>
#include <string.h>

int main()
{
    int tamanio = 0;

    printf("Ingresa el tamaño del arreglo : \t");
    scanf("%d",&tamanio);

    char nombresPersonas[tamanio][50];
    int  longitud[tamanio];
    getchar();
    for(int i=0; i<tamanio; i++)
    {
        printf("Ingresa el nombre de persona %d: \t",i+1);
        //scanf("%s",nombresPersonas[i]);
        fgets(nombresPersonas[i],50,stdin);

        longitud[i] = strlen(nombresPersonas[i])-1;
    }

    for(int i=0; i<tamanio; i++)
        printf("CADENA %i: \n > Contenido: %s \n > Tamaño : %d \n\n\n",i+1,nombresPersonas[i], longitud[i]);

        return 0;
}