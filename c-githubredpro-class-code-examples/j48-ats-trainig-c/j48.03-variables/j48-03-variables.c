// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa
// Macro
#define PI 3.1416
int main (){ // Funcion principal


		// déclaration et affectation des variables de type entier ( int )
		// reserve un space en memoire airducarre
		int aireduCarre = 0; // Adresse de aire Du Carre = 0xF500DA
		float prixReservation = 125.99;
		//signe char = 67;  // Table ASCII
		//signe char = 'A';
		
		
		// Caster ou convertir un tipe de variables
		float nombre = 124.23;
		// Le estamos diciciendo que queremos convertir la parte entera ( int )una variable de tipo flota (nombre), y se la asignamos a una nueva variables (nombre_entier)
		// nombre_entier ahora vale = 124
		int nombre_entier = (int)nombre; 								// convertir un tipo de dato	
		
		/*
		%d : nombre entier ( int )
		%i : nombre entier ( int)
		%f : nombre flottant ( float)
		%c : caractère ( char ) = un seul caractère, le dernier caractère
		%s : chaine de caractere = (texte complet)
		*/
		printf("La valor de nombre entier est de : %i", nombre_entier); // Imprimir por pantall
		printf("\n");
		// Para imprimir por pantalla deberemos de guardar el orden de las declaraciones de las variables en nuestro codigo
		printf("La valor de nombre entier est de : %.2f %i", nombre, nombre_entier); // Imprimir por pantall
		printf("\n");


		// CONSTANTES
		// declaracion de una variable constante
		const float PIA = 3.1416;
		const float TVA = 8.2;
		printf("La valor de nombre entier est de : %.4f", PIA); // Imprimir por pantalla
		printf("\n");
		printf("La valor de nombre entier est de : %.4f", TVA); // Imprimir por pantalla
		printf("\n");
		// declaracion de una variable constante de tipo macro arriba cmo libreria
		// Macro 
		printf("La valor de nombre entier est de : %.4f", PI); // Imprimir por pantalla
		

		return 0; // obigado de colocar el return 0;
}


