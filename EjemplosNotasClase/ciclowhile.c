/*
programa: ciclowhile
Hacer un programa que con un contador muestre la númeracion del 1 al 10
*/
#include <stdio.h>
int main (void){

int contador=0; //Esta sera mi variable para evaluar la salida del ciclo while ()

		/*Sintaxis del ciclo While while (condicion){
		// serie de instrucciones
		condicion ++; // condicion --  }
		*/
/*inicio ciclo*/

while (contador <= 10) //Si la condicion es VERADERA ejecula while () hasta que sea Falsa

{
printf("\n EL valor del contador: %i", contador);
contador=contador+1;
// contador ++
// contador= contador+1
}

return 0;
}
