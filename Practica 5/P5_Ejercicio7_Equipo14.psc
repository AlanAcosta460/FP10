Proceso Ejercicio7
	Definir z, d, i Como Entero;
	Definir r, total Como Real;
	z<-7;
	d<-4;
	i<-1;
	total<-0;
	Repetir
		r<-(z+0.5)/d;
		total<-total+r;
		z<-z+2;
		d<-d*2;
		i<-i+1;
	Hasta Que i=16
	Escribir "La suma de los 15 primeros elementos de la serie:"; 
	Escribir "Z1=(z+0.5)/4";
	Escribir "Z2=(z+0.5)/8";
	Escribir "Z3=(z+0.5)/16";
	Escribir "Donde z es impar y comienza en 7 es= ", total;
FinAlgoritmo
