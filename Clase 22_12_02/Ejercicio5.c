#include <stdio.h>

int main()
{
    char ifilename[] = "./entrada2.txt";
    char ofilename[] = "./salida2.txt";
    char name[30];
    int idNum;
    FILE *ifp, *ofp;

    ifp = fopen(ifilename, "r"); //abrir archivo de entrada
    ofp = fopen(ofilename, "w"); //abrir arcivo de salida

    while (fscanf(ifp, "%s %d", name, &idNum) != EOF)
    {//leer datos
        fprintf(ofp, "%d %s\n", idNum, name); //escribir datos
    }
    //cerrar archivos
    fclose(ifp);
    fclose(ofp);
}