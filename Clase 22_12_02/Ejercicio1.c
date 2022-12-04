#include <stdio.h>
#define pf printf
#define sf scanf

int main()
{
    FILE *apFp;
    char nmArchivo[] = "Archivo.txt";
    int valDev;

    apFp = fopen("./Archivo.txt", "r"); //al apuntador se le asign la apertura del archivo buscando para poder LEER

    if(apFp == NULL) //si el pauntador es vacio...
    {
        valDev = 1;
        pf("No es posible abrir el archivo");
        puts(nmArchivo); //imprime Archivo.txt
        pf("\nValor devuelto = %d\n", valDev); //valDev = 1
    }
    else
    {
        valDev = 0;
        pf("El archivo se abrio\n");
        pf("El valor de apuntador %p\n", apFp);
        pf("Valor devuelto = %d\n", valDev); //valDev = 0
        fclose(apFp);
    }
}