#include <stdio.h>

int main()
{
    char c, *aptr_c;

    c = 'A';
    printf("c: direccion = %p, contenido = %c\n", &c, c);

    aptr_c = &c;
    printf("\naptr_c: direccion = %p, contenido = %p\n", &aptr_c, aptr_c);

    *aptr_c = 'B';
    printf("\naptr_c: direccion = %p, contenido = %p\n", &aptr_c, aptr_c);
    printf("*aptr_c => %p\n", *aptr_c);
    printf("c: direccion = %p, contenido = %c\n", &c, c);

    return 0; 
}
