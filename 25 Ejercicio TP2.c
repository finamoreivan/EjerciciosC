/* 25.	Dise�ar en Pseudocodigo y codificar en C un algoritmo que permita registrar de los empleados de una f�brica (no se sabe cu�ntos)
 su peso y saber cu�ntos pesan hasta 80 Kg. Inclusive y cu�ntos pesan m�s de 80 kg.*/
 #include<stdio.h>
 main(){
 	float emp, peso, i, mayor=0, menor=0;
 	
 	printf("Ingrese la cantidad de empleados: ");
 	scanf("%g", &emp);
 	
 	for(i = 1; i <= emp; i++){
 		printf("Ingrese peso del empleado: ");
 		scanf("%g", &peso);
 		if (peso <= 80){
 			menor++;
		 } else{
		 	mayor++;
		 }
	 }
	 printf("\n%g empleados pesan hasta 80 Kg\n", menor);
	 printf("\n%g empleados pesan mas de 80 Kg\n", mayor);
 }
