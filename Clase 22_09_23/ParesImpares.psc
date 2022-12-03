Proceso ParesImpares
	Definir i, num, par, tpar Como Entero;
	Dimension num[10];
	tpar<-0;
	Para i<-0  Hasta 9 Con Paso 1 Hacer
		Escribir "Dame dato para la posición ", i;
		Leer num[i];
		Si num[i]<25 y num[i]>75 Entonces
			Escribir "Dato fuera de rango";
			i<-9;
		FinSi
	FinPara
	Escribir "";
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "El número guardado en el espacio ", i, " es ", num[i];
	FinPara
	Escribir "";
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Si num[i] Mod 2=0 Entonces
			Escribir "El valor ", num[i], " almacenado en el espacio ", i, " es par";
			tpar<-tpar+1;
		FinSi
	FinPara
	Escribir "";
	Escribir "El total de números pares es: ", tpar;
FinProceso
