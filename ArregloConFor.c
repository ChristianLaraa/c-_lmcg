/*
Este programa utiliza el ciclo o bucle for () para ingresar datos
de forma automatica.
*/

//Bibliotecas stdio para salida y entrada de datos
#include<stdio.h>

//Crear una constante mediante #define y TAMAÑO
//Sintaxis  <#define> <NOMBRE DE LA VARIABLE EN MAYUSCULAS> <VALOR NUMERICO> // No se coloca ";"

#define TAMANO_MAXIMO 10 //No lleva ";"

int main (void){

// Definir el arreglo <tipo de dato> <NombreArreglo> <'[' EL NOMBRE DE LA CONSTANTE ']' >;

int ArregloConFor[TAMANO_MAXIMO]; //Entiende el compilador que es de tamaño [10];

//Ingresar datos con una funcion repetitiva fo()
for (int i=0; i < TAMANO_MAXIMO; i++){
	//Sintaxis para la asignacion simple en un arreglo <NombreArreglo[posicion]>=<Dato>;
	ArregloConFor[i]=100;

}

//Lectura del contenido de un arreglo con printf("");
for(i=0; i<TAMANO_MAXIMO; i++){
	printf("\n El contenido en el ArregloConFor en la posicion %i es : %i \n", i, ArregloConFor[i];

}
printf("\n Fin del programa");


return 0;

} 
