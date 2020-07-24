// 30.	Realizar la tabla de multiplicar de un numero entre 0 y 10 de forma que se visualice de la siguiente forma:
// 4 X 1  = 4
// 4 X 2 = 8
#include<stdio.h>
main(){
	int num, i;
	
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	printf("La tabra de multiplicar de %d es: \n", num);
	for (i = 1; i <= 10; i++){
		printf("%d X %d = %d\n", num, i, num*i);
	}
}
