Proceso condicional_promedio3Calificaciones
	// Christian Gael Lara Mart�nez    
	// 26 de Mayo del 2022        Equipo:4
	Definir cali1,cali2,cali3,promedio Como Real;
	Escribir 'Introduce la primer calificaci�n: ';
	Leer cali1;
	Escribir 'Introduce la segunda calificaci�n: ';
	Leer cali2;
	Escribir 'Introduce la tercer calificaci�n: ';
	Leer cali3;
	promedio = (cali1+cali2+cali3)/3;
	Escribir 'El promedio corresponde a -------> ',promedio;
	Si promedio>=6 Entonces
		Escribir '�Felicidades Aprobaste!';
	SiNo
		Escribir 'Lamentablemente reprobaste...';
	FinSi
FinProceso
