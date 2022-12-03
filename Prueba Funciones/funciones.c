#include <stdio.h>

int pedirnumero()
{
    int n;

    printf("Ingrese un numero: \n");
    scanf("%d", &n);

    return n;
}

int suma(int a, int b)
{
    int c;

    c = a + b; 
    
    return c; 
}

void imprimir(int n)
{
    printf("El resultado es:\n"),
    printf("%d", n);
}

int main()
{
    int n1, n2, res;

    n1 = pedirnumero();
    printf("\n");
    n2 = pedirnumero();
    res = suma(n1, n2);
    printf("\n");
    imprimir(res);
    printf("\n");
}