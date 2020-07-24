/* 33.	Se ingresa por teclado la cantidad de agua caída, en milímetros día a día durante un mes. Se pide determinar el día de mayor lluvia, el de menor y el promedio. */
#include<stdio.h>
main(){
	float C, mayor=0, menor=999999999, prom=0;
	int i;
	
	for (i = 1; i < 31; i++){
		printf("Ingrese la cantidad de agua caida en el dia %d: ", i);
		scanf("%g", &C);
		prom+=C;
		if(C>menor)
		mayor=C;
		if(C<menor)
		menor=C;
	}
	printf("La mayor cantidad de agua caida fue: %g\n", mayor);
	printf("La menor cantidad de agua caida fue: %g\n", menor);
	printf("El total de agua caida en el mes es: %g\n", prom);
	printf("El promedio de agua caida durante el mes es: %g", prom/30);
}
