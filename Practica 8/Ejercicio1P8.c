#include <stdio.h>
#include <math.h>
 
int main()
{
   int n, i = 0, num, sum;
   float prom=0, mult=0;
   printf("¿Cuántos números quieres ingresar en el programa?\n");
   scanf("%i", &n);
   for (i = 0; i < n; i++)
   {
       printf("\nIngresa el número -> ");
       scanf("%i", &num);
       if ((num % 2) == 0)
       {
           printf("\n%i es multiplos de 2\n", num);
           mult= mult + 1;
           sum = sum + num;
           num = 0;
       }
   }
 
   printf("\nLa cantidad de números multiplos fue de %.0f", mult);
  
   prom = sum/mult;
   printf("\nEl promedio es: %.2f\n", prom);
 
   return 0;
}
