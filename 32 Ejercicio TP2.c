/* 32.	Se registran de los empleados de una empresa Numero de legajo, sueldo y sexo (1 femenino y 2 masculino). 
Diseñar un Pseudocódigo y codificar en C un algoritmo que permita informar cuantas mujeres ganan más de $16000 y cuantos hombres ganan menos de $10000. */
#include<stdio.h>
main(){
	int E, NL, SX, i, M=0, H=0;
	float S;
	
	printf("Ingrese la cantidad de empleados: ");
	scanf("%d", &E);
	
	for(i = 1; i <= E; i++){
	printf("Ingrese el numero de legajo:	");
	scanf("%d", &NL);
	printf("Ingrese el sueldo:	");
	scanf("%g", &S);
	printf("Ingrese el sexo de la persona: 1 para femenino - 2 para masculino:	");
	scanf("%d", &SX);
	
	if (S>16000 && SX == 1){
		M++;
	}else if (S<10000 && SX == 2){
		H++;
	}
	}
	printf("%d mujeres ganan mas de 16000 pesos.\n", M);
	printf("%d hombres ganan menos de 10000 pesos.\n", H);
	
}
