/* 9.	Dados ciertos centímetros como entrada de tipo decimal, escribir su equivalente a pies (enteros) y pulgadas (decimal),
 dando las pulgadas con una precisión de 1 lugar decimal. 
 Considerar 2.54 cm por pulgada y 12 pulgadas por pie.
 La salida podrá ser: 333.3 cm son 10 pies y 11.2 pulgadas. */
 
#include<stdio.h>
main(){
	float cm, pu;
	int pi;
	
	printf("Ingrese el dato de los centimetros: ");
	scanf("%f", &cm);
	
	pi = cm/30.48;
	pu = cm/2.54; 
	
	printf("%.1f cm son %d pies y %.1f pulgadas.", cm, pi, pu);
}
