Proceso Ejercicio3
	Definir n,i,v,nma Como Entero;
	i <- 1;
	nma <- 0;
	Escribir '¿Cuántos datos quiere ingresar?';
	Leer n;
	Mientras i<=n Hacer
		Escribir 'Dame valor';
		Leer v;
		Si (i==1) Entonces
			nma <- v;
		SiNo
			Si v>nma Entonces
				nma <- v;
			FinSi
		FinSi
		i <- i+1;
	FinMientras
	Escribir 'El número mayor es ', nma;
FinProceso
