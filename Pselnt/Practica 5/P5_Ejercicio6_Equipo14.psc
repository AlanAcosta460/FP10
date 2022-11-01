Proceso Ejercicio6
	Definir c,i Como Entero;
	Definir suma,suma2,d Como Real;
	d<-1;
	suma<-0;
	c<-0;
	i<-0;
	suma2<-0;
	
	Mientras d<>0 Hacer
		Escribir "Ingresa los datos";
		Leer d;
		si d <> 0 Entonces
			
		si d mod 2 == 0 Entonces
			suma<-suma+n;
			c<-c+1;
		SiNo
			suma2<-suma2+d;
			i<-i+1;
			
			
		FinSi
	FinSi
	
	FinMientras
	Escribir "La suma de los numeros pares es : ", suma;
	Escribir "Los numeros pares son : ", c;
	Escribir "El promedio de los numeros pares es: ", suma/c;
	Escribir "La suma de los numeros impares es : ", suma2;
	Escribir "Los numeros impares son : ", i;
	Escribir "El promedio de los numeros impares es: ", suma2/i;
	Escribir "El promedio total es: ", (suma+suma2)/(c+i);
FinProceso
