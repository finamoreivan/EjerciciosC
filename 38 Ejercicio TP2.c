/* 38.	De las 20 participantes de un concurso de belleza se van registrando de uno en uno los siguientes datos:
-Apellido y Nombre
-Puntos por inteligencia
-Puntos por cultura general
-Puntos por belleza
Se necesita informar por pantalla:
"	Apellido y nombre de la concursante de mayor puntaje general.
"	Puntaje acumulado por todas las participantes en Cultura general, en Inteligencia y en belleza.
"	De los tres puntajes acumulados en el ítem anterior cual fue el menor. */
#include<stdio.h>
main(){
	int i, j;
	float pint, pcult, pbell, pgen=0, pgenmax=0, pacumcul=0, pacumint=0, pacumbel=0, pacummenor=0;
	long nombre[50], apellido[50], Nmax [50], Amax [50];
	
	for (i = 1; i <= 20; i++){
		printf("Ingrese apellido de la participante: ");
		scanf("%s", &apellido);
		printf("Ingrese el nombre de la participante: ");
		scanf("%s", &nombre);
		printf("Ingrese el puntaje de 1 a 10 en Cultura general: ");
		scanf("%g", &pcult);
		printf("Ingrese el puntaje de 1 a 10 en Inteligencia: ");
		scanf("%g", &pint);
		printf("Ingrese el puntaje de 1 a 10 en Belleza: ");
		scanf("%g", &pbell);
		
		pgen = pgen + pint + pcult + pbell;		
		printf("Puntaje general de la concursante: %g\n\n", pgen);
		if (pgen > pgenmax){
			for (j = 0; j <= 20; j++){
				Nmax [j] = nombre [j];
				Amax [j] = apellido [j];
				pgenmax = pgen; 
			}
		}
		pgen = 0;
		
		pacumcul = pacumcul + pcult;
		pacumint = pacumint + pint;
		pacumbel = pacumbel + pbell;
		
	}
	
	printf("La participante con mayor puntaje general es: %s %s, con %g\n\n\n", Nmax, Amax, pgenmax);
	
	printf("El puntaje acumulado en Cultura es: %g\n\n\n", pacumcul);
	printf("El puntaje acumulado en Inteligencia es: %g\n\n\n", pacumint);
	printf("El puntaje acumulado en Belleza es: %g\n\n\n", pacumbel);
	
	if (pacumcul < pacumint && pacumcul < pacumbel){
		printf("El puntaje acumulado en Cultura fue el menor. \n");
	}else if (pacumint < pacumcul && pacumint < pacumbel){
		printf("El puntaje acumulado en Inteligencia fue el menor. \n");
	}else if (pacumbel < pacumcul && pacumbel < pacumint){
		printf("El puntaje acumulado en Belleza fue el menor. \n");
	}else if (pacumbel < pacumcul && pacumbel <= pacumint){
		printf("El puntaje acumulado en Belleza e Inteligencia fueron los menores. \n");
	} else if (pacumbel <= pacumcul && pacumbel < pacumint){
		printf("El puntaje acumulado en Belleza y Cultura fueron los menores. \n");
	}else if (pacumcul <= pacumint && pacumcul < pacumbel){
		printf("El puntaje acumulado en Cultura e Inteligencia fueron los menores. \n");
	}else if (pacumcul == pacumint && pacumcul == pacumbel){
		printf("El puntaje acumulado es igual en las tres categorias. \n");
	}
}

