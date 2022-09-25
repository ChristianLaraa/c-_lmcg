/*Código de según el número escribe el día de la semana
nombre del autor
  fecha
  descripción del programa
  */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
	int opcion;
	int salir;
	float pago,cambio,costo;
	float pagar;
		system("cls");
		printf("Escribe un número del 1 al 7:   ");
		scanf("%d",&opcion);
		switch (opcion) {
		case 1:
			printf("Lunes");	
			break;
		case 2:
			printf("Martes");
			break;
		case 3:
			printf("Miércoles");
			break;
		case 4:
			printf("Jueves");
			break;
		case 5:
			printf("viernes");
			break;
		case 6:
			printf("sábado");
			break;
		case 7:
			printf("domingo");
			break;
		default:
			printf("Opción no válida\n");
		} //fin switch
		fflush(stdin);//limpiar el buffer
		return 0;
}//fin main


