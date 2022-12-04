#include <stdio.h>
#define pf printf
#define sf scanf

int main()
{
    FILE *StringFp;
    char palabra[100];

    pf("Dame una cadena \n");
    gets(palabra);//permite almacenar cadenas
    StringFp = fopen("./StringTxt.txt", "a");
    fputs(palabra, StringFp);//permite escribir una cadena en este apuntador sintaxis (cadena, apuntador)
    fprintf(StringFp, "\n");
    fclose(StringFp);
    pf("Cadena almacenada en el fichero\n");
}