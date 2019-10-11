#include <stdio.h>
	
int main(){
	
	int a, b, i=1, validador=0, resultado, sumatoria=0, copy,re=0;
	
	printf("Ingrese un numero: ");
	scanf("%i",&a);
	printf("Ingrese un numero: ");
	scanf("%i",&b);
	 
	copy = a;
	
	while(i<=a){
		
		resultado = a%i;
		
		if(resultado==0){
			validador++;
		}
		
		printf("(%i,%i,%i,%i)",i,resultado, validador,a);
		
		if(resultado==0 && validador==3){
			printf("%i no es numero primo",a);
			validador=0;
			i=1;
			a++;
			system("pause");
			
		}else if((resultado==0 && validador == 2 && a == i) || a==1 || a==2){
			printf("%i es primo",a);
			validador=0;
			sumatoria = sumatoria+a;
			i++;
			system("pause");
		}else{
			i++;
		}
	
		if((i>a && a<=b)||a==2){
			a++;
			i=1;
			printf("xd");
		}
		if(a==b){
			i++;
			i++;
			i++;
		}
		
	}
	
	printf("La sumatoria desde %i hasta %i es: %i",copy,b,sumatoria);
	return 0;
}
