/*Autor: Roque López Andrea Daniela
Fecha: 27 mayo 2022
Descripción breve del programa:
*/
#include <stdio.h>
#include <conio.h>
int main(void){
	int a;
	char nombre[20], dir[20];
		printf("\n Escribe el año del dispositivo  ");
	scanf("%d",&a);
	if(a>=2018){
       printf("\n Escribe el nombre del tipo de dispositivo ");
       	scanf("%s",&nombre);
       printf("\n Escribe el nombre de la marca ");
	   	scanf("%s\n",&nombre);
	   	printf("\n Escribe el nombre del modelo ");
	   	scanf("%s\n",&nombre);
	}
	else{
		printf("\n No procede ");	
	}
	getch();
	return 0;
}
