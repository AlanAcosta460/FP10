#include <stdio.h>
#include <math.h>

int main()
{
  float n;

  printf("Dame valor: \n");
  scanf("%f",&n);

  printf("\n");
  printf("La raiz cuadrada es: %.4f\n", sqrt(n));
  printf("El exponencial es: %.4f\n", exp(n));
  printf("El logarito natural es: %.4f\n", log(n));
  printf("El seno es: %.4f\n", sin(n));
  printf("El coseno es: %.4f\n", cos(n));
  printf("La tangente es: %.4f\n", tan(n));

}