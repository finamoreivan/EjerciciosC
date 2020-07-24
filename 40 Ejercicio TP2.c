/* 40.	Ídem al anterior, pero informando al finalizar (el ingreso de datos y los cálculos correspondientes)
la cantidad de empleados a los que se les calculo el salario. */
#include<stdio.h>
main(){
	int i, cant, hora, dias; 
	char nombre[50];
	float tarifa, semana;
	
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
	}
	
	printf("Se le calculo el salario a %i empleados", cant);
	
}
