/*Este programa realiza una conversion de temperaturas la equivalencia de grados celsius a Farenheit,
Klevin, Reaumur.
Lara Martínez Christian Gael
5 de Junio del 2022 */

#include <stdio.h>
int main (void) {
float C, K, F, R;

printf("Introduce la temperatura en C°: \n");
scanf("%f", &C);

K= C+273.15;
F= (C*9/5) +32;
R= C*4/5;

printf("La temperatura en Kelvin es  ------> %f \n", K);
printf("La temperatura en grados Fahrenheit es --------> %f \n", F);
printf("La temperatura en grados Reaumur es ---------> %f \n", R);

return 0;
}
