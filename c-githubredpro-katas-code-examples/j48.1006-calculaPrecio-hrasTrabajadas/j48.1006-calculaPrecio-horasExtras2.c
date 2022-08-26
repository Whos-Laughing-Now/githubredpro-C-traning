// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

		
	float precioHora, totalGanacias, horasTrabajadas, aumento;
	
	printf("Ingrasa el total de horas trabajas : ");
	scanf("%f", &horasTrabajadas);
	
	precioHora = 23.45;
	
	totalGanacias = precioHora * horasTrabajadas ;
	
	// funciona
	if(horasTrabajadas > 100 ){
		aumento = precioHora * 0.25;
	}else{
		precioHora = 23.45;
	}

	
	printf("El total de las ganacias es %.2f",totalGanacias );
	
	return 0; // obigado de colocar el return 0;
}


