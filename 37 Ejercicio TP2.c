/* 37.	Del registro de partes meteorológico por cada día se registra la fecha, temperatura máxima y temperatura mínima. 
Diseñar en Pseudocodigo un algoritmo que permita informar:
-	El día más frio y cual fue esa temperatura.
-	El día más cálido y cual fue esa temperatura. */
#include<stdio.h>
main(){
	int i, j ,k;
	float temp, max=0, min=9999999;
	int fecha, fechamax, fechamin, cfechas;
	long mes[50], mesmax [50], mesmin [50];
	
	printf("Ingrese la cantidad de fechas a comparar: ");
	scanf("%d", &cfechas);
	
	for(i = 1; i <= cfechas; i++){
		printf("Ingrese la fecha: ");
		scanf("%i", &fecha);
		printf("Ingrese el mes: ");
		scanf("%s", mes);
		printf("Ingrese la temperatura del dia: ");
		scanf("%g", &temp);
		
		if(temp>max){
		for (j = 0; j <= cfechas; j++){
			mesmax [j] = mes [j];
			fechamax = fecha;
			max=temp;
			}
		}
		if(temp<min){
		for (k = 0; k <= cfechas; k++){
			mesmin [k] = mes [k];
			fechamin = fecha;
			min=temp;
			}
		}
	}
	printf("\n\nEl dia mas frio fue el %i de %s con %g grados\n\n", fechamin, mesmin, min);
	printf("\n\nEl dia mas calido fue el %i de %s con %g grados\n\n", fechamax, mesmax, max);
}

