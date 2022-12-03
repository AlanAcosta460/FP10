/*
Se pide al usuario un número cualquiera, luego se pide elegir una opcion 
en el menu entre 1 y 10 lo que accede a un caso y realiza una función 
matematica y finalmente imprime el resultado. 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    int op;
    printf("Dame valor\n");
    scanf("%f",&n);

    printf("\n");
    printf("Menu\n");
    printf("\n");
    printf("Eliga la funcion que quiera aplicar:\n");
    printf("!) Seno\n");
    printf("2) Coseno\n");
    printf("3) Tangente\n");
    printf("4) Seno Hiperbolico\n");
    printf("5) Coseno Hiperbolico\n");
    printf("6) Tangente Hiperbolico\n");
    printf("7) Raiz Cuadrada\n");
    printf("8) Logaritmo Natural\n");
    printf("9) Logaritmo en Base 10\n");
    printf("10) Valor Absoluto\n");
    printf("\n");
    scanf("%i",&op);
    printf("\n");

    switch (op)
    {
    case 1:
        printf("El Seno de %f es: %f\n",n,sin(n));
    break;

    case 2:
        printf("El Coseno de %f es: %f\n",n,cos(n));
    break;

    case 3:
        printf("La Tangente de %f es: %f\n",n,tan(n));
    break;

    case 4:
        printf("El Seno Hiperbolico de %f es: %f\n",n,sinh(n));
    break;

    case 5:
        printf("El Coseno Hiperbolico de %f es: %f\n",n,cosh(n));
    break;

    case 6:
        printf("La Tangente Hiperbolica de %f es: %f\n",n,tanh(n));
    break;

    case 7:
        printf("La Raiz Cuadrada de %f es: %f\n",n,sqrt(n));
    break;

    case 8:
        printf("El Logaritmo Natural de %f es: %f\n",n,log(n));
    break;

    case 9:
        printf("El Logaritmo Base 10 de %f es: %f\n",n,log10(n));
    break;

    case 10:
        printf("El Valor Absoluto de %f es: %f\n",n,fabs(n));
    break;

    default:
        printf("Dato no valido\n");
    }
}