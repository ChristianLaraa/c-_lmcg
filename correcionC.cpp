/*Código de tipos de prendas según el Estilo Urbano
nombre del autor: Equipo 2
  fecha: 02 junio 2022
  descripción del programa
  */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int numero, salir, seleccion;
	salir = 1;
	system("color 71");
	while (salir==1) {
		system("cls");
	printf(" Estilos\n ");
		
	printf ( " 1.Rocker@\n ");
	
	printf (" 2. G%ctic@\n", 162 );
	
	printf (" 3. Raper@\n ");
	
	printf ("4. Hipster\n ");
	
	printf ("5. Rastafari\n");
	
	printf ("6. Otaku\n");
	
	printf ("7. Skater\n");
	
	printf (" Selecciona tu estilo ");
	
		scanf("%d",&numero); 

            printf (" Segun el estilo que seleccionaste y con el que te identificas, se te proporcionar% una recomendaci%cn de prendas\n ",160,162);
		switch (numero) {
			case 1:
			printf("Prendas atrevidas y urbanas como pantalones pitillo, prendas de cuero, tachuelas, lentejuelas, botas militares, sombreros trendy, gafas de aviador, etc. Firmas como Balmain, abanderan este estilo");	
			break;
		case 2:
			printf(" Llaman la atención por no tener nada de color, solo negro. Ropa victoriana, cuero negro y delineador del mismo color, como si estuvieran de luto. Adem%cs, lo acompañan con elementos religiosos, como cruces y otros s%cmbolos ", 160, 161 );
			break;
		case 3:
			printf("Graffitis, ropa varias tallas m%cs grande, gorras con la visera Yohacia atr%cs y, como no, m%csica rap. Suelen llevar tambi%cn joyas grandes, cadenas doradas, anillos y relojes, combinados con deportivas grandes.", 160, 160, 163, 130 );
			break;
		case 4:
			printf(" Disfrutan de la est%ctica vintage y disfrutan de la m%csica indie. Gafas de pasta, pañuelos, gorros, barba muy espesa y alg%cn que otro tatuaje ", 130, 163, 163);
			break;
		case 5:
			printf("Rastas, sandalias, ropa grande y c%cmoda, y alg%cn cigarrillo de cannabis. En su ropa no pueden faltar el rojo, amarillo y verde", 162, 163);
			break;
		case 6:
			printf(" Tanto las piezas superiores como pantal%cn y zapatos tendr%cn un color estridente, ya sea por ser muy claro, muy colorido o muy oscuro, a este nivel no existen las medias tintas. Es caracter%cstico de este estilo las gafas extravagantes, con grandes cristales y monturas muy pesadas ", 162, 160, 161);
			break;
		case 7:
			printf("Un estilo que se nutre eminentemente de ropa urbana, que no entiende de sexos y que busca, principalmente, la comodidad del que lo lleva, jugando con combinaciones de deportivas, sudaderas y pantalones m%cs bien holgados.", 160);
			break;
		default: (" Encontraremos, un estilo para ti ");
		}
		 //fin switch
		//	fflush(stdin);//limpiar el buffer
	    getch ();	
}// fin while
		return 0;
		}
		
		//fin main

