#include <stdio.h>

int main()
{
  char nombre[100],carrera[100],nc[20],edad[8];

  puts("Ingrese su nombre:");
  gets(nombre);

  puts("Ingrese su edad:");
  gets(edad);

  puts("Ingrese su numero de cuenta:");
  gets(nc);

  puts("Ingrese su carrera:");
  gets(carrera);

  puts("\n");
  puts(nombre);
  puts(edad);
  puts(nc);
  puts(carrera);

}