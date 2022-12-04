#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

int main()
{
    FILE *apFp;
    char nmArchivo[] = "Archivo4.txt";
    int valDev = 1;

    apFp = fopen("./Archivo4.txt", "r");
    if(apFp == NULL) //si el pauntador es vacio...
    {
        pf("No es posible abrir el archivo ");
        puts(nmArchivo); 
        pf("\nValor devuelto = %d\n", valDev);
    }
    else
    {
        pf("El archivo se abrio!!!\n");
        pf("El valor del apuntador ... %p\n", apFp);
        pf("Valor devuelto = %d\n", valDev);
        pf("La letra almacenada es %c \n", getc(apFp));
        fclose(apFp);
    }
}