/*Autor: Christian Gael Lara Martínez 
Fecha:25 de Mayo del 2022
Descripción breve del programa: Multiplicación de Dos Números
*/
#include <stdio.h>
#include <conio.h>
int main(void)
{
	int num1,num2,total;
	printf("\n Escribe el primer valor:  ");
		scanf("%d",&num1);
    printf("\n Escribe el segundo valor: ");
		scanf("%d",&num2);
    total=num1*num2;
    printf("\n El resultado es: ------->>  %d",total);		
	getch();
	return 0;
}

