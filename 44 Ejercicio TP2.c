/* 44.	Escribir un programa que determine si un año es bisiesto. Un año es bisiesto si es múltiplo de 4.
 Los años múltiplos de 100 no son bisiestos, salvo si ellos también son múltiplos de 400 (2000 es bisiesto, pero 1900 no). */
#include<stdio.h>
main(){
	int anio;
	
	printf("Ingrese el a%co: ", 164);
	scanf("%i", &anio);
	
	if (anio % 4 == 0 && anio %100 != 0 || anio % 400 == 0){
		printf("El a%co es bisiesto.", 164);
	} else
	printf("El a%co no es bisiesto.", 164);
}
