/*Autor: Christian Gael Lara Martínez 
Fecha: 27 Mayo 2022
Descripción breve del programa: Por medio de una compra minima determinar si el cliente recibe un obsequio.
*/
#include <stdio.h>
#include <conio.h>
int main(void){
	float total;
	
	printf(">>>>>>> Estimado cliente en la compra minima de 500 mxn usted obtiene como regalo una Mochila y una Lonchera, <<<<<<< \n");
	
	
		printf("\nIntroduce el total de la compra: ");
	scanf("%f", &total);
	
	if(total<500)
	{
       printf("\n Lamentablemente no obtienes el regalo");
	}
	else{
		printf("\n ¡Felicidades obtienes el regalo!");	
	}
	getch();
	return 0;
}
