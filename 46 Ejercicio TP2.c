/* 46.	Diseñar un algoritmo que le presente al usuario u menú de opciones con las cuatro operaciones básicas (suma, resta, multiplicación, división). 
Según la operación elegida ingresara 2 números enteros, se realizará la misma y se mostrara por pantalla el resultado. 
El usuario podrá trabajar en el programa hasta que indique lo contrario. Recordar que la división por cero es indeterminada. */
#include<stdio.h>
main(){
	int O, N1, N2;
	
	printf("Elija la operacion a realizar: \n");
	printf("1 - Suma\n");
	printf("2 - Resta\n");
	printf("3 - Multiplicacion\n");
	printf("4 - Division\n");
	printf("5 - Salir\n");
	printf("\nEleccion: ");
	scanf("%d", &O);
	
	for(;;){
	if (O>5 || O<1){
	printf("Error en el numero de eleccion.\n"); break;
	}
	if (O == 5){
		break;
	}
	printf("Ingrese el primero numero entero: ");
	scanf("%d", &N1);
	printf("Ingrese el segundo numero entero: ");
	scanf("%d", &N2);
	
	switch (O){
		case 1 : printf("\n%d + %d = %d\n\n", N1, N2, N1 + N2); break;
		case 2 : printf("\n%d - %d = %d\n\n", N1, N2, N1 - N2); break;
		case 3 : printf("\n%d * %d = %d\n\n", N1, N2, N1 * N2); break;
		case 4 : printf("\n%d / %d = %d\n\n", N1, N2, N1 / N2); break;
		case 5 : printf("\nCalculadora finalizada.\n"); break;
		default : printf("\nError en el numero de eleccion.\n");
		}
	}
}
