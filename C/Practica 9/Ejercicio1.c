#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,t;

    printf("Dame la cantidad de alumnos: \n");
    scanf("%i",&n);
    printf("\n");

    int edad[n];
    char nombre[n][100],temp[1][100];

    for ( i = 0; i < n; i++)
    {
        printf("Dame nombre del alumno %i: \n",(i+1));
        scanf("%s",nombre[i]);
    
        printf("Dame edad del alumno %i: \n",(i+1));
        scanf("%i",&edad[i]);
        printf("\n");
    }
    
    for (i = 1; i < n; i++)
   {
       for (j = 0; j < n - i; j++)
       {
           if (edad[j] > edad[j + 1])
           {
               t = edad[j];
               edad[j] = edad[j + 1];
               edad[j + 1] = t;

               strcpy(temp[0],nombre[j + 1]);
               strcpy(nombre[j + 1],nombre[j]);
               strcpy(nombre[j],temp[0]);

           }
       }
   }

    for ( i = 0; i < n; i++)
    {
        printf("El alumno %i se llama: \n %s",(i+1),nombre[i]);
        printf("\n");
        printf("y tiene %i años \n",edad[i]);
        printf("\n");
        printf("\n");
    }
    
}