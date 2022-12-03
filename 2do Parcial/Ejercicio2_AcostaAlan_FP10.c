#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[50];
    int i;
    printf("Introduce una palabra: \n");
    scanf("%s", cadena);

    printf("La palabra invertida es: \n");
    for (i=strlen(cadena); i>=0; i--)
    {
        printf("%c", cadena[i]);
    }
    printf("\n");
}