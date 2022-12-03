#include <stdio.h>

void incremento();

int enteraGlobal;

int main()
{
    int cont;
    enteraGlobal = 0;

    for (cont=0 ; cont<5 ; cont++)
    {
        incremento();
    }
}

void incremento()
{
    int enteraLocal = 5;
    enteraGlobal += 2;

    printf("global(%i) + local(%i) = %d\n",enteraGlobal, enteraLocal, enteraGlobal+enteraLocal);
}