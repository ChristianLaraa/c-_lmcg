/*
Programa: ArregloBidimensional.c
Este progrma servira para poder ejemplificar el como se genera una Matriz o Arreglo Bidimensional
Insertar datos y leer el contenido de la matriz por coordenadas
*/

//Declarar Cabeceras

#include <stdio.h>
//Declaro mis constantes con #define
#define FILAS 3 //creamos una constante
#define COLUMNAS 4

int main (void){
// Declarar mi arreglo y variables

//int numeros[3][4]
int numero[FILAS][COLUMNAS] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
/*int numero [FILAS][COLUMNAS] = {10, 20, 30, 40
				50, 60, 70, 80, 90
				    100, 110};			*/

// Insertar datos se necesita un for anidado
/*Este ciclo for muestra los valores por COLUMNAS 10 20 30 (primer columna)
*/

for(int n = 0; n < FILAS; n++){
	for(int m = 0; m < COLUMNAS; m++){
	printf("\n valor en [%i]\n ", numero[n][m]);
}
	printf("\n");

}
return 0;
}
