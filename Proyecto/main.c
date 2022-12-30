//Calculadora de vectores y matrices

#include <stdio.h> //Biblioteca estandar
#include <stdlib.h> //Para usar la funcion system()

//Caratula
void caratula();

//Operaciones con Vectores
void sumaVec(); 
void restaVect();
void vecPorEscalar();
void proEscalar();
void proVectorial(); 
void proMixto();

//Operacions con Matrices
void sumaMat();
void restaMat();
void matPorEscalar();
void productoMat();
void traza();
void transpuesta();
void inversa();

//Pedir y Mostrar Datos
int pedirDim();
void pedirVec(float [], int); 
void mostrarVec(float [], int);
void pedirMat(float [][10], int, int);
void mostrarMat(float [][10], int, int);

//Menus
int menuPrincipal();
int menuRetorno(); 
int pedirOpcion(int); 

int main()
{
    int opcion;
    
    inicio:
    opcion = menuPrincipal();

    seleccion:
    switch (opcion)
    {
        case 1: sumaVec();
        case 2: restaVect();
        case 3: vecPorEscalar();
        case 4: proEscalar();
        case 5: proVectorial();
        case 6: proMixto();
        case 7: sumaMat();
        case 8: restaMat();
        case 9: matPorEscalar();
        case 10: productoMat();
        case 11: traza();
        case 12: transpuesta();
        case 13: inversa(); break;
        default: caratula(); break;
    }

    switch (menuRetorno())
    {
        case 1: goto seleccion; break;
        case 2: goto inicio; break;
        default: break;
    }

    printf("Gracias por usar el programa!!!\n\n");
    system("pause");

    return 0;
}

//Caratula
void caratula()
{
    FILE *archivo;
    char caracter;

    archivo = fopen("Caratula.txt", "r");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    while ((caracter = fgetc(archivo)) != EOF)
    {
        printf("%c", caracter);
    }
    fclose(archivo);
}

//Operaciones con Vectores
void sumaVec()
{
    float vec1[100], vec2[100];
    int tam;

    printf("***************SUMA DE VECTORES***************\n\n");
    //pidiendo datos
    printf(".:Ingrese el nu%cmero de elementos de los vectores:.\n -> ", 163); 
    tam = pedirDim();
    printf(".:Vector 1:.");
    pedirVec(vec1, tam);
    printf(".:Vector 2:.");
    pedirVec(vec2, tam);

    //el resultado se guardara en el vector 1
    for (int i = 0; i < tam; i ++)
        vec1[i] += vec2[i];
    
    //mostrando el resultado
    mostrarVec(vec1, tam);
}
void restaVect()
{
    float vec1[100], vec2[100];
    int tam;

    printf("***************RESTA DE VECTORES***************\n\n");
    //pidiendo datos
    printf(".:Ingrese el nu%cmero de elementos de los vectores:.\n", 163); 
    tam = pedirDim();
    printf(".:Vector 1:.");
    pedirVec(vec1, tam);
    printf(".:Vector 2:.");
    pedirVec(vec2, tam);
    
    printf("1. Vector 1 - Vector 2\n");
    printf("2. Vector 2 - Vector 1\n\n");
    
    if (pedirOpcion(2) == 1)
    {
        //el resultado se guardara en el vector 1
        for (int i = 0; i < tam; i ++)
            vec1[i] -= vec2[i];
    }
    else
    {
        //el resultado se guardara en el vector 2
        for (int i = 0; i < tam; i ++)
            vec2[i] -= vec1[i];
    }
 
    //mostrando el resultado
    mostrarVec(vec1, tam);
}
void vecPorEscalar()
{
    float vec[100], escalar;
    int tam;

    printf("***************VECTOR POR ESCALAR***************\n\n");
    //pidiendo datos
    printf(".:Ingrese el nu%cmero de elementos de los vectores:.\n", 163); 
    tam = pedirDim();
    printf(".:Vector:.");
    pedirVec(vec, tam);
    
    printf(".:Escalar.:\n -> ");
    scanf("%f", escalar);
    
    //multiplicacion
    for (int i = 0; i < tam; i++)
        vec[i] *= escalar;

    //mostrando el resultado
    mostrarVec(vec, tam);
}
void proEscalar()
{
    float vec[100], resultado = 0;
    int tam;

    printf("***************PRODUCTO ESCALAR***************\n\n");
    //pidiendo datos
    printf(".:Ingrese el nu%cmero de elementos de los vectores:.\n", 163); 
    tam = pedirDim();
    printf(".:Vector:.");
    pedirVec(vec, tam);

    //prducto escalar
    for (int i = 0; i < tam; i ++)
        resultado += vec[i];
    
    //mostrando el resultado
    printf(".:Resultado:.\n%d", resultado);
    printf("\n\n");
}
void proVectorial()
{

}
void proMixto()
{

}

