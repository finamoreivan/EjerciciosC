/* 43.	En un club se registran de uno en uno los siguientes datos de sus socios:
Numero de socio
Apellido y Nombre
Edad
Tipo de deporte que practica (1. Tenis, 2. Rugby, 3. Vóley, 4. Hockey, 5. Fútbol, 6. Paddle)
Diseñar un algoritmo que permita emitir por pantalla cuantos socios practican tenis y cuantos paddle y el promedio de edad de los jugadores de cada deporte. */
#include<stdio.h>
main(){
	int cant, socio, edad, i, deporte, tenis=0, paddle=0;
	char nombre [50], apellido [50];
	float promedadT= 0, promedadP= 0;
	
	printf("Ingrese la cantidad de socios: ");
	scanf("%i", &cant);
	for(i=0;i<cant;i++){
		printf("Ingrese el numero de socio: ");
		scanf("%i", &socio);
		printf("Ingrese el nombre del socio: ");
		scanf("%s", &nombre);
		printf("Ingrese el apellido del socio: ");
		scanf("%s", &apellido);
		printf("Ingrese la edad del socio: ");
		scanf("%i", &edad);
		printf("Que deporte practica el socio?\n 1. Tenis.\n 2. Rugby.\n 3. Voley.\n 4. Hockey.\n 5. Futbol.\n 6. Paddle\n Seleccion: ");
		scanf("%i", &deporte);
		if (deporte == 1){
			tenis++;
			promedadT = promedadT+edad;
		} else if(deporte == 6){
			paddle++;
			promedadP = promedadP+edad;
		}
	}
	printf("%i socios practican tenis.\n", tenis);
	printf("%i socios practican paddle.\n", paddle);
	
	printf("El promedio de edad de los jugadores de tenis es: %g\n", promedadT/tenis);
	printf("El promedio de edad de los jugadores de paddle es: %g\n", promedadP/paddle);
}

