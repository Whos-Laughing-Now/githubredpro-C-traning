

// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

/*
Macro:
- Las macros nos sirven para defirni valor a una variable a lo largo del programa que no queremos que cambie, existen varias macros en C
*/
#define PI 3.1416 //  // Macro --> // define = constante


int y = 5; // Variable global

int main (){ // Funcion principal

int	x = 10; // Variable local,solo se utiliza dentro de la funcion, la posicion de memoria es x, y le estamos asignaodo el valor de 10

	
	float suma = 0; // Devuelve un numero entero
	
	suma = PI + x; // Operacion del variable suma
	
	// %i = le indicamos con que tipo de dato estamos operando = int suma;
	//suma, le estamos indicando con que tipo de dato (variable ) con el cual queremos realizar un tipo de operacion 
	printf("La suma es : %f \n", suma); // --> con todos los decimales
	printf("La suma es : %.2f", suma); // -> Con solo 2 decimales
	
	
	return 0; // Nos dice que nuestro programa termina correctamente
	// obigado de colocar el return 0;
}


