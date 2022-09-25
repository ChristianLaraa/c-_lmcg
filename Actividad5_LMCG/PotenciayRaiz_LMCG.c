/*
Este programa utiliza la libreria "math"
Lara Martinez Christian Gael
10 de Junio del 2022
*/


#include <stdio.h>
#include <math.h>

//Prototipos
void operacion1(int x, int y);
void operacion2(int *x, int *y);


void main (void){
int a, b;

a = 5;
b = 1000; //Podemos definir en notacion cientifica 1.0 x 10^²
printf("\n Los valores originales de a y b son: a = %1, b = %i ", a, b);
printf("\n=======================================================================================\n");

operacion1(a,b);	//aunque mandemos a la funcion no cambia el valor en main ()
printf("\n =================================================================================================\n");
printf("\n Los valores despues de la funcion operacion1 a= %i y b = %i ", a, b);
printf("\n Los valores nunca cambiaron\n");
printf("\n ================================================================================================================\n");

operacion2(&a, &b);
printf("\n Los valores despues de la funcion operacion2 a = %i y b = %i \n", a, b);
printf("\n ================================================================================================================================\n\n");
}

// declaraciones de la funcion 
void operacion1 (int x, int y)
{
x = x * x;
y = sqrt (y);
printf("\n *************************************************************************************************************\n\n");

printf("\n Entra a la función Función: operacion1\n");
printf("\n Los valores dentro de la función operacion1 son: a=%i y b=%i \n", x, y);
printf("\n Estos valores estan dentro de la función \n\n");
}

void operacion2 (int *x, int*y){
printf("\n **********************************************************************************************************************\n\n");
printf("\n Función : operacion2\n");

(*x) = (*x) * (*x);
*y = sqrt (*y);
// Los valores se mandaron a la funcion main ()
}
