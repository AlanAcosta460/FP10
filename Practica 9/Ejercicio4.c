#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;

    printf("Dame la cantidad de alumnos: \n");
    scanf("%i",&n);
    printf("\n");

    char nom[n][100];

    for ( i = 0; i < n; i++)
    {
        printf("Dame nombre del alumno %i: \n",(i+1));
        scanf("%s",nom[i]);

        printf("El nombre del alumno %i tiene una longitud de %zu caracteres \n",(i+1),strlen(nom[i]));
        printf("\n");
    }
    
}