//Operacions con Matrices
void sumaMat()
{
    float mat1[10][10], mat2[10][10];
    int fil, col;

    printf("***************SUMA DE MATRICES***************\n\n");
    //pidiendo datos
    printf(".:Ingrese el nu%cmero de filas de las matrices:.\n", 163);
    fil = pedirDim();
    printf(".:Ingrese el nu%cmero de columnas de las matrices:.\n", 163);
    col = pedirDim();
    printf(".:Matriz 1:.");
    pedirMat(mat1, fil, col);
    printf(".:Matriz 2:.");
    pedirMat(mat2, fil, col);

    //el resultado de la suma se guarda en la matriz 1
    for (int i = 0; i < fil; i ++)
    {
        for (int j = 0; j < col; j ++)
            mat1[i][j] += mat2[i][j];
    }

    //mostrando el resultado
    mostrarMat(mat1, fil, col);
}
void restaMat();
void matPorEscalar();
void productoMat();
void traza();
void transpuesta();
void inversa();

//Pedir y Mostrar Datos
int pedirDim()
{
    int tam;

    do
    { 
        printf("-> ");
        scanf("%d", &tam);
        if (tam <= 0);
            printf("Opcion invalida\n");
        printf("\n");
    } while (tam <= 0);
    printf("\n\n");

    return tam;
}
void pedirVec(float vec[], int tam)
{
    printf(".:Ingrese los valores:.\n");
    for (int i = 0; i < tam; i ++)
    {
        printf("%d: ", i + 1);
        scanf("%f", &vec[i]);
    }
    printf("\n\n");
}
void mostrarVec(float vec[], int tam)
{
    printf(".:Resultado:.\n");
    for (int i = 0; i < tam; i++)
        printf("%f\t", vec[i]);
    printf("\n\n");
}
void pedirMat(float mat[][10], int fil, int col)
{
    printf(".:Ingrese los valores:.\n");
    for (int i = 0; i < fil; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            printf("[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void mostrarMat(float mat[][10], int fil, int col)
{
    printf(".:Resultado:.\n");
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j ++)
        {
            printf("%f\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

//Menus
int menuPrincipal()
{
    system("cls");
    printf("***************MENU PRINCIPAL***************\n");
    printf(".:Operaciones con Vectores:.\n");
    printf("1)  Suma de vectores\n");
    printf("2)  Resta de vectores\n");
    printf("3)  Producto de un vector por un escalar\n");
    printf("4)  Producto escalar\n");
    printf("5)  Producto vectorial\n");
    printf("6)  Producto mixto\n\n");
    printf(".:Operaciones con Matrices:.\n");
    printf("7)  Suma de matrices\n");
    printf("8)  Resta de matrices\n");
    printf("9)  Producto de una matriz por un escalar\n");
    printf("10) Producto de matrices\n");
    printf("11) Traza de una matriz\n");
    printf("12) Transpuesta de una matriz\n");
    printf("13) Inversa de una matriz\n");
    printf("14) Mostrar Caratula\n\n");

    return pedirOpcion(14);
}
int menuRetorno()
{
    printf("***************MENU DE RETORNO***************\n");
    printf("1)  Repetir operacion\n");
    printf("2)  Volver al menu principal\n");
    printf("3)  Salir\n\n");

    return pedirOpcion(3);
}  
int pedirOpcion(int opMax)
{
    char opChar[100];
    int op;

    do
    {
        printf(".:Seleccione una opcion:.\n");
        printf("-> "); gets(opChar);
        op = atoi(opChar); //Funcion que convierte una cadena en un numero entero
        if (op < 1 || op > opMax)
            printf("Opcion invalida\n");
        printf("\n");
    } while (op < 1 || op > opMax);
    system("cls");

    return op;
}