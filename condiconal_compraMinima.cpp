/*Autor: Christian Gael Lara Martínez 
Fecha: 27 Mayo 2022
Descripción breve del programa: Por medio de una compra minima determinar si el cliente recibe un obsequio.
*/
#include <stdio.h>
#include <conio.h>
int main(void){
	double unidades, precio, total;
	
	printf(">>>>>>> Estimado cliente en la compra minima de 5,000 mxn usted obtiene como regalo una Mochila y una Lonchera <<<<<<< \n");
	
	
		printf("\n\n Introduce el total de unidades adquiridas: ");
	scanf("%d",&unidades);
	
		printf("\n ¿Cual es el precio de cada unidad? ");
	scanf("%d",&precio);
	
	total=(unidades*precio);
	printf("\n El total de la compra corresponde a -------> %.2f" ,&total);

	if(total >=5000){
       printf("\n ¡Felicidades obtienes el regalo!");
	}
	else{
		printf("\n Lamentablemente no obtienes el regalo");	
	}
	getch();
	return 0;
}
