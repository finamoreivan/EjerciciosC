//19.	Hacer el algoritmo que imprima todos los n�meros naturales que hay desde la unidad hasta un n�mero que introducimos por teclado.
#include<stdio.h>
main(){
	int i, N;
	printf("Ingrese un numero: ");
	scanf("%d", &N);
	printf("Numeros naturales entre 1 y %d: ", N);
	for (i = 1; i<=N; i++){
		printf("%d, ", i);
	}
}
