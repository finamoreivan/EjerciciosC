// 13.	Hacer el algoritmo que imprima los n�meros pares entre el 1 y el 100.
#include<stdio.h>
main(){
	int i;
	printf("Numeros pares entre 1 y el 100: ");
	for(i = 2; i <=100; i+=2){
		printf("%d, ", i);
	}
}
