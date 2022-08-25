// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main ( void ){ // Funcion principal

	// EJERCICIO PROBLEMA 2 --> COVERTIR GRADOS CELIUS A GRADOS FAHRENHEIT
	// QUEREMOS RESULTADOS FLOTATES
	
	// Definicion de las variables flotantes
	float gradosCelius, gradosFahren;
	
	
	// Muestra por pantalla ( output )cuerpoo del mensaje
	printf("Introduce los grados celsius");
	scanf ("%f",&gradosCelius );
	
	
	// Operacion a realizar para calcular los grdos Fahrenheit ( Buscar en internet	)
	gradosFahren = (gradosCelius * 9/2) + 32;
	
	
	// Imprime por pantalla el cuerpo del mensaje con el resultado de la operacion gradosFahren
	printf("La conversion de grados Celius a Grados Fahrenheit es de : %f", gradosFahren);
	
	//	system("pause");
	return 0; // obigado de colocar el return 0;
}


