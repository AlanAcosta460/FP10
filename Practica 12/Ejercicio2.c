#include <stdio.h>
#include <string.h>
 
int main()
{
    FILE *archivo;
    char frase[100], fin[] = "fin ";
    archivo = fopen("registroDeUsuario.txt", "w+");

    printf("Ingrese frases a continuacion:\n");
    inicio:
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
