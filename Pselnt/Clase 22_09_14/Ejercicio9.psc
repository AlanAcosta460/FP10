Proceso Ejercicio9
	Definir par, imp, i, n, v, nme, nma, media, max, min, pass, c, x, a , z Como Entero;
	Definir suma,suma2, d, r, total Como Real;
	Repetir
	Escribir "(1) Ejercicio 1";
	Escribir "(2) Ejercicio 2";
	Escribir "(3) Ejercicio 3";
	Escribir "(4) Ejercicio 4";
	Escribir "(5) Ejercicio 5";
	Escribir "(6) Ejercicio 6";
	Escribir "(7) Ejercicio 7";
	Escribir "(8) Ejercicio 8";
	Leer a;
	Segun a Hacer
		1:
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
		2:
			i <- 1;
			nme <- 0;
			Escribir '¿Cuántos datos quiere ingresar?';
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
			Escribir 'El número menor es ', nme;
		3:
			i <- 1;
			nma <- 0;
			Escribir '¿Cuántos datos quiere ingresar?';
			Leer n;
			Mientras i<=n Hacer
				Escribir 'Dame valor';
				Leer v;
				Si (i==1) Entonces
					nma <- v;
				SiNo
					Si v>nma Entonces
						nma <- v;
					FinSi
				FinSi
				i <- i+1;
			FinMientras
			Escribir 'El número mayor es ', nma;
		4:
			i <- 0;
			n <- 1;
			suma <- 0;
			max <- 0;
			min <- 10000;
			Escribir "Ingresa datos";
			Mientras n <> 0 Hacer
				Leer n;
				si n <> 0 Entonces
					i <- i+1;
					suma <- suma + n;
					Si n<=min Entonces
						min <- n;
					FinSi
					si n>=max Entonces
						max <- n;
					FinSi
				FinSi
			FinMientras
			Escribir "El valor máximo es: ",max;
			Escribir "El valor mínimo es: ",min;
			Escribir "El valor de la media es: ",suma/(i);
		5:
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
		6:
			d<-1;
			suma<-0;
			c<-0;
			i<-0;
			suma2<-0;
			
			Mientras d<>0 Hacer
				Escribir "Ingresa los datos";
				Leer d;
				si d <> 0 Entonces
					
					si d mod 2 == 0 Entonces
						suma<-suma+d;
						c<-c+1;
					SiNo
						suma2<-suma2+d;
						i<-i+1;
						
						
					FinSi
				FinSi
				
			FinMientras
			Escribir "La suma de los numeros pares es : ", suma;
			Escribir "Los numeros pares son : ", c;
			Escribir "El promedio de los numeros pares es: ", suma/c;
			Escribir "La suma de los numeros impares es : ", suma2;
			Escribir "Los numeros impares son : ", i;
			Escribir "El promedio de los numeros impares es: ", suma2/i;
			Escribir "El promedio total es: ", (suma+suma2)/(c+i);
		7:
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
		8:
			x<- 1;
			Escribir "Para la función y=(x^4+3*x)+sen(1/x)";
			Mientras x<=10 Hacer
				r<-(x^4+(3*x))+sen(1/x);
				Escribir "Cuando x=",x, " el resultado es ", r;
				x<- x+1;
			FinMientras
			Escribir "Nota: El resultado está en radianes";
		De Otro Modo:
			Escribir "No es un número valido entre 1 y 8";
	FinSegun
	Escribir 'Repetir? (1) Sí (2) No';
	Leer r;
Hasta Que r<>1;
FinProceso
