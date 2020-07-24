// 34.	Hacer un algoritmo que imprima el mayor y el menor de una serie de 5 números que vamos introduciendo por teclado.
#include<stdio.h>
main(){
	float N, mayor=0, menor=99999999;
	int i;
	
	for (i = 1; i <= 5; i++){
	printf("Ingrese un numero: ");
	scanf("%g", &N);
	if(N>menor)
	mayor=N;
	if(N<menor)
	menor=N;
	}
	printf("El numero mayor es: %g\n", mayor);
	printf("El numero menor es: %g\n", menor);
}
