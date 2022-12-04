#include <stdio.h>

int main()
{
    char c; 
    int x; 
    float y; 

    printf("c: direccion = %p, contenido = %c \n", &c, c);
    printf("x: direccion = %p, contenido = %d \n", &x, x);
    printf("y: direccion = %p, contenido = %5.2f \n", &y, y);

    c = 'A';
    x = 7;
    y = 123.45;

    printf("\nc: direccion = %p, contenido = %c \n", &c, c);
    printf("x: direccion = %p, contenido = %d \n", &x, x);
    printf("y: direccion = %p, contenido = %5.2f \n", &y, y);

    return 0;
}