// 17.	Escribir en Pseudocodigo y codificar en C un programa que muestre los múltiplos de 2 y de 3 y de ambos comprendidos entre 0 y 100.
#include<stdio.h>
main(){
	int i, j, k;
	
	printf("Multiplos de 2:\n");
	for( i = 0; i <= 100; i++){
		if(i%2==0)
		printf("%d\n", i);
	}
	printf("\nMultiplos de 3:\n");
	for ( j = 0; j <= 100; j++){
		if (j%3==0)
		printf("%d\n", j);
	}
	printf("\nMultiplos de 2 y 3:\n");
	for ( k = 0; k<=100; k++){
		if(k%2==0 && k%3==0){
			printf("%d\n", k);
		}
	}
}
