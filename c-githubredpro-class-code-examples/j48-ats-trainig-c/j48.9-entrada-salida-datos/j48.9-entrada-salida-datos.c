// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

	// Operacion 1 salida de muchos datos
	int 	a = 10;
	float	b = 15.5; // (.2f) determina en nuemro de flotantes que apareceran despues del 15
	char	c = 'e'; // Siempre comillas simples para las operaciones de tipo caractere, recuerda que la char solo devuelve el ultimo caractere de una cadena de string

	// Pinta por pantalla los datos de operacion1
	printf("El valoe de suma es %i \n el valor de float es %.2f \n el valor d e char es %c \n", a, b, c);
	printf(" \n");
		
	//--------------------------------------		
	// Operacion 2 entrada y salida de un numeor entero
	int 	d; // espacio en memoria
	float	e; // (.2f) determina en nuemro de flotantes que apareceran despues del 15
	char	cadena; // Siempre comillas sinples para las operaciones de codigo
	/*
 	// Entrada de datos para un numero entrero int d
	printf("Digite el valor de la variable a : ");
	scanf("%i", &d); // lo que hacemos es pedir por pantalla el valor y el tipo (%i) de de la variable (a) y en que posicion de memoria lo vamos guardar (&d) 
	printf("El valor de la variable (a) es un numero entero : %i", d);
	printf(" \n");
	printf(" \n");
	
	//--------------------------------------		
	// Operacion 3 entrada y salida de un numero flotante
	// Entrada de datos para un numero flotante e
	printf("Digite el valor de la variable e :");
	scanf("%f", &e);
	// printf("El valor de la variable (e) es un numero flotante %f", e);
	printf("El valor de la variable (e) es un numero flotante %.2f", e);
	printf(" \n");
	printf(" \n");
	*/
	
	// Entrada de dato par una cadena de caracteres
	printf("Introduzca un charactere para la variable c : ");
	scanf("%c", &cadena);
	printf("el resultado para la variable %c es :", cadena); // Solo pinta un caractere

		
	

		return 0; // devuelve 0, es decir hemos terminado
}


