#include <stdio.h>

int main()
{
    char c, *aptr_c;
    int x, *aptr_x;
    float y, *aptr_y;

    c = 'A';
    x = 7;
    y = 123.45;

    printf("c: direccion = %p, contenido = %c \n", &c, c);
    printf("x: direccion = %p, contenido = %d \n", &x, x);
    printf("y: direccion = %p, contenido = %5.2f \n", &y, y);

    aptr_c = &c;
    printf("\naptr_c: direccion = %p, contenido = %p \n", &aptr_c, aptr_c);
    printf("*aptr_c => %c\n", *aptr_c);

    aptr_x = &x;
    printf("\naptr_x: direccion = %p, contenido = %p \n", &aptr_x, aptr_x);
    printf("*aptr_x => %d\n", *aptr_x);

    aptr_y = &y;
    printf("\naptr_y: direccion = %p, contenido = %p \n", &aptr_y, aptr_y);
    printf("*aptr_y => %5.2f\n", *aptr_y);

    return 0;
}