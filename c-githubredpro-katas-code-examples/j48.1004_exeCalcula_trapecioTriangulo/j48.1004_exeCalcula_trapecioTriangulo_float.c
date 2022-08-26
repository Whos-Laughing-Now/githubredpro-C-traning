// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa


int main(){
	
	// /*5. Hacer un Programa que calcule ?reas de trapecios*/
	
	int base_M,base_m,altura;
	float area;
	
	printf("Digite la base mayor: ");
	scanf("%i",&base_M);
	printf("Digite la base menor: ");
	scanf("%i",&base_m);
	printf("Digite la altura: ");
	scanf("%i",&altura);
	
	area = ((base_M+base_m)*altura)/2;
	
	printf("\nEl area es cm: %.2f",area);
	
	return 0;
}



