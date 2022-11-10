#include <stdio.h>

int main()
{
  char res[2];
  int tot;

  printf("Juego de Preguntas!\n");
  printf("Responde a las siguientes 10 preguntas con S (Si) o N (No)\n");
  printf("\n");

  printf("1+1=2?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "N") == 0)
    tot++;

  printf("Un siglo tiene 100 años?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "S") == 0)
    tot++;
  
  printf("El cuerpo humano tiene 206 huesos?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "S") == 0)
    tot++;
  
  printf("En 1939 terminó la segunda guerra mundial?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "N") == 0)
    tot++;
  
  printf("En 1822 se creo el primer ordenador mecanico?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "S") == 0)
    tot++;

  printf("La optica es una rama de la Fisica?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "S") == 0)
    tot++;

  printf("La raiz cuadrada de 121 es 12?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "N") == 0)
    tot++;

  printf("Un megabyte tiene 1 000 000 bytes?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "S") == 0)
    tot++;

  printf("Un km equivale a 500 m?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "N") == 0)
    tot++;

  printf("Un año tiene 364 días?\n");
  scanf("%s",res);
  printf("\n");
  if (strcmp(res, "N") == 0)
    tot++;
  
  printf("Tienes una calificación de %i\n",tot);
}
