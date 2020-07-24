// 3.	De 10 números ingresados indicar cuantos son mayores a cero y cuantos son menores a cero. 
#include<stdio.h>
main()
{
	float N;
	int i, mayor=0, menor=0;
	
	for (i = 1; i <= 10; i++){
		printf("Ingrese un numero: ", i);
		fflush(stdin);
		scanf("%d", &N);	
	if(N>0){
		mayor++;
	}
	else{
		menor++;
	}
	}
	printf("\nMayores que 0: %d", mayor);
	printf("\nMenores que 0: %d", menor);
}
