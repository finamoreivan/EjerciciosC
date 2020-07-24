/* 26.	En una tienda de artículos para caballeros al final del día se cargan en la computadora las boletas que confeccionaron los distintos 
vendedores para saber cuánto fue la comisión del día de cada uno de ellos. Los datos que se ingresan (por boleta) son: el número de vendedor y el importe.
Cuando no hay más boletas para cargar se ingresa 0. Teniendo en cuanta que el ejercicio tiene 3 vendedores y 
que el porcentaje sobre las ventas es del 5%, indicar cuanto gano cada vendedor en el día. */
#include<stdio.h>
main(){
	float ven1, ven2, ven3, imp1, imp2, imp3, total1, total2, total3;
	int bol, dato, i;
	printf("Ingrese la cantidad de boletas: ");
	scanf("%i", &bol);
	
	for (i = 1; i <= bol; i++){
		printf("\nIngrese los datos de la boleta: \nPara vendedor 1 = 1\nPara vendedor 2 = 2\nPara vendedor 3 = 3\nNumero de vendedor: ");
		scanf("%i", &dato);
		if (dato == 1){
			fflush(stdin);
			printf("\nIngrese el importe: ");
			scanf("%g", &imp1);
			total1+=imp1;
		}else if ( dato == 2){
			fflush(stdin);
			printf("\nIngrese el importe: ");
			scanf("%g", &imp2);
			total2+=imp2;
		}else if ( dato == 3){
			fflush(stdin);
			printf("\nIngrese el importe: ");
			scanf("%g", &imp3);
			total3+=imp3;
		}else printf("Error en el dato ingresado\n");
	}
	ven1 = total1*0.05;
	ven2 = total2*0.05;
	ven3 = total3*0.05;
	printf("\nEl vendedor 1 gano: %g", ven1);
	printf("\nEl vendedor 2 gano: %g", ven2);
	printf("\nEl vendedor 3 gano: %g", ven3);
}
