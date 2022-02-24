#include <iostream>
#include <cstring>

using namespace std;

int main()
{    
	//Declaro variables globales
	char ref_x[50],des_zap[50];
	char registro;
	int  talla, costo;


	
	cout<<"\t Desea registrar un zapato? S/N:" ;cin>>registro;
	registro = tolower(registro);

	
	while(registro == 's' ){
		cout<<"Digite la referencia: ";cin>>ref_x;

		cout<<"Digite la descripcion: ";
		cin.ignore(1,' ');
		cin.getline( des_zap,50);
		cout<<"Digite la talla: ";cin>>ref_x;
		cout<<"Costo: ";cin>>costo;
		
		cout<<"\t Desea registrar Otro zapato? S/N:";cin>>registro;
		registro = tolower(registro);

	}	


    return 0;
}
    //Anibal David Panameño
