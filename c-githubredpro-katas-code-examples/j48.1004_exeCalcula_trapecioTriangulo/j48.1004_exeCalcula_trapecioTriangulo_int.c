// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

		// Hacer un programa que calcule el area de un trapecio
		int baseMayor, baseMenor, area, altura;
		
		// Base Mayor
		printf("Digite el valor dela base mayor del trapecio: ");
		scanf("%i", &baseMayor);
		
		// Base Manor
		printf("Digite el valor dela base menor del trapecio : ");
		scanf("%i", &baseMenor);
		
		// Altura
		printf("Digite el valor de la altura de trapecio : ");
		scanf("%i", &altura);

	
		area = ((baseMayor+baseMenor)*altura)/2;
		printf("\nEl area es cm2: %i",area);


	return 0; // obigado de colocar el return 0;
}


