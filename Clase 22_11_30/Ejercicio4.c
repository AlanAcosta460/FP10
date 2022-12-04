#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int *ap_a, *ap_b, *ap_c;

    printf("Ingrese el valor de a:\n");
    scanf("%d", &a);
    printf("Ahora el valor de b:\n");
    scanf("%d", &b);

    c = a + b; 
    printf("a + b = %d\n", c);
    printf("\nDireccion de a es %p\n", &a);
    printf("Direccion de b es %p\n", &b);
    printf("Y la de c es %p\n", &c);

    //se asignan las direcciones de a, b y c a sus apuntadores correspondientes
    ap_a = &a;
    ap_b = &b;
    ap_c = &c;

    *ap_c = (*ap_a) + (*ap_b);
    printf("\n*p1 + *p2 = %d\n", *ap_c);
    printf("\nContenido de a_p1 es %p\n", ap_a);
    printf("Contenido de a_p2 es %p\n", ap_b);
    printf("Y contenido de a_p3 es %p\n", ap_c);
    
    return 0; 
}