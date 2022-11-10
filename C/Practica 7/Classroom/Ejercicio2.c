/*
Se pide al usuario el tiempo de llamada, el día y el turno.
A partir del tiempo se calcula el pago que tiene que hacer, 
dependiendo del dia y el turno se aplica un impuesto al pago
y se le suma al pago para hacer el total. Al final se 
imprime el pago por el tiempo, el impuesto y el total a 
pagar.
*/

#include <stdio.h>

int main()
{
    int TI;
    float PAG, IMP, TOT;
    char DIA[10], TURNO[10];
    printf("Introduzca el tiempo de la llamada: ");
    scanf("%d", &TI);
    printf("Introduzca el d%ca: ", 161);
    scanf("%s", DIA);
    printf("Introduzca el turno: ");
    scanf("%s", TURNO);
    if (TI < 1)
    {
        printf("Tiempo incorrecto");
        exit(0);
    }

    // tiempo
    if (TI <= 5)
        PAG = TI * 1;
    else if (TI <= 8)
        PAG = 5 + (TI - 5) * 0.8;
    else if (TI <= 10)
        PAG = 5 + 3 * 0.8 + (TI - 8) * 0.7;
    else
        PAG = 5 + 3 * 0.8 + 2 * 0.7 + (TI - 10) * 0.5;

    // día
    if (strcmp(DIA, "domingo") == 0)
        IMP = PAG * 0.03;
    else if (strcmp(TURNO, "matutino") == 0)
        IMP = PAG * 0.15;
    else if (strcmp(TURNO, "vespertino") == 0)
        IMP = PAG * 0.1;
    else
        IMP = 0;

    TOT = PAG + IMP;

    // impreciones
    printf("\nEl pago por el tiempo es: %.2f", PAG);

    printf("\nEl impuesto es: %.2f", IMP);

    printf("\nEl total es: %.2f", TOT);

}