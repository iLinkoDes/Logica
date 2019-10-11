#include <stdio.h>

int main(){


float  base, altura, area;

printf("Dame la Base de tu triangulo:\n\t> ");
scanf("%f", &base);

printf("Dame la Altura de tu triangulo:\n\t> ");
scanf("%f",&altura);

area = (base*altura)/2;
system("cls");
printf("\n\n\tLa area de tu triangulo es: %f\n\n\n",area);
system("pause");

return 0;
}
