/* 2.	Escribir el algoritmo necesario para calcular y mostrar el cuadrado de un número. 
El numero debe ser mayor que cero, en caso de error que aparezca el mensaje 
"ERROR, el numero debe ser mayor que cero." */
#include<stdio.h>
#include<math.h>
main(){
	int N, C;
	
	printf("Ingrese un numero: ");
	scanf("%d", &N);
	C = pow(N,2);
	if (N>=0){
		printf("\nEl cuadrado de %d es %d", N, C);
	}else
		printf("\nERROR, el numero debe ser mayor que cero.");
}
