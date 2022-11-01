Proceso ProductosYPedidos
	Definir i, a, b, c Como Entero;
	Dimension a[10], b[10], c[10];
	Para i<-0  Hasta 9 Con Paso 1 Hacer
		Escribir "Dame cantidad de producto ", i;
		Leer a[i];
		Escribir "Dame la cantidad de pedidos ";
		Leer b[i];
		Escribir "";
	FinPara
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		SI a[i]>=b[i] Entonces
			c[i]<-b[i];
		FinSi
		SI a[i]<b[i] Entonces
			c[i]<-2*(b[i]-a[i]);
		FinSi
	FinPara
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir "Para el producto ", i, " se requiere comprar ", c[i];
	FinPara
FinProceso