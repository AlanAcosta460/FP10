#include <stdio.h>
#include <string.h>
 
int main()
{
    FILE *archivo;
    char frase[100], fin[] = "fin ";
    archivo = fopen("registroDeUsuario.txt", "w+");

    inicio:
    printf("Escriba una frase:\n");
    gets(frase);

    if(strcmp(frase, fin) == 0)
    {
        fclose(archivo);
        return 0;
    }
    else
    {
        fprintf(archivo, "%s\n", frase);
        goto inicio;
    }

}
