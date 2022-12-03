#include <stdio.h>
#include <string.h>

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
    
}

void ejercicio2()
{
   
}

void ejercicio3()
{
    
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