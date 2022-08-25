// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

	/*
	// Operacion 1 entrada y salida de un dato tipo char
	char	c; 														// Siempre comillas simples para las declaciones de cadenas de caracter (' char ' )
	printf("Introduzca un charactere para la variable : ( c ) ");	// Pinta por pantalla el mensaje
	scanf("%c", &c);												// Entrada de datos de una cadena de caracteres
	printf("El valor es  %c : ", c); 	
	printf("\n");					
	printf("\n");							
	*/	
	
	//Declaracion una cadena de string completa
	char stringLong[50];
	
	// Entrada de dato par una cadena de caracteres
	printf("Introduzca su nombre : ");

	// PRIMERA forma de devlarar la entrada de datos de un cadena de caracteres tipo ( string )
	// ->>> scanf("%s",&stringLong); 				// el scanf solo lee catacteres juntos, una vez que encuentre un spacio deja de leer el resto del string
	
	// SEGUNDA forma de devlarar la entrada de datos de un cadena de caracteres tipo ( string )
	// ->>> scanf(" %stringLong",&stringLong); 		// Vemos como en la declaracion del tipo de dato( "%stringLong" ), nos admite como parametro el nombre de la variable
	
	// SEGUNDA forma de devlarar la entrada de datos de un cadena de caracteres tipo ( string )
	gets(stringLong); //
	printf("Tu nombre es %s :", stringLong); 		// con gets aceddemos a la cadena de caracteres completa



	return 0;														// devuelve 0, es decir hemos terminado
		
}


