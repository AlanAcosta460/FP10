    #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int seleccion = 0;
int salir = 0;

do  
{

    printf("Menu \n");

    printf("\n 1) Ejercicio 1 ");
    printf("\n 2) Ejercicio 2 ");


    printf("\n\n Ingresa una opcion : \t");
    scanf("%d", &seleccion);

        switch (seleccion)
        {
            case 1:{
                	char tablero[8][8];
                    int i, j;
                    
                    for(i = 0; i < 8; i++)
                    {
                        for(j = 0; j < 8; j++)
                        {
                            if((((i == 0) || (i == 7)) && (j == 0)) || (((i == 0) || (i == 7)) && (j == 7)))
                                
                                tablero[i][j] = 'T';
                            
                            else
                            {
                                if((((i == 0) || (i == 7)) && (j == 1)) || (((i == 0) || (i == 7)) && (j == 6)))
                                
                                    tablero[i][j] ='C';
                                
                                else
                                {
                                    if((((i == 0) || (i == 7)) && (j == 2)) || (((i == 0) || (i == 7)) && (j == 5)))
                                    
                                        tablero[i][j] = 'A';
                                    
                                    else
                                    {
                                        if(((i == 0) || (i == 7)) && (j == 3))
                                        
                                            tablero[i][j] = 'K';
                                        
                                        else
                                        {
                                            if(((i == 0) || (i == 7)) && (j == 4))
                                                
                                                tablero[i][j] ='Q';
                                            
                                            else
                                            {
                                                if(((i == 1) || (i == 6)) && (j < 8))
                                                
                                                    tablero[i][j] = 'P';
                                                
                                                else
                                                {
                                                    if(((i > 1) && (i < 6)) && (j < 8))
                                                        
                                                        tablero[i][j] = '*';
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    
                    }
                    
                    for(i = 0; i < 8; i++)
                    {	
                        for(j=0;j<8;j++)
                        {
                            
                            printf("%c\t",tablero[i][j]);
                        }
                        printf("\n");
                    }
 
                printf("¿Deseas salir del programa?");
                printf("\n 0 ) Regresar \n 1 ) Salir");
                scanf("%d",&sal ir);  
                break;
            }

            case 2 :{

                        char cadena[50];
                        int i;
                        printf("Introduce una palabra: \n");
                        scanf("%s", cadena);

                        printf("La palabra invertida es: \n");
                        for (i=strlen(cadena); i>=0; i--)
                        {
                            printf("%c", cadena[i]);
                        }
                        printf("\n");

                printf("\n\n¿Deseas salir del programa?");
                printf("\n 0 ) Regresar \n 1 ) Salir");
                scanf("%d",&salir);  
                break;            }



        default:
            break;
        }



}

while(salir != 1);
return 0;
}