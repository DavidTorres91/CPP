#include <iostream>
#include <cstdlib>
#include <conio.h>
#include<windows.h>

#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define TECLA_ENTER 13

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void menu_principal();
void menu_suma();
void menu_resta();
void menu_multiplicacion();
void menu_division();
void menu_residuo();
int menu(const char *titulo,const char *opciones[],int n);


int main(int argc, char** argv) {
	menu_principal();
	
	return 0;
}

void menu_principal(){
	bool repite= true;
	int opcion;
	//Titulo y opciones del Menu
	const char *titulo="MENU PRINCIPAL";
	const char *opciones[] ={"Sumar","Restar","Multiplicar","Dividir","Residuo","Salir"};
	int n = 6;
	
	do{
		
		opcion = menu(titulo, opciones, n);
		/*
		system("cls");
		//Titulo
		cout<< "\n\t\tMENU PRINCIPAL\n";
		//opciones
		cout<<"\n\t1. Sumar\n";
		cout<<"\t2. Restar\n";
		cout<<"\t3. Multiplicar\n";
		cout<<"\t4. Dividir\n";
		cout<<"\t5. Resido\n";
		cout<<"\t6. Salir\n";
		//leer
		cout<<"\n\tOpciones: ";
		cin >> opcion;
		*/
		//Alternativas
		system("cls");
		switch(opcion){
			case 1:
				menu_suma();
				break;
			case 2:
				menu_resta();
				break;
			case 3:
				menu_multiplicacion();
				break;
			case 4:
				menu_division();
				break;
			case 5:
				menu_residuo();
				break;
			case 6:
				repite=false;
				break;		
		}
						
	}while (repite);
}

void menu_suma(){
	
	bool repite= true;
	int opcion;
	int num1,num2;
	float num01,num02;


	const char *titulo="MENU SUMA";
	const char *opciones[] ={"Sumar enteros","Sumar flotantes","Salir"};
	int n = 3;
	
	
	do{
		opcion = menu(titulo, opciones, n);
			//Alternativas
			system("cls");
			switch(opcion){
				case 1:
				cout << "Ingrese primer numero: ";
				cin>>num1;
				cout << "Ingrese segundo numero: ";
				cin>>num2;
				cout<<"\n"<<num1<<" + "<<num2<<" = "<< num1+num2<<endl;
				system("pause>nul");
				system("cls");
				break;
				case 2:
				cout << "Ingrese primer numero: ";
				cin>>num01;
				cout << "Ingrese segundo numero: ";
				cin>>num02;
				cout<<"\n"<<num01<<" + "<<num02<<" = "<< num01+num02<<endl;
				system("pause>nul");
					break;

				case 3:
					repite=false;
					break;
				}
			}while (repite);
}

void menu_resta(){
	
	bool repite= true;
	int opcion;
	int num1,num2;
	float num01,num02;

	const char *titulo="MENU RESTA";
	const char *opciones[] ={"Restar enteros","Restar flotantes","Salir"};
	int n = 3;
	
	
	do{
		opcion = menu(titulo, opciones, n);
			//Alternativas
			system("cls");
			switch(opcion){
				case 1:
				cout << "Ingrese primer numero: ";
				cin>>num1;
				cout << "Ingrese segundo numero: ";
				cin>>num2;
				cout<<"\n"<<num1<<" - "<<num2<<" = "<< num1-num2<<endl;
				system("pause>nul");
				
				break;
				case 2:
				cout << "Ingrese primer numero: ";
				cin>>num01;
				cout << "Ingrese segundo numero: ";
				cin>>num02;
				cout<<"\n"<<num01<<" + "<<num02<<" = "<< num01-num02<<endl;
				system("pause>nul");
					break;

				case 3:
					repite=false;
					break;
				}
			}while (repite);
}

