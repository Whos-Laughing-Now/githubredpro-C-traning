// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main ( void ){ // Funcion principal

		printf("OPERACIONES ARITMETICAS, SUMA, RESTA, DIVISION, MULTIPLICACION");
		printf("\n");
		
		// definition oeclaracion de las variables
		int number1;
		int number2;
		
		int suma;
		int resta;
		int dividir; 
		int multiplicar;
	
		// Asignaction  et inicialization d'une valeur de depart des varibles 
		suma = 0;
		resta = 0;
		dividir = 0;
		multiplicar = 0;	
		

		printf("digite el primer numero : "); 	// Muestra por pantalla ( output )cuerpoo del mensaje
		scanf("%i", &number1);					// Entrada del dato para el primer numero de tipo input
		printf("Digite el segundo numero : ");	// Muestra por pantalla ( output )cuerpoo del mensaje
		scanf("%i", &number2);					// Entrada del dato para el segundo numero de tipo input
		printf("\n"); 							// salto de linea

		// Intruccion, codificar las operaciones
		suma = number1 + number2;				// Operacion suma
		resta = number1 - number2;				// Operacion resta
		dividir = number1 % number2;			// Operacion dividir
		multiplicar = number1 * number2;		// Operacion multiplicar
		
		
		// Pontar el resultado de las operacion
		printf("El valor de la operacion d ela suma es %i : \n", suma);	// Entrada del dato de tipo input
		printf("El valor de la operacion d ela reta es %i : \n", resta);	// Entrada del dato de tipo input
		printf("El valor de la operacion d ela multiplicar es %i : \n", multiplicar);	// Entrada del dato de tipo input
		printf("El valor de la operacion d ela dividir es %i : \n", dividir);	// Entrada del dato de tipo input
	
		return 0; // obigado de colocar el return 0;
}


