/* 37.	Del registro de partes meteorol�gico por cada d�a se registra la fecha, temperatura m�xima y temperatura m�nima. 
Dise�ar en Pseudocodigo un algoritmo que permita informar:
-	El d�a m�s frio y cual fue esa temperatura.
-	El d�a m�s c�lido y cual fue esa temperatura. */
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

