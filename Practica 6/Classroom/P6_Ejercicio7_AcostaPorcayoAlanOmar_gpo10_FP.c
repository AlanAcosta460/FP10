#include <stdio.h>

int main()
{
  float a,b,c,d,e,f;

  printf("Dame valor de a, b y c: \n");
  scanf("%f\n %f\n %f",&a,&b,&c);
  printf("\n");
  printf("Dame valor de d, e y f: \n");
  scanf("%f\n %f\n %f",&d,&e,&f);

  printf("\n");
  printf("x vale %.3f\n",((c*e)-(b*f))/((a*e)-(d*b)));
  printf("y vale %.3f\n",((a*f)-(d*c))/((a*e)-(d*b)));

}