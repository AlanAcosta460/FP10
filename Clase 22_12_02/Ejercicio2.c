#include <stdio.h>
#define pf printf
#define sf scanf

int main()
{
    FILE *fp;
    char letra;
    
    pf("Dame una letra\n");
    sf("%c", &letra);

    fp = fopen("./CaracTxt.txt", "w"); //asignar al apuntador la apertura del archivo para escribir en el archivo (prueba) 
    fputc(letra, fp); //permite escribir un caracter en el archivo..sintaxis (variableEscribir, apuntador)
    fclose(fp);
    pf("Dato guardado en el fichero");
}