#include <iostream>

using namespace std;

int main()
{
	
	system("cls");
	//Declaro variables globales
	char ref_x[50], zap_X[50];
	char disponible;
	int talla;
	float porcentajeutilidad, costo, valor, cantidad, utilidad, utilidadtotal;

	
	
    cout<<"ADMINISTRAR VENTA DE ZAPATOS"<<endl;
    cout<<"Digite la referecia del zapato"<<endl;cin>>ref_x;
    cout<<"Digite la descripcion del zapato"<<endl;
    
	cin.ignore(1,' ');
	cin.getline( zap_X,50);
    
	cout<<"Digite la talla del zapato"<<endl;cin>>talla;
	cout<<"Digite la disponibilidas del zapato(F o V)"<<endl;cin>>disponible;
	cout<<"Digite la cantidad de zapatos"<<endl;cin>>cantidad;	
    cout<<"Digite el costo unitario del zapato"<<endl;cin>>costo;
    cout<<"Digite el valor de venta del zapato"<<endl;cin>>valor;
    system("cls");
    cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES:"<<endl;
    cout<<" REFERENCIA: "<< ref_x <<endl;
	cout<<" DESCRIPCION: " << zap_X << endl;
    cout<<" TALLA: "<< talla <<endl;
    cout<<" DISPONIBILIDAD: "<< disponible <<endl;
    cout<<" CANTIDAD: "<< cantidad <<endl;
    cout<<" COSTO UNITARIO: "<< costo <<endl;
    cout<<" VALOR UNITARIO "<< valor <<endl;
    
    cout<<" PRECIO TOTAL DE "<< cantidad << " UNIDADES ES: "<< cantidad*costo << endl;
    utilidad=valor - costo;
	cout<<" UTILIDAD POR UNIDAD: "<< utilidad <<endl;
    utilidadtotal=(utilidad)*cantidad;
    cout<<" UTILIDAD TOTAL: "<< utilidadtotal <<endl;
    porcentajeutilidad = (utilidad*100)/costo;
    cout<<" PROCENTAJE DE UTILIDAD: "<< porcentajeutilidad << "% " <<endl;    
    
    cout<<"Gracias por digitar tu informacion. "<<endl;
    
     
    
    //Anibal David Panameño
    
    

    return 0;
}

