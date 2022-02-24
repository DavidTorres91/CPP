#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	
	system("cls");
	//Declaro variables globales
	char ref_x[50], zap_X[50];
	char disponible;
	string tipo;
	int  costo, talla;
	float porcentajeutilidad, valor, cantidad, utilidad, utilidadtotal;

	
	
    cout<<"ADMINISTRAR VENTA DE ZAPATOS"<<endl;
    cout<<"Digite la referecia del zapato"<<endl;cin>>ref_x;
    cout<<"Digite la descripcion del zapato"<<endl;
    
	cin.ignore(1,' ');
	cin.getline( zap_X,50);
    
	cout<<"Digite la talla del zapato"<<endl;cin>>talla;
	cout<<"Digite la disponibilidas del zapato(F o V)"<<endl;cin>>disponible;
	cout<<"Digite la cantidad de zapatos"<<endl;cin>>cantidad;	
    cout<<"Digite el costo unitario del zapato"<<endl;cin>>costo;
  
    system("cls");
    
	switch(costo){
		case 0 ... 30000 :	
	    	utilidad = (costo * 50)/100 ;
	    	valor = utilidad + costo;
	    	tipo = "A" ;
	    	break;
		case 30001 ... 60000 :	
		    utilidad = (costo * 40)/100 ;
	    	valor = utilidad + costo;
	    	tipo = "B" ;
	    	break;	

	    default :
	    	utilidad = (costo * 30)/100 ;
	    	valor = utilidad + costo;
	    	tipo = "C" ;
	    	break;
	}
    
    cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES:"<<endl;
    cout<<" REFERENCIA: "<< ref_x <<endl;
    cout<<" TIPO: "<< tipo <<endl;    
	cout<<" DESCRIPCION: " << zap_X << endl;
    cout<<" TALLA: "<< talla <<endl;
    cout<<" DISPONIBILIDAD: "<< disponible <<endl;
    cout<<" CANTIDAD: "<< cantidad <<endl;
    cout<<" COSTO UNITARIO: "<< costo <<endl;
  	cout<<" COSTO TOTAL: "<< costo * cantidad<<endl;
    cout<<" VALOR UNITARIO: "<< valor <<endl;
	cout<<" VALOR TOTAL DE "<< cantidad << " UNIDADES ES: "<< cantidad*valor << endl;
	cout<<" UTILIDAD POR UNIDAD: "<< utilidad <<endl;
    utilidadtotal=(utilidad)*cantidad;
    cout<<" UTILIDAD TOTAL: "<< utilidadtotal <<endl;
    porcentajeutilidad = (utilidad*100)/costo;
    cout<<" PROCENTAJE DE UTILIDAD: "<< porcentajeutilidad << "% " <<endl;    
    
    cout<<"Gracias por digitar tu informacion. "<<endl;
    
     
    
    //Anibal David Panameño
    
    

    return 0;
}

