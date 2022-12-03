#include <stdio.h> 
#include <math.h>

int main()
{
  int i;
  float x;
  double tot,fac=1;
  
  printf("Ingrese un número:\n");
  scanf("%f",&x);

  for (i=1;i<=100;i++)
    {
      fac=fac*i;
      tot=tot+(pow(x,i)/(fac));
    }

printf("La suma de cada uno de los valores de 1 a 100 es: %.10f\n",tot+1);

}