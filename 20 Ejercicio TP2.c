// 20.	Hacer el algoritmo que nos permita contar los múltiplos de 3 desde la unidad hasta un número que introducimos por teclado.
#include<stdio.h>
main(){
	int i, N;
	printf("Ingrese un numero: ");
	scanf("%d", &N);
	printf("Multiplos de 3 desde 1 a %d: ", N);
	for( i = 1; i <= N; i++){
		if(i%3==0)
		printf("%d, ", i);
	}
}
