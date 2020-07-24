/* 27.	Ingresar por teclado 3 números correspondientes a los lados de un triángulo. 
Teniendo en cuenta que la suma de los dos lados menores tiene que ser superior al lado mayor para que formen un triángulo, 
indicar si los números indicados forman un triángulo y si lo forman que tipo de triangulo es (según sus lados). */
#include<stdio.h>
main(){
	float menor1, menor2, mayor;
	printf("Ingrese el tama%co del primer lado menor: ", 164);
	scanf("%g", &menor1);
	printf("Ingrese el tama%co del segundo lado menor: ", 164);
	scanf("%g", &menor2);
	printf("Ingrese el tama%co del lado mayor: ", 164);
	scanf("%g", &mayor);
	
	if (mayor > menor1 + menor2){
		printf("\nError en los datos ingresados.");
	}else if (menor1 <= 0 || menor2 <= 0 || mayor <= 0 ){
		printf("Error en los numeros ingresados.");
	}else if (mayor == menor1 && mayor == menor2){
		printf("\nLos datos ingresados corresponden a un triangulo equilatero.");
	}else if (menor1 == menor2 && mayor > menor1 || mayor > menor2){
		printf("\nLos datos ingresados corresponden a un triangulo isosceles.");
	}else if (menor1 != menor2 && menor1 != mayor && menor2 != mayor){
		printf("\nLos datos ingresados corresponden a un triangulo escaleno");
	}
}
