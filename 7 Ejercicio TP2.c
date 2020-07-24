// 7.	Hacer el algoritmo que nos permita introducir un numero por teclado y nos informe si es par o impar.
#include<stdio.h>
main(){
	int N;
	
	printf("Ingrese un numero: ");
	scanf("%d", &N);
	
	if(N % 2 == 0){
		printf("\nEl numero es par.");
	}	else
		printf("\nEl numero es impar.");
}
