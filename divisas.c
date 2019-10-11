#include <stdio.h>

int main(){

	float conversion, convertido, gbp=0.042, usd=0.051;
	int seleccion;
	
	printf("Que operacion desea realizar?\n\n1) MXN a USD\n\n2) MXN a GBP\n\n3) USD a MXN\n\n4) GBP a MXN\n\n\n\t> ");
	scanf("%i",&seleccion);
	
		switch(seleccion){
			case(1):
				system("cls");
				printf("Ingrese los Pesos Mexicanos: ");
				scanf("%f",&conversion);
				convertido = conversion*usd;
				printf("%.2f MXN = %.2f USD (1 USD = 19.60 MXN)",conversion,convertido);
				
			break;
			case(2):
				system("cls");
				printf("Ingrese los Pesos Mexicanos: ");
				scanf("%f",&conversion);
				convertido = conversion*gbp;
				printf("%.2f MXN = %.2f GBP (1 GBP = 23.92 MXN)",conversion,convertido);
				
			break;
			case(3):
				system("cls");
				printf("Ingrese los Dolares Americanos: ");
				scanf("%f",&conversion);
				convertido = conversion*19.60;
				printf("%.2f USD = %.2f MXN (1 MXN = 0.051 USD)",conversion,convertido);
				
			break;
			case(4):
				system("cls");
				printf("Ingrese las Libras Esterlinas: ");
				scanf("%f",&conversion);
				convertido = conversion*23.92;
				printf("%.2f GBP = %.2f MXN (1 MXN = 0.042 GBP)",conversion,convertido);
				
			break;
			default:
				printf("Valor incorrecto, reinicie el programa e intente de nuevo.");
		}
		
		return 0;
}
