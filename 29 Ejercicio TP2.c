/* 29.	Por teclado se ingresa el valor hora de un empleado. Posteriormente se ingresa el nombre del empleado, la antigüedad y la cantidad de horas trabajadas en el mes. 
Se pide calcular el importe a cobrar teniendo en cuenta que al total que resulta de multiplicar el valor hora por la cantidad de horas trabajadas,
 hay que sumarle la cantidad de años trabajados multiplicados por $30, y al total de todas esas operaciones restarle el 13% en concepto de descuentos. 
Imprimir el recibo correspondiente con el nombre, la antigüedad, el valor hora, el total a cobrar en bruto, el total de descuentos y el valor neto a cobrar. */
#include<stdio.h>
main(){
	int antiguedad;
	float vhora, choras, imp, anios, total, desc;
	char nombre[50], apellido[50];
	
	printf("Ingrese el valor hora del empleado: ");
	scanf("%g", &vhora);
	
	printf("Ingrese el nombre del empleado: ");
	scanf("%s", &nombre);
	
	printf("Ingrese el apellido del empleado: ");
	scanf("%s", &apellido);
	
	printf("Ingrese la antiguedad del empleado: ");
	scanf("%d", &antiguedad);
	
	printf("Ingrese la cantidad de horas trabajadas en el mes: ");
	scanf("%g", &choras);
	
	imp = vhora*choras;
	anios = antiguedad * 30;
	total = imp + anios;
	desc = total*0.13;
	
	printf("\nNombre completo : %s %s\n", nombre, apellido);
	printf("Antigueldad : %d\n", antiguedad);
	printf("Valor por hora : %g\n", vhora);
	printf("Total a cobrar en bruto : %g\n", total);
	printf("Total de descuentos : %g\n", desc);
	printf("Valor neto a cobrar : %g\n", total - desc);
}
