//Calculadora de vectores y matrices

#include <stdio.h> //Biblioteca estandar
#include <stdlib.h> //Para usar la funcion system()

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

//Menus
int menuPrincipal();
int menuRetorno(); 
int pedirOpcion(int); 

int main()
{
    inicio:
    switch (menuPrincipal())
    {
        case 1:
            sumaVec:
            sumaVec();
            switch (menuRetorno())
            {
                case 1: goto sumaVec; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 2:
            restaVect:
            restaVect();
            switch (menuRetorno())
            {
                case 1: goto restaVect; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 3:
            vecPorEscalar:
            vecPorEscalar();
            switch (menuRetorno())
            {
                case 1: goto vecPorEscalar; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 4:
            proEscalar:
            proEscalar();
            switch (menuRetorno())
            {
                case 1: goto proEscalar; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 5:
            proVectorial:
            proVectorial();
            switch (menuRetorno())
            {
                case 1: goto proVectorial; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 6:
            proMixto:
            proMixto();
            switch (menuRetorno())
            {
                case 1: goto proMixto; break;
                case 2: goto inicio; break;
                case 3: goto despedida;
                default: break;
            }
            break;
        case 7:
            sumaMat:
            sumaMat();
            switch (menuRetorno())
            {
                case 1: goto sumaMat; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 8:
            restaMat:
            restaMat();
            switch (menuRetorno())
            {
                case 1: goto restaMat; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 9:
            matPorEscalar:
            matPorEscalar();
            switch (menuRetorno())
            {
                case 1: goto matPorEscalar; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 10:
            productoMat:
            productoMat();
            switch (menuRetorno())
            {
                case 1: goto productoMat; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 11:
            traza:
            traza();
            switch (menuRetorno())
            {
                case 1: goto traza; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 12:
            transpuesta:
            transpuesta();
            switch (menuRetorno())
            {
                case 1: goto transpuesta; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        case 13:
            inversa:
            inversa();
            switch (menuRetorno())
            {
                case 1: goto inversa; break;
                case 2: goto inicio; break;
                case 3: goto despedida; 
                default: break;
            }
            break;
        default: break;
    }

    despedida:
    printf("Gracias por usar el programa!!!\n\n");
    system("pause");

    return 0;
}

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
    printf("13) Inversa de una matriz\n\n");

    return pedirOpcion(13);
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
    int op;

    do
    {
        printf(".:Seleccione una opcion:.\n");
        printf("-> "); scanf("%d", &op);
        if (op < 1 || op > opMax)
            printf("Opcion invalida\n");
        printf("\n");
    } while (op < 1 || op > opMax);
    system("cls");

    return op;
}