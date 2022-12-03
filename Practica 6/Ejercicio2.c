#include <stdio.h> 

int main()
{
  float n;

  printf("Dame distancia en metros: \n");
  scanf("%f",&n);

  printf("\n");
  printf("La distancia introducida equivale a: ");
  printf("\n");
  printf("%.3f centimetro(s)\n", n*100);
  printf("%.3f pie(s)\n", n*3.281);
  printf("%.3f pulgada(s)\n", n*39.37);
  printf("%.3f yarda(s)\n", n*1.094);
  
}