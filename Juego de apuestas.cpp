#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
 using namespace std;
int main()
{

    int carta1,carta2,maxValor=13,opcion,opcionValida,dinero,dineroCasa,ganado,victorias;
    char respuesta='s';
    srand(time(NULL));

    while(respuesta=='s'&&dinero)
    {
        dinero=1500,dineroCasa=25000,ganado=200,victorias=0,respuesta='s';
        cout<<"Debera adivinar si la siguiente cartas es mayor o menor.\nLos cartas van desde el 1 al 13.\nUsted empieza con $"<<dinero;

        while(respuesta=='s'&&dinero>0)
        {
            do
            {
                carta1=rand()%maxValor+1;
                carta2=rand()%maxValor+1;
            }
            while((carta1<1)&&(carta2<1)&&(carta1==carta2));

            if(carta1>carta2)
            {
                opcionValida=2;
            }

            else if(carta1<carta2)
            {
                opcionValida=1;
            }

            do
            {
                cout<<"\nLa primer carta es: "<<carta1;
                cout<<"\nLa siguiente carta sera: 1.- Mayor o 2.- Menor: ";
                cin>>opcion;
                system("cls");
            }
            while(opcion!=1&&opcion!=2);


            if (opcion==opcionValida)
            {
                victorias++;
                dinero=dinero-100;
                dineroCasa=dineroCasa-100;
                ganado=200*victorias;
                cout<<"Acerto, la carta es: "<<carta2<<endl;
                cout<<"Usted tiene "<<ganado<<" en la mesa\n"<<endl;
                cout<<"Usted cuenta con "<<dinero<<endl;
                cout<<"A la casa le queda "<<dineroCasa<<endl;
                do
                {
                cout<<"Quiere continuar? (S/N): ";
                fflush(stdin);
                cin>>respuesta;
                system("cls");
                }
                while(respuesta!='s'&&respuesta!='n');

                if(respuesta=='n')
                {
                    dinero=dinero+ganado;
                    cout<<"Dinero: " <<dinero<<endl;
                    cout<<"Dinero de la Casa:"<<dineroCasa<<endl;
                    ganado=200;
                    victorias=0;
                    do
                    {
                        cout<<"Quiere volver a jugar? (S/N): ";
                        fflush(stdin);
                        cin>>respuesta;
                        system("cls");
                    }
                    while(respuesta!='s'&&respuesta!='n');
                }
            }

            else if(opcion!=opcionValida)
            {  dinero=dinero-100;
                dineroCasa=dineroCasa+ganado;
                ganado=200;
                victorias=0;
                cout<<"Perdiste! La segundo carta era: "<<carta2<<endl;
                cout<<"Le queda $"<<dinero<<endl;;
                cout<<"A la casa le queda $"<<dineroCasa<<endl;
                do
                {
                    cout<<"Quiere volver a jugar? (S/N): ";
                    fflush(stdin);
                    cin>>respuesta;
                    system("cls");
                }
                while(respuesta!='s'&&respuesta!='n');
            }
        }


        do
        {
            if(dinero==0)
        {
            cout<<"Fin del Juego.\n";
        }
        else
        {
            cout<<"Te has retirado con $"<<dinero<<endl;
        }
            cout<<"\nQuiere volver a jugar? Se reiniciara el juego. (S/N): "<<endl;
            fflush(stdin);
            cin>>respuesta;
            system("cls");
        }
        while(respuesta!='s'&&respuesta!='n');
        
        //Reinicio total del juego
    }
    

    cout<<"Gracias por jugar\n\n\t ";
}
