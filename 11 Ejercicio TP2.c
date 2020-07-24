/* 11.	Realizar un algoritmo que permita ingresar un número correspondiente 
a los días de una semana y muestre el nombre del día.
 Que se permita trabajar hasta que el usuario indique lo contrario. */
 #include<stdio.h>
 main()
 {
 	int i, D, N;
 	
 	for (i = 1;; i++){
 		printf("Ingrese un numero del 1 al 7 para ver a que dia corresponde.\nPresiona 8 para salir del programa.\nNumero: ");
 		fflush(stdin);
 		scanf("%d", &N);
 		switch (N){
 			case 1: printf("\nCorresponde al dia LUNES\n\n"); break;
 			case 2: printf("\nCorresponde al dia MARTES\n\n"); break;
 			case 3: printf("\nCorresponde al dia MIERCOLES\n\n"); break;
 			case 4: printf("\nCorresponde al dia JUEVES\n\n"); break;
 			case 5: printf("\nCorresponde al dia VIERNES\n\n"); break;
 			case 6: printf("\nCorresponde al dia SABADO\n\n"); break;
 			case 7: printf("\nCorresponde al dia DOMINGO\n\n"); break;
 			case 8: ; break;
 			default: printf("\nERROR EN EL NUMERO INGRESADO\n\n");
		 }
		 if (N==8){
		 	printf("\n\nGracias por utilizar nuestro programa :)\n\n"); break;
		 }
	 }
 }
 
 /*  		if (N==1){
	 	printf("Corresponde al dia LUNES\n");
		}
		else if (N==2){
	 	printf("Corresponde al dia MARTES\n");
	 	}
	 	else if (N==3){
	 	printf("Corresponde al dia MIERCOLES\n");
		}
	 	else if (N==4){
	 	printf("Corresponde al dia JUEVES\n");
	 	}
	 	else if (N==5){
	 	printf("Corresponde al dia VIERNES\n");
	 	}
	 	else if (N==6){
	 	printf("Corresponde al dia SABADO\n");
	 	}
	 	else if (N==7){
	 	printf("Corresponde al dia DOMINGO\n");
	 	}
	 	else
	 	printf("Gracias por utilizar nuestro programa."); break;
	 	}
	 	
	 	*/
