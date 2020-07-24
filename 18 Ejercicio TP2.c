// 18.	Ingresar un número, entero y efectuar la suma de todos los números que le anteceden, comenzando desde 0 y mostrar el resultado por pantalla.
#include<stdio.h>
main(){
	int i, N, suma = 0;
	printf("Ingrese un numero: ");
	scanf("%d", &N);
	for(i = 0; i<N; i++){
		suma+= i;
	}
	printf("La suma de los numeros que le anteceden a %d es: %d", N, suma);
}
