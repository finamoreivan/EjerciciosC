//23.	Diseñar el algoritmo necesario para habiéndose leído el valor de 2 variables NUM1 y NUM2 se intercambien los valores de las variables,
// es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y viceversa.
#include<stdio.h>
main(){
	int NUM1, NUM2, AUX;
	printf("Ingrese el valor de NUM1: ");
	scanf("%d", &NUM1);
	printf("Ingrese el valor de NUM2: ");
	scanf("%d", &NUM2);
	
	AUX = NUM1;
	NUM1 = NUM2;
	NUM2 = AUX;
	
	printf("El valor de NUM1 ahora es: %d\n", NUM1);
	printf("El valor de NUM2 ahora es: %d\n", NUM2);
}
