//22.	Diseñar en Pseudocodigo y codificar en C un algoritmo que permita ingresar 10 números, ninguno de ellos igual a cero.
// Se pide sumar los positivos, obtener el producto de los negativos y luego mostrar ambos resultados.
#include<stdio.h>
main(){
	int N, i, suma=0, producto=1;
	
	for ( i = 1; i<=10; i++){
		printf("Ingrese un numero: ", i);
		fflush(stdin);
		scanf("%d", &N);
		if (N==0){
			printf("Error en el numero ingresado\n\n"); break;
		}	
	if (N>0){
			suma+=N;
		}
		else if(N<0){
			producto= producto*N;
		}
	}
	if (producto == 1){
		producto = 0;
	}
	printf("Suma de los positivos: %d\n", suma);
	printf("Producto de los negativos: %d\n", producto);
}
