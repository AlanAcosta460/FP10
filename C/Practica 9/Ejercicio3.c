#include <stdio.h>

int main(){

char cadena[100];
int contadorLetras=0, i=0;

printf("Ingresa la cadena: \t");
gets(cadena);


while( cadena[i] != '\0'){

    if(cadena[i] >= 'a' && cadena[i] <= 'z' ){
        contadorLetras++;   
    }
    i++;
}

printf("Hay %d letras minusculas",contadorLetras);

}