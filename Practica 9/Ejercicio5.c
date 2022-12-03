#include <stdio.h>
#include <string.h>

int ejercicio1()
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

int ejercicio2()
{
    int x,n,i;

    printf("Ingrese un número: \n");
    scanf("%i",&x);
    printf("\n");

    printf("¿Cuántos multiplos del nùmero quieres?: \n");
    scanf("%i",&n);
    printf("\n");

    int mul[n];

    for ( i = 0; i < n; i++)
        mul[i] = x * (i + 1);

    printf("Los primeros %i multiplos de %i son: \n",n,x);
    for ( i = 0; i < n; i++)
        printf("%i\n",mul[i]);
}

int ejercicio3()
{
    char cadena[100];
    int contadorLetras=0, i=0;

    printf("Ingresa la cadena: \t");
    gets(cadena);


    while( cadena[i] != '\0')
    {
        if(cadena[i] >= 'a' && cadena[i] <= 'z' )
        {
            contadorLetras++;   
        }
    i++;
    }

    printf("Hay %d letras minusculas",contadorLetras);
}

int ejercicio4()
{
    int n,i;

    printf("Dame la cantidad de alumnos: \n");
    scanf("%i",&n);
    printf("\n");

    char nom[n][100];

    for ( i = 0; i < n; i++)
    {
        printf("Dame nombre del alumno %i: \n",(i+1));
        scanf("%s",nom[i]);

        printf("El nombre del alumno %i tiene una longitud de %zu caracteres \n",(i+1),strlen(nom[i]));
        printf("\n");
    }
}

int opciones()
{
    printf("\n\n%cQu%c desea realizar? 1. Repetir este programa 2. Ir al men%c 3. Salir -> ", 168, 130, 163);
}

int main()
{
rejercicio5:
    int op_g, r;
    printf("1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4. Ejercicio 4\n5. Ejercicio 5\n6. Salir\n");
    printf("\n%cQu%c programa desea ejecutar? -> ", 168, 130);
    scanf("%i", &op_g);
    switch (op_g)

    {
    case 1:
    rejercicio1:
        ejercicio1();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rejercicio1;
        }
        else if (r == 2)
        {
            goto rejercicio5;
        }
        break;
    
    case 2:
    rejercicio2:
        ejercicio2();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rejercicio2;
        }
        else if (r == 2)
        {
            goto rejercicio5;
        }
        break;

    case 3:
    rejercicio3:
        ejercicio3();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rejercicio3;
        }
        else if (r == 2)
        {
            goto rejercicio5;
        }
        break;

    case 4:
    rejercicio4:
        ejercicio4();
        opciones();
        scanf("%i", &r);
        if (r == 1)
        {
            goto rejercicio4;
        }
        else if (r == 2)
        {
            goto rejercicio5;
        }
        break;

    case 5:
        goto rejercicio5;
        break;

    case 6:
        printf("\nSaliendo...");
        break;

    default:
        printf("Opci%cn no v%clida", 162, 160);
        break;
    }
    printf("\n\nGracias por usar el programa");


}