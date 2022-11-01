Proceso Ejercicio1
	Definir par, imp, i, n Como Entero;
	i <- 1;
	imp <- 0;
	par <- 0;
	Escribir 'Ingresa un número';
	Leer n;
	Mientras i<=n Hacer
		Si (i MOD 2=0) Entonces
			par <- par+i;
		SiNo
			imp <- imp+i;
		FinSi
		i <- i+1;
	FinMientras
	Escribir "El valor de la suma de los pares es: ", par;
	Escribir "El valor de la suma de los impares es: ", imp;
FinProceso
