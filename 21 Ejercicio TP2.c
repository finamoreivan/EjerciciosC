// 21.	Escribir en Pseudocodigo y codificar en C un programa que muestre los números primos comprendidos entre 0 y 100.
#include<stdio.h>
main(){
	int i, j, k;
	printf("Los numeros primos entre 0 y 100 son: ");
	for(i = 2; i <= 100; i++){
		k=0;
		for (j=1; j<=i; j++){
			if (i%j==0){
				k++;
			}	
		}
	if (k == 2)
	printf("%i, ", i);
	}
}
