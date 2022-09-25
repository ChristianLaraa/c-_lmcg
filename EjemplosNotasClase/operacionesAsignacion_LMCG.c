/*programa: operadores de asignacion
Este programa demuestra el uso de los operadores de asignación  */

//cabecera de las bibliotecas en c y algunas # de definicion
#include <stdio.h>

//Definir variables globales.
int a=3, b=6, c=4, d=7, e=5, f=8, g=6, h=9, i=8, j=2;

//funcion principal main ()
int main (void){
printf("\n Los valores de las siguientes variables  resultan: \n");
printf("a=%i, b=%i, | c=%i, d=%i | e=%i, f=%i, | g=%i, h=%i, i=%i, j=%i", a,b,c,d,e,f,g,h,i,j);

//aqui utilizaremos las operaciones de asignación

a *=b;
c /=d;
e %=f;
g +=h;
i -= j;

printf("\n\n");

printf("El valor de a*b = %i\n", a);
printf("El valord e c/d = %f\n ", c);
printf("El valor de e modulo f = %f\n ", e);
printf("El valor de g + h = %i\n ", g);
printf("El valor de i-j = %i\n", i);

return 0;
}

