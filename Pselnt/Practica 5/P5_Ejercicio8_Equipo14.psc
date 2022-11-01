Proceso Ejercicio8
	Definir x Como Entero;
	Definir r Como Real;
	x<- 1;
	Escribir "Para la función y=(x^4+3*x)+sen(1/x)";
	Mientras x<=10 Hacer
		r<-(x^4+(3*x))+sen(1/x);
		Escribir "Cuando x=",x, " el resultado es ", r;
		x<- x+1;
	FinMientras
	Escribir "Nota: El resultado está en radianes";
FinProceso
