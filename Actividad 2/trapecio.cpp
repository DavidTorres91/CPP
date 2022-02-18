#include <iostream>

using namespace std;

int main()
{
	
	//Declaro variables globales

	int base1, base2, altura, area;

	
	
    cout<<"Calculador de Area de un Trapecio"<<endl;
    
    cout<<"Digite Base 1 del Trapecio."<<endl;cin>>base1;
    cout<<"Digite Base 2 del Trapecio."<<endl;cin>>base2;

	cout<<"Digite la Altura del Trapecio"<<endl;cin>>altura;
	area = ((base1*base2)/2)*altura;
    system("cls");
	
    cout<<"Calculador de Area de un Trapecio"<<endl;		
	
	cout<<"El area de un Trapecio de Base 1  " << base1 << " Base 2  " << base1 <<" y Altura " << altura << " es: "<<endl;
    cout<< area <<endl;
    cout<<"Gracias por usar Calculadora de area Trapecio"<<endl;


    
    //Anibal David Panameño
    
    

    return 0;
}

