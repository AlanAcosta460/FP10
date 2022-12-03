#include <stdio.h>
#include <string.h>

void ultima(char c[])
{
    int l;

    l = strlen(c);
    if(l == 1)
        printf("La cadena esta vacia\n");
    else
        printf("La ultima letra es --> %c\n", c[l - 1]);
}

void Dame_dimension(int *n, int *m)
{
    printf("Dame el numero de filas:\n");
    scanf("%d", n);

    printf("Dame el numero de columnas:\n");
    scanf("%d", m);
}

void Guarda_datos(int n, int m, int M[100][100])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Fila %d Columna %d -> ", i + 1, j + 1);
            scanf("%i", &M[i][j]);
        }
        printf("\n");
    }
}

void Acomoda_datos(int n, int m, int M[100][100])
{
    int i = 0, j = 0, aux[n][m];

	for(i = 0; i < n; i++)
    {
		for(j = 0; j < m; j++)
        {
			aux[i][j] = M[j][i];
		}
    }

    for(i = 0; i < n; i++)
    {
		for(j = 0; j < m; j++)
        {
			M[i][j] = aux[i][j];
		}
    }
}

void Multiplica_datos(int n, int m, int M1[100][100], int M2[100][100], int M3[100][100])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) 
        {
            M3[i][j] = M1[i][j] * M2[j][i];
        }
    }
}

void Muestra_datos(int n, int m, int M[100][100])
{
    int i, j;

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}

int menu()
{
    int o;

    printf("Menu\n");
    printf("1) Ejercicio 1\n");
    printf("2) Ejercicio 2\n");
    printf("3) Ejercicio 3\n");
    printf("\nSeleccione una opcion:\n");
    scanf("%d", &o);
    printf("\n");

    return o;
}

int retorno()
{
    int e;
    
    printf("\nDeseas salir del programa?\n");
    printf("1) Repetir ejercicio\n");
    printf("2) Regresar al menu\n");
    printf("3) Salir\n");
    
    scanf("%d", &e);
    printf("\n");

    return e;  
}

void ejercicio1()
{
    char cadena[100];

    printf("Dame una cadena:\n");
    scanf("%s", cadena);
    ultima(cadena);
}

void ejercicio2()
{
    int n, m;

    printf("Dame el numero de filas:\n");
    scanf("%d", &n);

    printf("\nDame el numero de columnas:\n");
    scanf("%d", &m);
                    
    int mat[n][m];

    printf("\nIngrese los datos de la matriz:\n");
    Guarda_datos(n, m, mat);
    printf("\nLa matriz original es:\n");
    Muestra_datos(n, m, mat);
    Acomoda_datos(n, m, mat);
    printf("\nLa matriz transpuesta es:\n");
    Muestra_datos(n, m, mat);
}

void ejercicio3()
{
    int n1, m1, n2, m2;

    printf("Matriz 1:\n");
    Dame_dimension(&n1, &m1);
    printf("\nMatriz 2:\n");
    Dame_dimension(&n2, &m2);

    if (m1 == n2)
    {
        int matriz1[n1][m1], matriz2[n2][m2], matriz3[n1][m2];

        printf("\nIngresa los datos de matriz 1:\n");
        Guarda_datos(n1, m2, matriz1);
        printf("\nIngresa los datos de matriz 2:\n");
        Guarda_datos(n2, m2, matriz2);

        Multiplica_datos(n1, m2, matriz1, matriz2, matriz3);
        printf("El resultado de la multiplicacion es:\n");
        Muestra_datos(n1, m2, matriz3);
    }
    else
    printf("\nNo es posible realizar la multlicacion\n");
}

int main()
{
    int op1, op2;

    inicio:
    op1 = menu(); 

    switch (op1)
    {
        case 1:
        {
            ejercicio1:
            ejercicio1();

            op2 = retorno();
            if(op2 == 1)
                goto ejercicio1;
            else
                if(op2 == 2)
                    goto inicio; 
        }
        break; 
            
        case 2:
        {
            ejercicio2:
            ejercicio2();

            op2 = retorno();
            if(op2 == 1)
                goto ejercicio2;
            else
                if(op2 == 2)
                    goto inicio; 
        }
        break; 
            
        case 3:
        {
            ejercicio3:
            ejercicio3();
        
            op2 = retorno();
            if(op2 == 1)
                goto ejercicio3;
            else
                if(op2 == 2)
                    goto inicio; 
        }
        break; 
            
        default:
            printf("\nValor no valido\n");
        break;
    }  
}