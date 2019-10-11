#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;


void Menu();
void Crear();
void Mostrar();
	
int main (){
	Menu();
}


struct Info{
	
string nombre;

}valores;

void Menu(){
	int opcion;
	do{
		cout<<"\tMenu"<<endl;
		cout<<"1. Realizar Nomina"<<endl;
		cout<<"2. Mirar Nomina"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"\n\t\t > ";
		cin>>opcion;
		
		switch(opcion){
			case 1: Crear();
					cout<<"\n";
					system("pause");
					break;
			case 2: Mostrar();
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opcion!=3);
}

void Crear(){
	
	ofstream doc;
	
	float sueldoDiario = 0,sueldoNeto = 0,impuesto = 0,sueldoBruto = 0;
	int horas =0, repetir = 1;
	
	doc.open("Nomina.txt",ios::out);
	
	if(doc.fail()){
		cout<<"No se encontro el archivo.";
		exit(1);
	}
	doc<<"===================Nomina==================="<<endl;
	
	
	do{
		
		fflush(stdin);
		cout<<"Ingrese nombre\t: ";
		getline(cin,valores.nombre);
		cout<<"Horas Trabajadas: ";
		cin>>horas;
		cout<<"Tarifa (por hora): ";
		cin>>sueldoDiario;
		
		sueldoBruto = horas * sueldoDiario;
		
		if (sueldoBruto<=1000){
			
			cout<<"Suedo Bruto: $"<<sueldoBruto<<" MXN, no hay impuesto adicional."<<endl;
			
		}else{
			
			if(sueldoBruto>=1001 && sueldoBruto<=2000){
				cout<<"Suedo Bruto: $"<<sueldoBruto<<" MXN, se ha generado un impuesto del 15%."<<endl;
				impuesto = sueldoBruto*.15;
				sueldoNeto = sueldoBruto - impuesto;
				cout<<"Sueldo Neto: $"<<sueldoNeto<<endl;
			}else{
				
				if(sueldoBruto>=2001){
					cout<<"Sueldo Bruto: $"<<sueldoBruto<<" MXN, se ha generado un impuesto del 25%."<<endl;
					impuesto=sueldoBruto*.25;
					sueldoNeto = sueldoBruto - impuesto;
					cout<<"Sueldo Neto: $"<<sueldoNeto<<endl;
					
				}
			}
		}
		
		// Generacion de nomina
		doc<<"Nombre: "<<valores.nombre<<endl;
		doc<<"Horas: "<<horas<<endl;
		doc<<"Tarifa: "<<sueldoDiario<<endl<<endl;
		doc<<"Sueldo: $"<<sueldoBruto<<endl;
		doc<<"Impuesto: $"<<impuesto<<endl;
		doc<<"Sueldo Neto: $"<<sueldoNeto<<endl;
		doc<<"_______________________________"<<endl;
		
		cout<<"Quiere generar otra nomina?(Si = 1 / No = 2)"<<endl;
		cin>>repetir;
	
	}while(repetir==1);
	
		doc.close();
		
	}

void Mostrar(){
	
	ifstream doc;
	string texto;
	
	doc.open("Nomina.txt",ios::in); 
	
	if(doc.fail()){
		cout<<"Archivo no encontrado";
		exit(1);
	}
	
	while(!doc.eof()){ 
		getline(doc,texto);
		cout<<texto<<endl;
	}
	
	doc.close();
}
