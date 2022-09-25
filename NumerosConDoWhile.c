/*
Este programa despliega 10 numeros en pantalla
*/

#include<stdio.h>

int main (void){

int digito = 0;

	/*sintaxis del do {
			    sentencias
			   incremento i++;
				}while(condicion sera verdadera)*/

do {
printf("\n\n El valor de digito es: %i", digito);
	digito++;
}while(digito <=10);

return 0;
}
