Proceso SumaPromedio10
	Definir x, d, r, i, total, prom Como Real;
	x<-3;
	d<-5;
	i<-1;
	total<-0;
	prom<-0;
	Repetir
		r<-x/d;
		total<-total+r;
		x<-x+3;
		d<-d+5;
		i<-i+1;
	Hasta Que i=11
	Escribir "La suma de los primeros 8 elementos es ", total;
	Escribir "El promedio es ", total/(i-1);
FinProceso