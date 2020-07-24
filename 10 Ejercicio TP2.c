/*10.	Escribir en Pseudocodigo y codificar en C un programa que lea 20 caracteres.
 Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u" */
 #include<stdio.h>
 main()
 {
 	char C;
	int a=0, e=0, i=0, o=0, u=0, contador;
 	
 	for(contador = 1; contador<=20; contador++){
 		printf("Ingrese el caracter numero %d: ", contador);
 		fflush(stdin);
 		scanf("%c", &C);
 		if (C == 'a'){
 			a++;
		 }
		else if(C == 'e'){
			e++;
		}
		else if(C == 'i'){
			i++;
		}
		else if(C == 'o'){
			o++;
		}
		else if(C == 'u'){
			u++;
		}
	 }
	 printf("\nIngreso %d letras a\n", a);
	 printf("\nIngreso %d letras e\n", e);
	 printf("\nIngreso %d letras i\n", i);
	 printf("\nIngreso %d letras o\n", o);
	 printf("\nIngreso %d letras u\n", u);
 }

