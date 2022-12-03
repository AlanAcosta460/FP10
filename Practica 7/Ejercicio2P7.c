#include <stdio.h>

int main()
{
  int TI;
  float PAG, IMP, TOT;
  char DI[20],TU[20];

printf("Bienvenido a la compañía telefónica Chismefón\n");
printf("\n");
printf("Ingrese el tiempo de la llamada:\n");
scanf("%i",&TI);

if (TI>=1 && TI<=5)
  PAG=TI;
else
  if (TI>=6 && TI<=8)
    PAG=5+(80*(TI-5));
  else
    if (TI>=9 && TI<=10)
      PAG=245+(70*(TI-8));
    else
      if (TI>=11)
        PAG=385+(50*(TI-10));

printf("\n");
printf("Ingrese el día de la semana: \n");
scanf("%s",DI);

if (strcmp(DI, "domingo") == 0)
        IMP = PAG * 0.03;
    else 
      if (strcmp(TU, "matutino") == 0)
        IMP = PAG * 0.15;
    else 
      if (strcmp(TU, "vespertino") == 0)
        IMP = PAG * 0.1;
    else
        IMP = 0;

TOT=PAG+IMP;

printf("\n");
printf("El total a pagar es: %f\n",TOT);
}