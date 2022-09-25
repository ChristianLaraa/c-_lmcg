/* crear una estrucra con 3 tipos de datos 
char nombre [20];
int edad;
dobule altura.
operaciones : insertar y leer lo datos contendios enla estructura

*/


#include <stdio.h>

/*sintaxis // struct va siempre fuera de la funcion main().

struct <nombre de la estructura> {
<tipo de datos> nombre dela variable;
};
*/

struct persona{
  char nombre[10]; 
  int edad; 
  double altura; 
  char email[30];
};  // al terminar de definirlo se convierte en un TIPO DE DATO

// void main(void) -> funciones, cabeceras, // si no conocemos el tipo de dato a regresar.

int main(void){
// delaracion de mi variable estructura.
// sintaxis struct < nombre de la nueva estructura>  <nombre variable> [tamaño];  //se maneja como un arreglo

 struct persona agenda[3];  // creamos una estructura de tipo de dato persona que se llama agenda y contiene 
                           // cuatro cloumnas(nombre, edad, altura, e-mail)  3 filas (0 , 1, 2 )
 
// asignacion 2 formas Directa  printf y scanf

//entrada de datos 
//&<nombre de la variable estructura> [posicion]

printf("\n Ingrese el nombre de la persona:  \n");
scanf("%s", &agenda[0].nombre);
printf ("\n ingresa la edad: \n");
scanf ("%i", &agenda[0].edad);
printf("\n Ingrese la altura  de la persona:  \n");
scanf("%f", &agenda[0].altura);
printf("\n Ingrese el correo electronico de persona:  \n");
scanf("%s", &agenda[0].email);

// para poder leerlos usamos la misma sintaxis &nombrevariablestructura [posicionfila]. atributo // columna

printf ("\n\n\n El nombre es: %s\n", agenda[0].nombre);
printf ("\n La edad es: %i \n", agenda[0].edad);
printf ("\n La altura es: %f \n", agenda[0].altura);
printf ("\n el correo electronico  es: %s \n", agenda[0].email);



return 0;

}
