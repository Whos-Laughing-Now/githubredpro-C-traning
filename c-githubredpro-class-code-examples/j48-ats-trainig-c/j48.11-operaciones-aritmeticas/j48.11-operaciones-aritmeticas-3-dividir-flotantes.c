// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

		printf("OPERACIONES ARITMETICAS, DIVIDIR RESTO Y DIVIDIR FLOTANTES");
		printf("\n");
		
		// definition des variables y Asignaction  et inicialization d'une valeur de depart des varibles 
		// Abrebiation de la declaration et asignation des variables
		int number1, number2 , dividir;
		 
		number1 = 0;
		number2 = 0;
		float dividirFlotante = 0;
		
		// Abrebiation del cuerpo del mensaje y la entrada input
		printf("Digite 2 numeros : \n");
		scanf("%i %i",&number1,  &number2);
		printf("\n");

		// Intruccion, codificar las operaciones
	
		dividirFlotante = (float)number1 / (float)number2;
		printf("El valor de la operacion dividirFlotante es = %.2f \n", dividirFlotante);	// Entrada del dato de tipo input
		
		dividir = number1 % number2;
		printf("El valor de la operacion dividir es = %.2f \n", dividirFlotante);	// Entrada del dato de tipo input
		
		system("pause");
		sleep(3); //sleep for 3 seconds
		return 0; // obigado de colocar el return 0;
}


