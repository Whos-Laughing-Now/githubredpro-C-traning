// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa
#include<math.h>	// Libreria matematica de C

int main (){ // Funcion principal

		// SACAR LA HIPOTENUSA DE UN TRIANGULO RECTANGULO PIDIENDO AL USUARIO EL VALOR DE LOS CATETOS
		// la hipotenusa se sacar atraves de la formula de pitagoras,vamos a tener que utilizar la raiz cuadrada, vamos ha utilizar numero reales (flotante)
		
			float hipotenusa, cateto1, cateto2;
	
			printf("Digite 2  : \n ");// Imprime por pantalla el cuerpo del mensaje output
			scanf("%f %f", &cateto1, &cateto2);	// recoge la entrada de datos a traves del input
		
		
		// Calcular la operacion para obtener la hipotenusa del triangulo rectangulo
		// Dice que la raiz cuadrada de los catetos elevada a la raiz cuadrada sumandose nos va ha dar el resultado de la hipotenusa
		// Raiz cuadrda en math,h es sqrt, 
		// pow nos ayuda a elevar un numero al cuadrado (dato, exponete)
		
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
		
		// Pinta por pantalla el resultado del la operacion
		printf( "La hipotenusa de tiangulo rectagulo es %.2f ", hipotenusa);

	return 0; // obigado de colocar el return 0;
}


