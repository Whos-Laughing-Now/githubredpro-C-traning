// <stdio --> >cabezera estandar de entrada y salida de datos
// <stdio --> standar input output header

#include <stdio.h> // Procedimiento standar, imprimir por pantalla y que el usuario digite cualquier cosa

int main (){ // Funcion principal

		// Caracteristic del tipo de dato char
		char caractere2 = '48J'; 
		printf("el elemento es : %c \n", caractere2);// Solo pinta el ultimo caractere de una cadena de chart

		// Tipos de datos u sus valores
		char 			a = 'e'; 		// Tamano 1Byte Rango : 0..255 	
		short 			b = -15; 		// Tamano 2 byte Rango = -125 hasta 127
		int 			c = 1204; 		// Tamano en byte, Rango = -32.768...32767
		unsigned int 	d = 128; 		// tamano 2 Bytes Rango 0...65535 --> Solo admite numeros positivos
		long 			e = 123456; 	// Tamano 4 Bytes Rango -2147483648...2147483637
		float  			f = 15.678; 	// Tamano 4 Bytes Rango - 3.4*(10)...3.4*(10)
		double			m = 2544.2544;	// Tamano 8 Bytes Rango  1.7*(10)...1.7*(10) 
		long double 	h = 2.35645455;	// Tamano , Rango 1.7*(10)...1.7*(10) 
		
		
		// Pintarpor pantallas
		printf("el elemento a es : %c \n",a); 	// char				(%c)
		printf("el elemento b es : %i \n",b); 	// short			(%i)
		printf("el elemento c es : %i \n",c);	// int				(%i)
		printf("el elemento d es : %i \n",d);	// unsigned int		(%i)
		printf("el elemento e es : %li \n",e);	// long				(%li)
		printf("el elemento f es : %.2f \n",f);	// float 			(%f)
		printf("el elemento m es : %lf \n",m);	// double 			(%lf)
		printf("el elemento h es : %.lf \n",h);	// long double 		(%lf) --> con ( .lf ) convertimos un numero flotante en un numero entero

	return 0; // obigado de colocar el return 0;
}

