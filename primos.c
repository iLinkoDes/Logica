#include <stdio.h>

int main(){
	
	int numero, i=1, validador=0, resultado;
	
	printf("Ingrese un numero: ");
	scanf("%i",&numero);
	
	while(i<=numero){
		
		resultado = numero%i;
		
		if(resultado==0){
			validador++;
		}
		
		if(resultado==0 && validador==3){
			printf("%i no es numero primo",numero);
			break;
		}else if(resultado==0 && validador == 2 && numero == i){
			printf("%i es primo",numero);
		}	
		
		i++;
	}
	
	return 0;
}
