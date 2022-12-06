#include <stdio.h>
#include <string.h>
 
int main()
{
    FILE *archivo;
    char frase[100], fin[] = "fin ";
    archivo = fopen("registroDeUsuario.txt", "w+");

    printf("Ingrese frases a continuacion:\n");
    gets(frase);

    while(strcmp(frase, fin) != 0)
    {
        fprintf(archivo, "%s\n", frase);
        gets(frase);
    }
    fclose(archivo);
    
    return 0;

}
