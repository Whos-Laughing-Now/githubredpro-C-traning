// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

		
	float salario_inicial,aumento,salario;
	
	printf("Digite su salario: ");
	scanf("%f",&salario_inicial);
	
	aumento = salario_inicial*0.25;
	salario = salario_inicial + aumento;
	
	printf("\nSu nuevo salario es: %.2f",salario);
	
	return 0; // obigado de colocar el return 0;
}


