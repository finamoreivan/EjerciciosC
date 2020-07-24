/* 24.	Escribir un programa que visualice una tabla de los N primeros números, siendo N un número que ingresa el usuario. 
Utilizar el siguiente diseño de salida suponiendo que el usuario ingreso un 3:
	NUMERO    			CUADRADO 			 CUBO
      1                     1                1
      2                     4                8
      3                     9               27           */
#include<stdio.h>
#include<math.h>
main(){
	int N, i, cuad, cubo;
	
	printf("Ingrese un numero: ");
	scanf("%d", &N);
	printf("NUMERO		CUADRADO		CUBO\n");
	for(i = 1; i<=N; i++){
		cuad = pow(i,2);
		cubo = pow(i,3);
	printf("  %d  		  %d  			 %d\n", i, cuad, cubo);
	}
}

