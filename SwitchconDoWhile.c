/* 
Mostrara un menu utilizando la funcion switch () y utilizando Do While podremos visualizar
*/

#include<stdio.h>
#include<math.h>

//Declara variables globales
int opcion=0; //switch y para do while
int numero1, numero2;
int resultado;

//Declarar mi funcion main () principal
int main (void){

do {
printf("\n>>>>M.E.N.U<<<<\n");
	printf("\n a. Suma de dos Numeros \n");
	printf("\n b. Multiplicacion de Dos Numeros\n");
	printf("\n c. El cuadrado de un Numero\n");
	printf("\n d. Salida\n");
//Seleccionar una opcion
	printf("\n\n Seleccione una opcion (a-d): \n");
	scanf("%i", &opcion);
printf("\n");
	switch (opcion){
	//sintaxis==> <case> <etiqueta 1 o 'a'>:
	case 'a': case 'A':
	printf("\n Ingrese el primer valor: \n");
	scanf("%i", numero1);
	printf("\nIngrese el segundo Valor: \n");
	scanf("%i", numero2);
	resultado=(numero1+numero2);
	printf("\nEl resultado de la suma %i es igual a %i \n", numero1, numero2, resultado);
	break;

}

}while();









return 0;
}
