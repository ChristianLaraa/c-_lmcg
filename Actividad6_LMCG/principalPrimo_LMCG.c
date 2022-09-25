#include <stdio.h> // print scan
#include "primo.h" // esta adentro de la carpeta


int main (void){
int numero; // almacena el valor

printf ("\n Introduce un numero entero: \n" );
scanf("%d", &numero);

printf ("\n El valor del numero es: %d\n", numero);

// llamado a la funcion 

if (primo(numero)) // llama a la funcion primo (num) y me regresa un resultado.
  {
   printf ("\nEs un numero primo \n");
  }
else {
   printf ("\n El numero no es primo\n");
   }
}
