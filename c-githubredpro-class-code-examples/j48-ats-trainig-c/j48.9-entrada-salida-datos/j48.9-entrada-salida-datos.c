// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

	// Operacion 1 salida de muchos datos
	int 	a = 10;
	float	b = 15.5; // (.2f) determina en nuemro de flotantes que apareceran despues del 15
	char	f = 'e'; // Siempre comillas simples para las operaciones de tipo caractere, recuerda que la char solo devuelve el ultimo caractere de una cadena de string

	// Pinta por pantalla los datos de operacion1
	//	printf("El valoe de int es %i \n el valor de float es %.2f \n el valor d e char es %c \n", a, b, f);
	
		printf("El valor de int es %i \n", a);
		printf("El valor de float es %.2f \n ", b);
		printf("El valoe de char es %c \n", f);
	printf(" \n");														// Salto de linea
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
		
	// Operacion 2 entrada y salida de un numeor entero
	int 	d; // espacio en memoria

	printf("Digite el valor de la variable ( d ) : ");// Pregunta y pinta por pantalla
	scanf("%i", &d); // lo que hacemos es pedir por pantalla el valor y el tipo (%i) de de la variable (d) y en que posicion de memoria lo vamos guardar (&d) 
	printf("El valor de la variable ( d ) es un numero entero : %i", d);
	printf(" \n");															// Salto de linea
	printf(" \n");															// Salto de linea
	
	
	// Operacion 3 entrada y salida de un numero flotante
	float	e;														
		
	printf("Digite el valor de la variable ( e ) :");						// Pregunta y pinta por pantalla
	scanf("%f", &e);														// Entrada de datos para un numero flotante e
	printf("El valor de la variable ( e ) es un numero flotante %.2f", e);	// printf("El valor de la variable (e) es un numero flotante %f", e);
																			// (.2f) determina en nuemro de flotantes que apareceran despues del 15
	printf(" \n");															// Salto de linea
	printf(" \n");															// Salto de linea
	
	
	// Operacion 4 entrada y salida de dato tipo char
	char	c; // Siempre comillas sinples para las operaciones de codigo
	
	printf("Introduzca un charactere para la variable ( c ) : ");// Entrada de dato par una cadena de caracteres
	scanf("%c", &c);
	printf("El valor es  %c : ", c); // Solo pinta un caractere

	return 0; // devuelve 0, es decir hemos terminado
}


