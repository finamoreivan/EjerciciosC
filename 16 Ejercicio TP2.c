// 16.	Diseñar un algoritmo que imprima y sume la serie de números 3, 6, 9, 12, ….,99.
#include<stdio.h>
main(){
	int i, suma = 0;
	for(i=3;i<100;i+=3){
		printf("%d\n", i);
		suma = suma + i;
	}
	printf("La suma de los numeros es: %d", suma);
}
