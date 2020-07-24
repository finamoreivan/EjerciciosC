/* 31.	Hacer un algoritmo que luego de ingresar 2 números por teclado, 
imprima los números naturales que hay entre ambos empezando por el más pequeño,
contar cuantos números hay y cuántos de ellos son pares. */
#include<stdio.h>
main(){
	int n1, n2, i;
	
	printf("Ingrese un numero: ");
	scanf("%d", &n1);
	printf("Ingrese un numero mayor al anterior: ");
	scanf("%d", &n2);
	if (n1>n2){
		printf("El primer numero es más grande que el segundo.");
	}else if (n1 < 0 || n2 < 0){
		printf("Uno de los numeros no es natural");
	}
	printf("Los numeros naturales entre %d y %d son: \n", n1, n2);
	for(i = n1 + 1; i < n2; i++){
		printf("%d, ", i);
	}
}
