#include<iostream>

using namespace std;

int main(){
	
	int n=0;
	float delta=0,acumulador=0,promedio;
	
	cout<<"Ingrese cuantos numeros se promediaran: ";
	
	cin>>n;
	
	system("cls");
	
	for(int i=1; i<=n; i++){
		
		cout<<"Ingrse el numero ("<<i<<"): ";
		cin>>delta;
		acumulador=acumulador+delta;
		
	};
	
	cout<<"\nLa sumatoria de los numeros ingresados es:"<<acumulador;
	
	promedio=acumulador/n;
	cout<<endl;
	
	cout<<"El promedio final es: "<<promedio;	
}
