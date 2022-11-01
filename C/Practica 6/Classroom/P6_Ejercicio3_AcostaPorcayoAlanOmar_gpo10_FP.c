#include <stdio.h>

int main()
{
  float l, a;

  printf("Dame longitud: \n");
  scanf("%f",&l);
  printf("Dame anchura: \n");
  scanf("%f",&a);
  
  printf("\n");
  printf("La superficie de la habitacion es: %.4f\n", l*a);
  
  }