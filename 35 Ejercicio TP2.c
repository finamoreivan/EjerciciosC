/* 35.	De los alumnos de la escuela se registra su apellido y su nombre y su altura.
 Diseñar en Pseudocodigo un algoritmo que indique el nombre del alumno más alto y su altura (solo uno es el más alto).*/
 #include<stdio.h>
 main(){
 	int C, i, j;
 	char N[30], N2 [30], Ap[30], Ap2[30];
 	float Al, mayor = 0;
 	
 	printf("Ingrese la cantidad de alumnos: ");
 	scanf("%i", &C);
 	
 	for(i = 0; i < C; i++){
 	printf("Ingrese el nombre: ");
 	scanf("%s", &N);
 	printf("Ingrese el apellido: ");
 	scanf("%s", &Ap);
 	printf("Ingrese la altura en centimetros: ");
 	scanf("%g", &Al);
 	
 	if (Al > mayor){
 	
  	for(j=0; j<20;j++){
	N2 [j]= N[j];
	Ap2 [j] = Ap[j];
	mayor = Al;
	}
 	}
	}
	
	printf("La mayor altura de la escuela la tiene: %s %s con %g", N2, Ap2, mayor);

}
