/* 41.	Ídem al anterior agregando en el informe final nombre del empleado de mayor salario con el 
monto del salario correspondiente y nombre del empleado de menor salario con el monto del salario correspondiente. */
#include<stdio.h>
main(){
	int i, j, k, cant, hora, dias; 
	long nombre[50], nombremax[50], nombremin[50];
	float tarifa, semana, menor = 99999, mayor = 0;
	
	printf("Ingrese la cantidad de trabajadores: ");
	scanf("%i", &cant);
	
	for (i = 1; i <= cant; i++){
		printf("Ingrese el nombre del trabajador: ");
		scanf("%s", &nombre);
		printf("Ingrese la cantidad de dias que trabajo en la semana: ");
		scanf("%i", &dias);
		if (dias > 7){
			printf("Error en los dias ingresadas");
			break;
		}
		printf("Ingrese la tarifa horaria del trabajador: ");
		scanf("%g", &tarifa);
		printf("Ingrese la cantidad de horas trabajadas en el dia: ");
		scanf("%i", &hora);
		
		if (hora > 24){
			printf("Error en las horas ingresadas");
			break;
		}
		
		semana = (tarifa*hora)*dias;
		printf("\n\nEl salario semanal de %s es: %g \n\n", nombre, semana);
		
 		if (semana > mayor){

  		for(j=0; j<cant;j++){
		nombremax [j]= nombre[j];
		mayor = semana;
		}
 		}
 		
 		if(semana<menor){
		for (k = 0; k <= cant; k++){
		nombremin [k] = nombre [k];
		menor = semana;
		}
		}
		
	}
		printf("El empleado con menor salario es %s con %g\n", nombremin, menor);
		printf("El empleado con mayor salario es %s con %g\n", nombremax, mayor);
}
