#include<iostream>
using namespace std;
void menu();
int main(){
	
	int validate;
	
do{	
	system("cls");
	int codigo;
	cout<<"\tBienvenido a su Banco"<<endl;
	cout<<"\tIngrese su numero de cuenta"<<endl;
	cout<<"->";
	cin>>codigo;
	
	switch(codigo){
		case 1:
			menu();
			validate=1;
		break;
		
		case 2:
			menu();
			validate=1;
		break;
		
		case 3:
			menu();
			validate=1;
		break;
		
		case 4:
			menu();
			validate=1;
		break;
		
		case 5:
			menu();
			validate=1;
		break;
		
		case 6:
			menu();
			validate=1;
		break;
		
		case 7:
			menu();
			validate=1;
		break;
		case 8:
			menu();
			validate=1;
		break;
		case 9:
			menu();
			validate=1;
		break;
		
		case 10:
			menu();
			validate=1;
		break;
		default:
			validate=0;
			cout << "Cuenta no encontrada, pruebe de nuevo"<<endl;
			system("pause");
		break;	
			
	}
}while(validate==0);	

}
void menu(){
	int opc,monto1,monto2,resultado, dinero = 100;
	do{

	system("cls");
	
	cout<<"\t\tBanco"<<endl;
	cout<<"Seleccione una opcion:"<<endl;
	cout<<"1. Deposito"<<endl;
	cout<<"2. Retiro"<<endl;
	cout<<"3. Estado de cuenta"<<endl;
	cout<<"4. Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			
			cout<<"Ingrese la cantidad del deposito > ";
			cin>>monto1;
			dinero = dinero + monto1;
			cout<<"Saldo actual: "<<dinero<<endl;
			system("pause");
			
		break;
		case 2:
			
			cout<<"Ingrese la cantidad de  dinero que desea retirar: ";
			cin>>monto2;
			if(monto2>=dinero){
				cout<<"Saldo Insuficiente";
			}else{
			
			dinero= dinero - monto2;
			cout<<"Retiro realizado, su saldo actual es: "<<dinero<<endl;
				}
				system("pause");
		break;	
		
		case 3:
			
			cout<<"Su saldo actual es: "<<dinero;
			system("pause");
			break;
			
	}
}while(opc<4);
}
