#include <stdio.h>

int main (void){
	float area, base, altura;
	
	printf("Introduce la base: ");
	scanf("%f", &base);
	
	printf("Introduce la altura: ");
	scanf("%f", &altura);
	
	area=(base*altura)/2;
	
	printf("La area es: %f", &area);
	
	
	
	
	return 0;
}