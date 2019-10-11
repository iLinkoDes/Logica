#include <stdio.h>

int main(){
	
	int a, b, resultado, sumatoria=0;
	
	printf("Dame un numero: ");
	scanf("%i",&a);
	printf("Dame un numero: ");
	scanf("%i",&b);
	
	while(a<=b){
		
		resultado = a%2;
		
		if(resultado == 1){
			sumatoria = sumatoria+a;
		}
		else{
			// Nada
		}
		
		a++;
		
	}
	
	printf("La sumatoria es de: %i",sumatoria);
	
}
