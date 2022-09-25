/*Este programa determina si la tecla que se presiona es una vocal
Lara Martínez Christian Gael
06 de Junio del 2022
*/

#include <stdio.h>
int main (void)
{
char letra;

printf("Introduce una letra:\n\t ");
scanf("%c" ,&letra);


if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U' )
{
printf("Tu letra es una vocal :)");
}
else {
printf("Tu letra no es una vocal");
}
return 0;
}


