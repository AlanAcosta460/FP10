/*
Los datos de entrada son el día y el mes que ingresa el usuario. 
A partir del mes el programa elige un caso del 1 al 12 y da como
salida el nombre de la estación del año (en el caso 3, 6, 9 y 12 
se toma en cuenta el día para determinar la estación).
*/

#include <stdio.h>

int main()
{
    int dia,mes;
    printf("Ingrese el dia:\n");
    scanf("%i",&dia);
    printf("Ingrese el mes:\n");
    scanf("%i",&mes);
    if (dia>=1 && dia<=31 && mes>=1 && mes<=12)
    {
        switch(mes)
        {
            default: 
            printf("Dato no valido\n");
            break;
            
            case 1:
            printf("Es Invierno\n");
            break;

            case 2:
            printf("Es Invierno\n");
            break;

            case 3:
            if (dia<=19) 
                printf("Es Invierno\n");
            else
                printf("Es Primavera\n");
            break;
    
            case 4:
                printf("Es Primavera\n");
            break;

            case 5:
            printf("Es Primavera\n");
            break;

            case 6:
            if (dia<=20)
                printf("Es Primavera\n");
            else
                printf("Es Verano\n");
            break;

            case 7:
            printf("Es Verano\n");
            break;

            case 8:
            printf("Es Verano\n");
            break;

            case 9:
            if (dia<=23)
                printf("Es Verano\n");
            else
                printf("Es Otoño\n");
            break;

            case 10:
            printf("Es Otoño\n");
            break;

            case 11:
            printf("Es Otoño\n");
            break;

            case 12:
            if (dia<=21)
                printf("Es Otoño\n");
            else
                printf("Es Invierno\n");
            break;
        }
    }
    else 
    printf("Datos no válidos\n");
}