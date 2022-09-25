#include <stdio.h>
int main(void)
{

float base, altura, area;

printf("Introduce la base: ");
scanf("%f", &base);

printf("Introduce la altura: ");
scanf("%f", &altura);

area=(base*altura)/2;
printf("El valor del area es: %f ", area);

return 0;
}
