/*
Programa SwitchDowhile.c
Este progrma utiliza la sentencia Switch para utilizar un MENU
Tambien utilizaremos el ciclo do {<sentencias>}
While()
Para repetir en la pantalla
*/

//Cabeceras
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//Declaracion de la variable global

int opcion = 0; //Esta variable sirve para seleccionar una opcion en nuestro menu
int numero1 = 0;
int numero2 = 0;
int resultado;

//Funcion principal
int main (void){
	int numero = 0;
do{		//inicio del ciclo

printf("\n\n ___________M E N U  P A R A  O P C I O N E S___________\n\n");
printf("\n 1. Calcula la suma de 2 numeros.\n");
printf("\n 2. Calcula la division de 2 numeros. \n");
printf("\n 3. Calcula el cuadrado de 1 numero \n");
printf("\n 4. Calcula la raiz cuadrada de 1 numero \n");
printf("\n 5. Calcula la resta de 2 numeros. \n");
printf("\n 6. SALIDA \n");
printf("\n\t INTRODUZCA UNA OPCION (1-6)\n\n");
	scanf("%d", &opcion);

//Sentencia Switch

switch (opcion){
case 1:
	printf("\n Ingrese el valor del primer numero: ");
scanf("%i", &numero1);
	printf("\n Ingrese el valor del segundo valor: ");
scanf("%i", &numero2);
		resultado = numero1 + numero2;
	printf("\n El resultado de la suma es: %i \n\n", resultado);
printf("--------------------------------------------------------------------------------------------");
	break;

case 2:
	printf("\n Ingrese el valor del numero entero: ");
scanf("%i", &numero1);
	printf("\n Ingrese el valor del segundo numero entero: ");
scanf("%i", &numero2);
		resultado = numero1 / numero2;
	printf("\n El resultado de la division de Dos Numeros es: %i \n\n", resultado);
printf("--------------------------------------------------------------------------------------------------------------------------");
	break;

case 3:
	printf("\n Ingrese el numero a elevar: ");
scanf("%i", &numero1);
		resultado = pow (numero1, 2);
	printf("\n El resultado de el cuadrado del valor es: %i \n\n", resultado);
printf("-----------------------------------------------------------------------------------------------------------");
	break;

case 4:
	printf("\n Ingrese el valor del primer numero: ");
scanf("%i", &numero1);
	printf("\n Ingrese el valor del segundo numero: ");
scanf("%i", &numero2);
		resultado = numero1 - numero2;
	printf("\n El resultado de la resta es: %i \n\n", resultado);
printf("-------------------------------------------------------------------------------------------------------");
	break;
}
	}while (opcion != 6);	//fin del ciclo
return 0;
}




