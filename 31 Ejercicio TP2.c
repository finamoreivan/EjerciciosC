/* 31.	Hacer un algoritmo que luego de ingresar 2 n�meros por teclado, 
imprima los n�meros naturales que hay entre ambos empezando por el m�s peque�o,
contar cuantos n�meros hay y cu�ntos de ellos son pares. */
#include<stdio.h>
main(){
	int n1, n2, i;
	
	printf("Ingrese un numero: ");
	scanf("%d", &n1);
	printf("Ingrese un numero mayor al anterior: ");
	scanf("%d", &n2);
	if (n1>n2){
		printf("El primer numero es m�s grande que el segundo.");
	}else if (n1 < 0 || n2 < 0){
		printf("Uno de los numeros no es natural");
	}
	printf("Los numeros naturales entre %d y %d son: \n", n1, n2);
	for(i = n1 + 1; i < n2; i++){
		printf("%d, ", i);
	}
}
