#include <stdio.h>

int main(){

	float celsius, farenheith;
	int seleccion;
	
	printf("Que operacion desea realizar?\n\n1) Grados Celsius a Grados Farenheith\n\n2) Grados Farenheith a Grados Celsius\n\n\n\t> ");
	scanf("%i",&seleccion);
	
		switch(seleccion){
			case(1):
				system("cls");
				printf("Ingrese los grados celsius a convertir: ");
				scanf("%f", &celsius);
				farenheith = (celsius*1.8)+32;
				printf("\n\n\n%.2f °C equivalen a %.2f °F",celsius,farenheith);
				
			break;
			case(2):
				system("cls");
				printf("Ingrese los grados farenheith a convertir: ");
				scanf("%f", &farenheith);
				celsius = (farenheith-32)*(5/9);
				printf("\n\n\n%.2f °C equivalen a %.2f °F",farenheith,celsius);
				
			break;
			default:
				printf("Valor incorrecto, reinicie el programa e intente de nuevo.");
		}
}
