/*
Este programa tiene el proposito de utilizar la librerria <math.h>
y como agragarla al codigo fuente.c y como compilarla.
*/

//cabeceras del programa
#include<stdio.h> //printf y scanf()
#include<math.h> //Esta libreria utiliza la funcion pow() o  potencia

//variables globales -> porque se utilizan en todo el programa

//funcionn principal.
int main(void){

//declarar variables  locales
double x=2.55, y=4;
double resultado=0.0;

resultado = pow(x,y); //es aplicasa la formula x*y

printf("\nEl resultado es: %f", resultado);












return 0;
}
