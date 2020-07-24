// 5.	Diseñar un algoritmo que calcule la superficie de un triángulo a partir
// del ingreso de su base y altura y muestre el resultado. 
#include<stdio.h>
main(){
	float S, B, A;
	
	printf("Ingresar cuanto mide la base del triangulo: ");
	scanf("%f", &B);
	printf("Ingresar cuanto mide la altura del triangulo: ");
	scanf("%f", &A);
	
	S = (B*A)/2;
	
	printf("\nLa superficie del triangulo es: %.1f", S);
}
