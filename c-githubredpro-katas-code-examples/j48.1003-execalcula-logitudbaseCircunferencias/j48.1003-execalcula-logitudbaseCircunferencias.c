// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa
#define PI 3.1416
 
int main ( void ){ // Funcion principal

	//HECER UN PROGRAMA QUE CALCULE EL logitud DE UNA CIRCUNFERENCIA (radio)

	// Para calcular NECESITAREMOS DEFINIR 2 VARIABLES FLOTANTE
	float radio, longitud ;
		
		printf("digite el valor del radio de la circunferencia ");  // Cuerpo del mensaje output
		scanf("%f", &radio);										// entreda de datos input
		
		// LA LONGITUD DE UNA CIRCUNFERENCIA SE CALCULA A TRAVES DEL VALOR INTRODUCIDO DEL RADIO * UNA ECUACION MATEMATICA DENOMINADA PI
		longitud = PI * radio;												
		printf("\nLa longitud de circunferencia es: %.2f", longitud);
		
		return 0; // obigado de colocar el return 0;
}


