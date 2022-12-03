Proceso Ejercicio2
	Definir n,i,v,nme Como Entero;
	i <- 1;
	nme <- 0;
	Escribir '¿Cuántos datos quiere ingresar?';
	Leer n;
	Mientras i<=n Hacer
		Escribir 'Dame valor';
		Leer v;
		Si (i==1) Entonces
			nme <- v;
		SiNo
			Si v<nme Entonces
				nme <- v;
			FinSi
		FinSi
		i <- i+1;
	FinMientras
	Escribir 'El número menor es ', nme;
FinProceso
