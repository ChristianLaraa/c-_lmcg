Algoritmo Seleccion_multiple_menu
	Definir numeroSeleccion Como Entero;
	Escribir 'Estilos';
	Escribir '1. Rocker@';
	Escribir '2. Gótic@';
	Escribir '3. Raper@';
	Escribir '4. Hipster';
	Escribir '5. Rastafari';
	Escribir '6. Otaku';
	Escribir '7. Skater';
	Escribir 'Selecciona tu estilo';
	Leer numeroSeleccion;
	Escribir "Segun el estilo que seleccionaste y con el que te identificas, se te proporcionará una recomendación de prendas";
	
	
	Segun numeroSeleccion  Hacer
		1:
			Escribir 'Prendas atrevidas y urbanas como pantalones pitillo, prendas de cuero, tachuelas, lentejuelas, botas militares, sombreros trendy, gafas de aviador, etc. Firmas como Balmain, abanderan este estilo.';
		2:
			Escribir 'Llaman la atención por no tener nada de color, solo negro. Ropa victoriana, cuero negro y delineador del mismo color, como si estuvieran de luto. Además, lo acompañan con elementos religiosos, como cruces y otros símbolos.';
		3:
			Escribir 'Graffitis, ropa varias tallas más grande, gorras con la visera hacia atrás y, como no, música rap. Suelen llevar también joyas grandes, cadenas doradas, anillos y relojes, combinados con deportivas grandes.';
		4:
			Escribir 'Disfrutan de la estética vintage y disfrutan de la música indie. Gafas de pasta, pañuelos, gorros, barba muy espesa y algún que otro tatuaje.';
		5:
			Escribir 'Rastas, sandalias, ropa grande y cómoda, y algún cigarrillo de cannabis. En su ropa no pueden faltar el rojo, amarillo y verde';
		6:
			Escribir 'Tanto las piezas superiores como pantalón y zapatos tendrán un color estridente, ya sea por ser muy claro, muy colorido o muy oscuro, a este nivel no existen las medias tintas. Es característico de este estilo las gafas extravagantes, con grandes cristales y monturas muy pesadas.';
		7:
			Escribir 'Un estilo que se nutre eminentemente de ropa urbana, que no entiende de sexos y que busca, principalmente, la comodidad del que lo lleva, jugando con combinaciones de deportivas, sudaderas y pantalones más bien holgados. U';
			
		De Otro Modo:
			Escribir 'Número no válido';
	FinSegun
FinAlgoritmo
