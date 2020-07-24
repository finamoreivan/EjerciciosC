/* 36.	Diseñar un algoritmo que permita calcular el promedio de un alumno sabiendo que se ingresa por alumno la nota de 6 materias y su nombre. 
No se sabe la cantidad de alumnos. Se pide mostrar: 
NOMBRE DEL ALUMNO:            PROMEDIO: */
#include<stdio.h>
main(){
	float nota[5], prom=0;
	char nom [30];
	int C, i, j;
	
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d", &C);
	
	for (i = 1; i <= C; i++){
			printf("Ingrese el nombre: ");
			scanf("%s", &nom);
			printf("Ingrese la nota de la materia: ");
			scanf("%g", &nota[0]);
			if (nota[0]>10){
				printf("Error en una o mas notas ingresadas.\n"); break;
			}
			printf("Ingrese la nota de la materia: ");
			scanf("%g", &nota[1]);
			if (nota[1]>10){
				printf("Error en una o mas notas ingresadas.\n"); break;
			}
			printf("Ingrese la nota de la materia: ");
			scanf("%g", &nota[2]);
			if (nota[2]>10){
				printf("Error en una o mas notas ingresadas.\n"); break;
			}
			printf("Ingrese la nota de la materia: ");
			scanf("%g", &nota[3]);
			if (nota[3]>10){
				printf("Error en una o mas notas ingresadas.\n"); break;
			}
			printf("Ingrese la nota de la materia: ");
			scanf("%g", &nota[4]);
			if (nota[4]>10){
				printf("Error en una o mas notas ingresadas.\n"); break;
			}
			printf("Ingrese la nota de la materia: ");
			scanf("%g", &nota[5]);
			if (nota[5]>10){
				printf("Error en una o mas notas ingresadas.\n"); break;
			}
			}
	prom = (nota[0]+nota[1]+nota[2]+nota[3]+nota[4]+nota[5])/6;
	if(prom > 10){
		printf("Error en el ingreso de una o más notas.");
	}
	printf("\nNOMBRE DEL ALUMNO: %s           PROMEDIO: %g \n\n", nom, prom);
}

