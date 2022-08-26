// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

		// Una tienda ofrece el 15% descuento por el total de la compra
		// Un cliente desea saber cuanto debera para finalmete por una compra
		
		float precioProducto;
		float compraTotal;
		float descuento;
		
		descuento = 0.15;
		
		printf("Inserte el precio del producto : ");
		scanf("%f", &precioProducto);
		
		descuento = precioProducto * descuento;
		compraTotal = precioProducto - descuento;
		
		
		printf("\nLe hemos aplicado a su compra total de un descuento del 15 por ciento, en euros son un total de %.2f euros ",descuento);
		printf("\nEl precio final con un decuento de 15 euros es de : %.2f euros",compraTotal);
		
		
	return 0; // obigado de colocar el return 0;
}


