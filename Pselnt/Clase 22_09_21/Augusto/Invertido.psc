Proceso Invertido
	Definir n, n1, i como enteros;
	Escribir "Dame valor";
	Leer n;
	n1<-0;
	Mientras n<>0 Hacer
		i<-n mod 10;
		n<-trunc(n/10);
		n1<-n1*10+i;
	FinMientras
	Escribir "Invertido ", n1;
FinProceso
