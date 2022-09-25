/*Este programa en base al menu de peaje en una caseta, realiza una operacion
Lara Martínez Christian Gael
06 de Junio del 2022
*/

#include <stdio.h>
int main (void){
int  tipoAuto;
float pago, cambio;

printf("\t>>>>Menu de peaje<<<<\n");
printf("1. Automovil -----------> $88\n");
printf("2. Camioneta ------------> $115\n");
printf("3. Motocicleta -----------> $44\n");
printf("4. Trailer ------------> $143\n");
printf("5. Camion de Volteo o Torton -----------> $209\n\n");

printf("Introduce el tipo de automovil: \n\t ");
scanf("%d" ,&tipoAuto);

switch (tipoAuto){
case 1: {
printf("El total a pagar es: $88 \n");
printf("Introduce tu pago:   \n ");
scanf("%f" ,&pago);
cambio=pago-88;
printf("El cambio es: %f", cambio);
break;
}
case 2:
{
printf("El total a pagar es: $115 \n");
printf("Introduce tu pago: \n");
scanf("%f" ,&pago);
cambio=pago-115;
printf("El cambio es: %f", cambio);
break;
}
case 3:
{
printf("El total a pagar es: $44 \n");
printf("Introduce tu pago: \n");
scanf("%f" ,&pago);
cambio=pago-44;
printf("El cambio es: %f", cambio);
break;
}
case 4:
{
printf("El total a pagar es: $143\n");
printf("Introduce tu pago: \n");
scanf("%f" ,&pago);
cambio=pago-143;
printf("El cambio es: %f", cambio);
break;
}
case 5:
{
printf("El total a pagar es: $209\n");
printf("Introduce tu pago: \n");
scanf("%f" ,&pago);
cambio=pago-209;
printf("El cambio es: %f", cambio);
break;
}
default:
{
printf("Valor NO permitido");
	}
}

return 0;
}
