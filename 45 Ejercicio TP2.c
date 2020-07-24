/* 45.	Un profesor de matemática de un establecimiento educativo registra década alumno N° de legajo, nombre y promedio. 
Según el promedio desea saber cuántos alumnos aprobaron (promedio mayor o igual a 7), cuantos rinden en diciembre (promedio menor a 7 y mayor o igual a 4) 
y cuantos rinden en marzo (promedio menor a 4). Además, desea conocer el N° de legajo y nombre del alumno con mejor promedio. */
#include<stdio.h>
main(){
	int i, j, legajo, legajomax, alumnos, apro=0, dicie=0, marzo=0;
	long nombre[50], nombremax [50];
	float prom=0, promax = 0;
	
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d", &alumnos);

	for (i = 1; i <= alumnos; i++){
		printf("Ingrese el numero de legajo: ");
		scanf("%d", &legajo);
		printf("Ingrese el apellido del alumno: ");
		scanf("%s", &nombre);
		printf("Ingrese el promedio del alumno: ");
		scanf("%g", &prom);
		if (prom >= 7 && prom <=10){
			apro++;
		}else if (prom < 7 && prom>=4){
			dicie++;
		}else if (prom < 4){
			marzo++;
		}else {
		printf("Error en el dato ingresado.");
		break;
		}
		if (prom > promax){
		for (j=0; j<=alumnos;j++){
			nombremax[j] = nombre[j];
			legajomax = legajo;
			promax = prom;
			}
		}
	}
	printf("\n%d alumnos aprobaron.\n\n", apro);
	printf("\n%d alumnos rinden en diciembre.\n\n", dicie);
	printf("\n%d alumnos rinden en marzo.\n\n", marzo);
	
	printf("El mejor promedio lo tuvo %s, numero de legado %i, con %g. \n\n", nombremax, legajomax, promax);
}
