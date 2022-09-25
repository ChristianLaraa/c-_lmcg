/*Este programa determina conforme al "Hoy No Circula", si un automovil puede circular
Lara Martinez Christian Gael
06 de Junio del 2022
*/
#include <stdio.h>
int main (void)
{
int valor;

printf("Introduce el numero de tu terminacion: \n\t");
scanf("%d" ,&valor);

switch (valor){
case 0: {
printf("No circulas el VIERNES");
}
case 1: {
printf("No circulas el JUEVES");
break;
}
case 2: {
printf("No circulas el JUEVES");
break;
}
case 3: {
printf("No circulas el MIERCOLES");
break;
}
case 4: {
printf("No circulas el JUEVES");
break;
}
case 5: {
printf("No circulas el LUNES");
break;
}
case 6: {
printf("No circulas el LUNES");
break;
}
case 7: {
printf("No circulas el MARTES");
break;
}
case 8: {
printf("No circulas el MARTES");
break;
}
case 9: {
printf("No circulas el VIERNES");
break;
}
default: {
printf("Numero NO valido");
}
}




return 0;
}
