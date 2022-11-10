#include <stdio.h>

int main()
{
    int x,n,i;

    printf("Ingrese un número: \n");
    scanf("%i",&x);
    printf("\n");

    printf("¿Cuántos multiplos del nùmero quieres?: \n");
    scanf("%i",&n);
    printf("\n");

    int mul[n];

    for ( i = 0; i < n; i++)
        mul[i] = x * (i + 1);

    printf("Los primeros %i multiplos de %i son: \n",n,x);
    for ( i = 0; i < n; i++)
        printf("%i\n",mul[i]);

}