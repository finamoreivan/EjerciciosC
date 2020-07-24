// 12.	Escribir en Pseudocodigo y codificar en C un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares hay.
#include<stdio.h>
main(){
	int i, impares=0;
	
	for(i=1; i <=100; i+=2){
		printf("%d, ", i);
		if (i % 2 != 0){
			impares++;
		}
	}
	printf("\n\nHay %d numeros impares", impares);
}

