Proceso SumaOchoElementos
	Definir x, r, i, total Como Real;
	i<-1;
	x<-1;
	total<-0;
	Repetir
		r<-(x/5)*x;
		total<-total+r;
		x<-x+1;
		i<-i+1;
	Hasta Que i=9
	Escribir "La suma de los primeros 8 elementos es ", total;
FinProceso