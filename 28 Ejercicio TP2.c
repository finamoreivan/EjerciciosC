// 28.	Dados 3 números donde le primero y el ultimo son límites de un intervalo, indicar si el tercero pertenece a dicho intervalo. 
#include<stdio.h>
main(){
	int prim, ult, med, i;
	printf("Ingrese un numero que de inicie al intervalo: ");
	scanf("%i", &prim);
	printf("Ingrese un numero que de final al intervalo: ");
	scanf("%i", &ult);
	printf("Ingrese un numero para ver si esta dentro de dicho intervalo: ");
	scanf("%i", &med);
	
	if (med>prim && med<ult){
			printf("El numero %i ingresado esta entre %i y %i", med, prim, ult);
			}
	else{
			printf("El numero %i no esta entre %i y %i", med, prim, ult);
		}
}
