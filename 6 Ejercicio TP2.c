// 6.	Hacer el algoritmo que nos permita introducir un numero por teclado y nos informe si es positivo o negativo.
#include<stdio.h>
main(){
	float N;
	
	printf("Ingrese un numero: ");
	scanf("%f", &N);
	if(N>0){
		printf("\nEl numero es positivo.");
	}else
	printf("\nEl numero es negativo.");
}
