Proceso Ejercicio5
	Definir i,pass Como Entero;
	i <- 1;
	Mientras i<=3 Hacer
		Escribir 'Escribe la contraseña';
		Leer pass;
		Si pass=123456 Entonces
			Escribir 'La contraseña es correcta';
			i <- 4;
		SiNo
			Escribir 'La contraseña es incorrecta';
			Escribir 'Intento ',i,' de 3';
			i <- i+1;
		FinSi
	FinMientras
FinProceso
