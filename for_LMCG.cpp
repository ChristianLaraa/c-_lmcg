/*
Lara Martinez Christian Gael
Equipo 2
*/

#include<stdio.h>

int main() {
	int calificacion;
	int n;
	float promedio;
	float suma;
	int x;
	printf("%cCu%cntas calificaciones son?\n",168,134);
	scanf("%d",&n);
	for (x=1;x<=n;x+=1) {
		printf("Escribe la calificaci%cn %d  \n",162,x);
		scanf("%d",&calificacion);
		suma = suma+calificacion;
	}//termina ciclo for
	promedio = suma/n;
	   if (promedio>=6){
	   	printf("\n Felicidades disfruta tus vaciones");
	   	printf("\n Acredit%c el curso con la calificaci%cn  %.1f",162,162,promedio);
		   }
	   	else{
	   	printf("\n Lo lamentamos no acredit%c el curso",162);
		printf("\n No acreditó el curso su promedio es  %.1f",promedio);   	
		   }
	return 0;
}
