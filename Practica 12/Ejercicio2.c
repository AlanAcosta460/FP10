#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
   FILE *archivo;
   char frase[100];

   archivo = fopen("resgistroDeUsuario.txt", "w");
   if (archivo == NULL)
   {
       printf("Error al abrir el archivo");
       exit(1);
   }
   printf("Escribe una frase: ");
   gets(frase);
   while (strcmp(frase, "fin") != 0)
   {
       fprintf(archivo, "%s\n", frase);
       printf("Escribe una frase: ");
       gets(frase);
   }
   fclose(archivo);
   return 0;
}
