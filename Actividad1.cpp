#include <iostream>

using namespace std;

int main()
{
	
	//Declaro variables globales
	char zap_X[50];
	char disponible;
	int referencia, talla, costo, valor;

	
	
    cout<<"ADMINISTRAR VENTA DE ZAPATOS"<<endl;
    cout<<"Digite la referecia del zapato"<<endl;cin>>referencia;
    cout<<"Digite la referecia del zapato"<<endl;
    
	cin.getline( zap_X,50);
	cin.getline( zap_X,50);
    
	cout<<"Digite la talla del zapato"<<endl;cin>>talla;
	cout<<"Digite la disponibilidas del zapato(F o V)"<<endl;cin>>disponible;
    cout<<"Digite el costo del zapato"<<endl;cin>>costo;
    cout<<"Digite el valor de venta del zapato"<<endl;cin>>valor;
    system("cls");
    cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES:"<<endl;
    cout<<" REFERENCIA: "<< referencia <<endl;
	cout<< " DESCRIPCION: " << zap_X << endl;
    cout<<" TALLA: "<< talla <<endl;
    cout<<" DISPONIBILIDAD: "<< disponible <<endl;
    cout<<" COSTO: "<< costo <<endl;
    cout<<" VALOR "<< valor <<endl;
    cout<<"Gracias por digitar tu informacion. "<<endl;
    
     
    
    
    
    

    return 0;
}

