#include <stdio.h>  //salida de datos a pantalla con printf();

int main(void){
//declarar variables.
int i;
float j;
char c;
float n;

//asignacion 
i=11;
j=12;
c= "A";
n=40.794512;
//mostralas en pantalla

/* Sintaxis para la funcion 
printf("");
Muestra un mensaje ---> <formato o tratamiento de la variable %formato>
, (coma) ----> para separar el mensaje de las variables
nombre de las variables &<variable>
;
*/

printf("El valor de la variable i es: %x", &i);

    return 0;
}