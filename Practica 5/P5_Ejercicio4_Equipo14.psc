Proceso Ejercicio4
	Definir i, n, media, max, min, suma Como Entero;
	i <- 0;
	n <- 1;
	suma <- 0;
	max <- 0;
	min <- 10000;
	Escribir "Ingresa datos";
	Mientras n <> 0 Hacer
		Leer n;
		si n <> 0 Entonces
			i <- i+1;
			suma <- suma + n;
			Si n<=min Entonces
				min <- n;
			FinSi
			si n>=max Entonces
				max <- n;
			FinSi
		FinSi
	FinMientras
	Escribir "El valor máximo es: ",max;
	Escribir "El valor mínimo es: ",min;
	Escribir "El valor de la media es: ",suma/(i);
FinProceso