void menu_multiplicacion(){
	
	bool repite= true;
	int opcion;
	int num1,num2;
	float num01,num02;
	
	const char *titulo="MENU MULTIPLICACION";
	const char *opciones[] ={"Multiplicar enteros","Multiplicar flotantes","Salir"};
	int n = 3;
	
	
	do{
		opcion = menu(titulo, opciones, n);
			//Alternativas
			system("cls");
			switch(opcion){
				case 1:
				cout << "Ingrese primer numero: ";
				cin>>num1;
				cout << "Ingrese segundo numero: ";
				cin>>num2;
				cout<<"\n"<<num1<<" x "<<num2<<" = "<< num1*num2<<endl;
				system("pause>nul");
				
				break;
				case 2:
				cout << "Ingrese primer numero: ";
				cin>>num01;
				cout << "Ingrese segundo numero: ";
				cin>>num02;
				cout<<"\n"<<num01<<" * "<<num02<<" = "<< num01*num02<<endl;
				system("pause>nul");
					break;

				case 3:
					repite=false;
					break;
				}
			}while (repite);
}

void menu_division(){
	
	bool repite= true;
	int opcion;
	int num1,num2;
	float num01,num02;
	
	const char *titulo="MENU DIVISION";
	const char *opciones[] ={"Dividir enteros","Dividir flotantes","Salir"};
	int n = 3;
	
	
	do{
		opcion = menu(titulo, opciones, n);
			//Alternativas
			system("cls");
			switch(opcion){
				case 1:
				cout << "Ingrese primer numero: ";
				cin>>num1;
				cout << "Ingrese segundo numero: ";
				cin>>num2;
				if(num2==0){
					cout<<"\nNo se puede dividir por cero."<<endl;
				}
				else{
					cout<<"\n"<<num1<<" / "<<num2<<" = "<< num1%num2<<endl;
				}
				system("pause>nul");
				
				break;
				case 2:
				cout << "Ingrese primer numero: ";
				cin>>num01;
				cout << "Ingrese segundo numero: ";
				cin>>num02;
				if(num2==0){
					cout<<"\nNo se puede dividir por cero."<<endl;
				}
				else{
					cout<<"\n"<<num01<<" / "<<num02<<" = "<< num1%num2<<endl;
				}				
				system("pause>nul");
					break;

				case 3:
					repite=false;
					break;
				}
			}while (repite);;
}
void menu_residuo(){
	
	bool repite= true;
	int opcion;
	int num1,num2;

	
	const char *titulo="MENU RESIDUO";
	const char *opciones[] ={"Residuo enteros","Residuo flotantes","Salir"};
	int n = 3;
	
	
	do{
		opcion = menu(titulo, opciones, n);
			//Alternativas
			system("cls");
			switch(opcion){
				case 1:
				cout << "Ingrese primer numero: ";
				cin>>num1;
				cout << "Ingrese segundo numero: ";
				cin>>num2;
				if(num2==0){
					cout<<"\nNo se puede el residuo de cero."<<endl;
				}
				else{
					cout<<"\n"<<num1<<" % "<<num2<<" = "<< num1%num2<<endl;
				}
				system("pause>nul");
				
				break;
				case 2:
				cout << "Ingrese primer numero: ";
				cin>>num1;
				cout << "Ingrese segundo numero: ";
				cin>>num2;
				if(num2==0){
					cout<<"\nNo se puede el residuo de cero."<<endl;
				}
				else{
					cout<<"\n"<<num1<<" % "<<num2<<" = "<< num1%num2<<endl;
				}				
				system("pause>nul");
					break;

				case 3:
					repite=false;
					break;
				}
			}while (repite);
}


int menu(const char *titulo,const char *opciones[],int n){
	
	int opcionSeleccionada = 1;
	int tecla;
	bool repite = true;
	do{
		system("cls");
		gotoxy( 5, 3 + opcionSeleccionada);cout<<"==>";
		//Imprime el titulo
		gotoxy (15,2);cout<<titulo;
		//imprime las opciones
		for(int i=0;i<n;i++) {
			gotoxy (10,4+i);cout<< i+1<<")"<<opciones[i];
		}
		
		do{
			tecla =getch();
		}while(tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != TECLA_ENTER);
		
		switch(tecla){
			case TECLA_ARRIBA:
				opcionSeleccionada--;
				if(opcionSeleccionada<1){
					opcionSeleccionada=n;
				}
				break;
			case TECLA_ABAJO:
				opcionSeleccionada++;
				if(opcionSeleccionada>n){
					opcionSeleccionada=1;
				}
				break;
			case TECLA_ENTER:
				repite=false;
				break;
		}
		
	}while(repite);
	
	return opcionSeleccionada;
	
}
