#include <stdio.h>
#include <string.h>
int main (int argc, char** argv)
{
if (argc == 1)
{
printf("El programa no contiene argumentos.\n");
return 88;
}
printf("Los elementos del arreglo argv son:\n");
for (int cont = 0 ; cont < argc ; cont++ ){
printf("argv[%d] = %s\n", cont, argv[cont]);
}
return 88;
}