Algoritmo Seleccion_multiple_menu
	Definir numeroSeleccion Como Entero;
	Escribir 'Estilos';
	Escribir '1. Rocker@';
	Escribir '2. G�tic@';
	Escribir '3. Raper@';
	Escribir '4. Hipster';
	Escribir '5. Rastafari';
	Escribir '6. Otaku';
	Escribir '7. Skater';
	Escribir 'Selecciona tu estilo';
	Leer numeroSeleccion;
	Escribir "Segun el estilo que seleccionaste y con el que te identificas, se te proporcionar� una recomendaci�n de prendas";
	
	
	Segun numeroSeleccion  Hacer
		1:
			Escribir 'Prendas atrevidas y urbanas como pantalones pitillo, prendas de cuero, tachuelas, lentejuelas, botas militares, sombreros trendy, gafas de aviador, etc. Firmas como Balmain, abanderan este estilo.';
		2:
			Escribir 'Llaman la atenci�n por no tener nada de color, solo negro. Ropa victoriana, cuero negro y delineador del mismo color, como si estuvieran de luto. Adem�s, lo acompa�an con elementos religiosos, como cruces y otros s�mbolos.';
		3:
			Escribir 'Graffitis, ropa varias tallas m�s grande, gorras con la visera hacia atr�s y, como no, m�sica rap. Suelen llevar tambi�n joyas grandes, cadenas doradas, anillos y relojes, combinados con deportivas grandes.';
		4:
			Escribir 'Disfrutan de la est�tica vintage y disfrutan de la m�sica indie. Gafas de pasta, pa�uelos, gorros, barba muy espesa y alg�n que otro tatuaje.';
		5:
			Escribir 'Rastas, sandalias, ropa grande y c�moda, y alg�n cigarrillo de cannabis. En su ropa no pueden faltar el rojo, amarillo y verde';
		6:
			Escribir 'Tanto las piezas superiores como pantal�n y zapatos tendr�n un color estridente, ya sea por ser muy claro, muy colorido o muy oscuro, a este nivel no existen las medias tintas. Es caracter�stico de este estilo las gafas extravagantes, con grandes cristales y monturas muy pesadas.';
		7:
			Escribir 'Un estilo que se nutre eminentemente de ropa urbana, que no entiende de sexos y que busca, principalmente, la comodidad del que lo lleva, jugando con combinaciones de deportivas, sudaderas y pantalones m�s bien holgados. U';
			
		De Otro Modo:
			Escribir 'N�mero no v�lido';
	FinSegun
FinAlgoritmo
