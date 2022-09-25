/*Este programa calcula dado un año, un numero que se presentara la fecha de Pascua
Lara Martínez Christian Gael
05 de Junio del 2022 */

#include <stdio.h>
int main (void){
int A, B, C, E, F, G, H, I, J, M, D;

printf("Introduce el año: \n");
scanf("%d", &A);

B=A/100+1;
C=3*B/4-12;
E=(A%19)+1;
F=(8*B +5)/25-(5+C);
G=5*A/4-(C+10);
H=(11*E+20+F)%30;
if (H==25)
if(E>11)
H=H+1;
if (H==24)
H=H+1;
I=44-H;
if (I<21)
I=I+30;
J=I+7-((G+I)%7);
if(J<=31)
{
D=J;
M=3;
}
else
{
D=J-31;
M=4;
}
printf("%d, %d\n", D, M);

return 0;
}
