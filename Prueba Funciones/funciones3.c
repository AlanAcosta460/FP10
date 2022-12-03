#include <stdio.h>
int resultado; 

void mul();

int main()
{
    mul();
    printf("%i",resultado);
    printf("\n");
    return 0;
}

void mul() 
{
resultado = 5 * 4;
}