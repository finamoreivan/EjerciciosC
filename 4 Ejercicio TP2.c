// 4.	Diseñar un algoritmo que calcule la longitud de la circunferencia y el área del circulo de radio dado.
#include<stdio.h>
#include<math.h>
#define PI 3.14
main(){
	float C, A, R;
	
	printf("Ingrese el radio del circulo: ");
	scanf("%f", &R);
	
	C = 2 * PI * R;
	A = (PI*pow(R,2));
	
	printf("\nLa longitud de la circunferencia es: %.2f", C);
	printf("\nEl area del circulo es: %.2f", A);
}
