Proceso PrimerosCincoElementos
		Definir n, m, x, d ,r, i Como Real;
		n<-1;
		m<-1;
		d<-2;
		i<-1;
		Escribir "Dame valor";
		Leer x;
		Repetir
			r<-(x+m)/d;
			Escribir "Z",n," es igual a ",r;
			n<-n+1;
			m<-m+1;
			d<-d+2;
			i<-i+1;
		Hasta Que i=6
FinProceso