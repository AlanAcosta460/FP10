/*
En cada pregunta se le pide al usuario una respuesta entre Si o No (1 o 0), 
la respuesta se compara con un valor predeterminado y si es igual se 
aumenta 1 a la calificación. Al final se imprime la calificación que obtuvo 
el usuario.
*/
#include <stdio.h>

int  main(){
int resUsuario;
int calf = 0;

    printf("PREGUNTA 1 \n");
    printf("¿Marte es de color ROJO? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 1){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }

    printf("PREGUNTA 2 \n");
    printf("¿La óptica es una rama de la Física? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 1){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }

    printf("PREGUNTA 3 \n");
    printf("¿El cuerpo humano tiene 206 huesos? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 1){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }

    printf("PREGUNTA 4 \n");
    printf("¿La raíz de 121 es 12? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 0){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }    

    printf("PREGUNTA 5 \n");
    printf("¿Un kilómeto equivale a 500 metros? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 0){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }

    printf("PREGUNTA 6 \n");
    printf("¿En 1939 terminó la Segunda Guerra Mundial? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 0){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }

    printf("PREGUNTA 7 \n");
    printf("¿En 1822 se creó el primer ordenador mecánico? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 1){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }

    printf("PREGUNTA 8 \n");
    printf("¿Lavoisier es considerado el padre de la química moderna ? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 1){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }    

    printf("PREGUNTA 9 \n");
    printf("¿Un siglo tiene cien años? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 1){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }

    printf("PREGUNTA 10 \n");
    printf("¿Cada cuatro años se realiza una Copa del Mundo? \n ");
    printf("Responde 0 = No / 1 = Si \n");
    scanf("%i",&resUsuario);

    if(resUsuario == 1){
        calf = calf + 1;
        }
    else{
        calf = calf + 0;
    }

printf("CALIFICACIÓN : %i \n\n\n\n",calf);

}