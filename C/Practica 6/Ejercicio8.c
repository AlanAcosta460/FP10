#include <stdio.h>

int main()
{
  float m1,m2,d,f;

  const float G=6.67e-11;

  printf("Dame masa 1: \n");
  scanf("%f",&m1);
  printf("Dame masa 2: \n");
  scanf("%f",&m2);
  printf("Dame distancia: \n");
  scanf("%f",&d);

  f=(G*m1*m2)/(d*d);

  printf("La fuerza gravitacional es de: %e dinas\n",100000*f);

}