/*8.	Escribir el algoritmo que permita leer un numero decimal que representa una cantidad de grados Celsius
 y convierta dicho valor a la cantidad equivalente en grados Fahrenheit. La salida del programa 
 puede ser de la siguiente forma: 100 grados Celsius son 212 grados Fahrenheit. */
 
#include<stdio.h>
main(){
	float C, F;
	
	printf("Ingrese la cantidad de grados celsius: ");
	scanf("%f", &C);
	F = (C*1.8)+32;
	printf("%.2f grados Celsius son %.2f grados Fahrenheit.", C, F);
}
