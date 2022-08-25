// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

		printf("OPERANDO CON LOS OPERADORES ARIMETICOS (+, -, *)");
		printf("\n");
		printf("\n");
		/* ASIGNACIN DE VALORES 1 ------------------------------------- */
	
		int varA;
		varA=10;
		int varB = 20;
		printf("El valor de las variables son : %i %i",varA,varB);
		printf("\n");
		
		/* REASIGNACIN DE VARIABLES 2 --------------------------------- */
		
		varA =  30;
		varB =  30;
		printf("El valor de las variables son : %i %i",varA,varB);
		printf("\n");
		
		/* OPERANDO 1  ------------------------------------------------ */

		// declaracion de varias variables en la misma linea
		int varC, varD, varE;
		// Asignacion de varias variables 
		varC = varD = varE = 100; 	// Valor inicial
		
		/* OPERANDOS 2 ------------------------------------------------ */
		varC = varC + 30;		// reasignacion de la variable a
		varD = varD * 30;		// reasignacion de la variable a
		varE = varE - 20;		// reasignacion de la variable a
		printf("\n");
		printf("El valor de la variable varC es %i\nEl valor de la variable varD es %i\nEl valor de la variable varE es %i\n", varC, varD, varE);
		printf("\n");
		
		/* OPERANDO 3 ------------------------------------------------- */
		// reasignacion de la variables con oiperadores pos decremento
		// Recuerda que la reasignacion de valores se hace de forma procedural, es decir el flujo de nuestro codigo se realiza desde arriba hacia abajo
		// Por lo tanto promero esta ejecutando las lineas de 29,30,31
		
		varC+= 30;		//  varC = 30 + 30; reasignacion de la variable a
		varD *= 30;		//  varD = 30 * 30; reasignacion de la variable a
		varE -= 20;		// 	varE = 20 - 20 ;reasignacion de la variable a
		
		printf("El valor de la variable varC es %i\nEl valor de la variable varD es %i\nEl valor de la variable varE es %i\n", varC, varD, varE);
		printf("\n");
		
		
		return 0; // obigado de colocar el return 0;
}


