/* 47.	La fecha de Pascua corresponde al primer domingo despu�s de la primera luna llena que sigue el equinoccio de primavera, y se calcula con las siguientes expresiones:
A = a�o mod 19
B = a�o mod 4
C = a�o mod 7
D = (19*A + 24) mod 30
E = 2*B + 4*C + 6*D +5) mod 7
N = (22 + D + E)
En el que N indica el n�mero del d�a de marzo (o abril si N > 31) correspondiente al domingo de Pascua.
Realizar un programa que calcule esa fecha para los a�os 2018 y 2019.  */
#include<stdio.h>
int main(){
	int A, B, C, D, E, N, Y;
	
	printf ("Ingrese el a%co 2018 o 2019: ", 164);
	scanf("%d", &Y);
	
	
	if (Y == 2018 || Y == 2019){

	A = Y % 19;
	B = Y % 4;
	C = Y % 7;
	D = (19*A + 24) % 30;	
	E = (2*B + 4*C + 6*D + 5) % 7;
	N = (22 + D + E);
	
	printf("\nLa fecha del domingo de Pascua del %d es el: ",Y);
		 if (N<31)
			  printf("%d de marzo ", N);
		 else
			  printf("%d de abril ", N-31);
	} else
			printf("Error en el a%co ingresado.", 164);
		for(;;){
			break;
		}
		
	return 0;
}
