// 1.	Ingresar 5 números y calcular su media.
#include<stdio.h>
main()
{
	float N, P;
	int i;

	for (i=1; i<=5; i++){
		printf("Ingrese un numero: ", i);
        scanf("%f", &N);
        P += N;
    }
    	printf("\nEl promedio de los cinco numeros es: %.2f", P/5);
}

