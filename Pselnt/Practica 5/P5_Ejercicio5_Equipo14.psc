Proceso Ejercicio5
	Definir i,pass Como Entero;
	i <- 1;
	Mientras i<=3 Hacer
		Escribir 'Escribe la contrase�a';
		Leer pass;
		Si pass=123456 Entonces
			Escribir 'La contrase�a es correcta';
			i <- 4;
		SiNo
			Escribir 'La contrase�a es incorrecta';
			Escribir 'Intento ',i,' de 3';
			i <- i+1;
		FinSi
	FinMientras
FinProceso
