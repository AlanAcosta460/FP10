Proceso Ejercicio2
	Definir n,i,v,nme Como Entero;
	i <- 1;
	nme <- 0;
	Escribir '�Cu�ntos datos quiere ingresar?';
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
	Escribir 'El n�mero menor es ', nme;
FinProceso
